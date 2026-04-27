#include "kmboxNet.h"
#include "HidTable.h"
#include <winsock2.h>
#include <windows.h>
#include <time.h>

SOCKET sockClientfd=0;					//缃戠粶閫氫俊鍙ユ焺
client_tx tx;							//鍙戦€佺殑鍐呭
client_tx rx;							//鎺ユ敹鐨勫唴瀹?
SOCKADDR_IN addrSrv;
soft_mouse_t    softmouse;				//杞欢榧犳爣鏁版嵁
soft_keyboard_t softkeyboard;			//杞欢閿洏鏁版嵁
static int monitor_run=0;				//鐗╃悊閿紶鐩戞帶鏄惁杩愯
static int mask_keyboard_mouse_flag=0;	//閿紶灞忚斀鐘舵€?
#define monitor_begin 1
#define monitor_ok    2
#define monitor_exit  0

#pragma pack(1)
typedef struct {
	unsigned char report_id;
	unsigned char buttons;		// 8 buttons available
	short x;					// -32767 to 32767
	short y;					// -32767 to 32767
	short wheel;				// -32767 to 32767
}standard_mouse_report_t;

typedef struct {
	unsigned char report_id;
	unsigned char buttons;      // 8 buttons鎺у埗閿?
	unsigned char data[10];     //甯歌鎸夐敭
}standard_keyboard_report_t;
#pragma pack()

standard_mouse_report_t		hw_mouse;   //纭欢榧犳爣娑堟伅
standard_keyboard_report_t	hw_keyboard;//纭欢閿洏娑堟伅

//鐢熸垚涓€涓狝鍒癇涔嬮棿鐨勯殢鏈烘暟
int myrand(int a, int b)
{	int min = a < b ? a : b;
	int max = a > b ? a : b;
	return ((rand() % (max - min)) + min);
}

unsigned int StrToHex( char* pbSrc, int nLen)
{	char h1, h2;
	unsigned char s1, s2;
	int i;
	unsigned int pbDest[16] = { 0 };
	for (i = 0; i < nLen; i++)	{
		h1 = pbSrc[2 * i];
		h2 = pbSrc[2 * i + 1];
		s1 = toupper(h1) - 0x30;
		if (s1 > 9)
			s1 -= 7;
		s2 = toupper(h2) - 0x30;
		if (s2 > 9)
			s2 -= 7;
		pbDest[i] = s1 * 16 + s2;
	}
	return pbDest[0]<<24| pbDest[1]<<16| pbDest[2]<<8| pbDest[3];
}

int NetRxReturnHandle(client_tx *rx,client_tx *tx)		 //鎺ユ敹鐨勫唴瀹?
{
	if (rx->head.cmd != tx->head.cmd)
		return  err_net_cmd;//鍛戒护鐮侀敊璇?
	if (rx->head.indexpts != tx->head.indexpts)
		return  err_net_pts;//鏃堕棿鎴抽敊璇?
	return  rx->head.rand;//鐪熸鐨勮繑鍥炲€?


}


/*
杩炴帴kmboxNet鐩掑瓙杈撳叆鍙傛暟鍒嗗埆鏄洅瀛?
ip  锛氱洅瀛愮殑IP鍦板潃 锛堟樉绀哄睆涓婁細鏈夋樉绀?渚嬪锛?92.168.2.88锛?
port: 閫氫俊绔彛鍙?  锛堟樉绀哄睆涓婁細鏈夋樉绀猴紝渚嬪锛?234锛?
mac : 鐩掑瓙鐨刴ac鍦板潃锛堟樉绀哄睆骞曚笂鏈夋樉绀猴紝渚嬪锛?2345锛?
杩斿洖鍊?鍙傝鏋氫妇绫诲瀷
*/
int kmNet_init(char* ip, char* port, char* mac)
{	WORD wVersionRequested;WSADATA wsaData;	int err;
	wVersionRequested = MAKEWORD(1, 1);
	err = WSAStartup(wVersionRequested, &wsaData);
	if (err != 0) 		return err_creat_socket;
	if (LOBYTE(wsaData.wVersion) != 1 || HIBYTE(wsaData.wVersion) != 1) {
		WSACleanup(); sockClientfd = -1;
		return err_net_version;
	}
	srand((unsigned)time(NULL));
	sockClientfd = socket(AF_INET, SOCK_DGRAM, 0);
	addrSrv.sin_addr.S_un.S_addr = inet_addr(ip);
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_port = htons(atoi(port));//绔彛UUID[1]>>16楂?6浣?
	tx.head.mac		 = StrToHex(mac, 4); //鐩掑瓙鐨刴ac 鍥哄畾 UUID[1]
	tx.head.rand	 = rand();
	tx.head.indexpts = 0;		   //鎸囦护缁熻鍊?
	tx.head.cmd		 = cmd_connect;//鎸囦护
	memset(&softmouse, 0, sizeof(softmouse));		//杞欢鏁版嵁娓呴浂
	memset(&softkeyboard, 0, sizeof(softkeyboard));
	err=sendto(sockClientfd, (const char *)&tx, sizeof(cmd_head_t), 0, (struct sockaddr *) & addrSrv, sizeof(addrSrv));
	Sleep(20);//绗竴娆¤繛鎺ュ彲鑳芥椂闂存瘮杈冧箙
	int clen = sizeof(addrSrv);
	err=recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&addrSrv, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}

/*
榧犳爣绉诲姩x,y涓崟浣嶃€備竴娆℃€хЩ鍔ㄣ€傛棤杞ㄨ抗妯℃嫙锛岄€熷害鏈€蹇?
鑷繁鍐欒建杩圭Щ鍔ㄦ椂浣跨敤姝ゅ嚱鏁般€?
杩斿洖鍊硷細0姝ｅ父鎵ц锛屽叾浠栧€煎紓甯搞€?
*/
int kmNet_mouse_move(short x, short y)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mouse_move;	//鎸囦护
	tx.head.rand = rand();			//闅忔満娣锋穯鍊?
	softmouse.x = x;
	softmouse.y = y;
	memcpy(&tx.cmd_mouse, &softmouse, sizeof(soft_mouse_t));
	int length = sizeof(cmd_head_t) + sizeof(soft_mouse_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	softmouse.x = 0;
	softmouse.y = 0;
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}



/*
榧犳爣宸﹂敭鎺у埗
isdown :0鏉惧紑 锛?鎸変笅
杩斿洖鍊硷細0姝ｅ父鎵ц锛屽叾浠栧€煎紓甯搞€?
*/
int kmNet_mouse_left(int isdown)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mouse_left;	//鎸囦护
	tx.head.rand = rand();			//闅忔満娣锋穯鍊?
	softmouse.button = (isdown ? (softmouse.button|0x01) :(softmouse.button&(~0x01)));
	memcpy(&tx.cmd_mouse, &softmouse, sizeof(soft_mouse_t));
	int length = sizeof(cmd_head_t) + sizeof(soft_mouse_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}

/*
榧犳爣涓敭鎺у埗
isdown :0鏉惧紑 锛?鎸変笅
杩斿洖鍊硷細0姝ｅ父鎵ц锛屽叾浠栧€煎紓甯搞€?
*/
int kmNet_mouse_middle(int isdown)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mouse_middle;	//鎸囦护
	tx.head.rand = rand();			//闅忔満娣锋穯鍊?
	softmouse.button = (isdown ? (softmouse.button | 0x04) : (softmouse.button & (~0x04)));
	memcpy(&tx.cmd_mouse, &softmouse, sizeof(soft_mouse_t));
	int length = sizeof(cmd_head_t) + sizeof(soft_mouse_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}

/*
榧犳爣鍙抽敭鎺у埗
isdown :0鏉惧紑 锛?鎸変笅
杩斿洖鍊硷細0姝ｅ父鎵ц锛屽叾浠栧€煎紓甯搞€?
*/
int kmNet_mouse_right(int isdown)
{	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mouse_right;	//鎸囦护
	tx.head.rand = rand();			//闅忔満娣锋穯鍊?
	softmouse.button = (isdown ? (softmouse.button | 0x02) : (softmouse.button & (~0x02)));
	memcpy(&tx.cmd_mouse, &softmouse, sizeof(soft_mouse_t));
	int length = sizeof(cmd_head_t) + sizeof(soft_mouse_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}

//榧犳爣婊氳疆鎺у埗
int kmNet_mouse_wheel(int wheel)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mouse_wheel;	//鎸囦护
	tx.head.rand = rand();			//闅忔満娣锋穯鍊?
	softmouse.wheel = wheel;
	memcpy(&tx.cmd_mouse, &softmouse, sizeof(soft_mouse_t));
	int length = sizeof(cmd_head_t) + sizeof(soft_mouse_t);
	softmouse.wheel = 0;
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}


/*
榧犳爣鍏ㄦ姤鍛婃帶鍒跺嚱鏁?
*/
int kmNet_mouse_all(int button, int x, int y, int wheel)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mouse_wheel;	//鎸囦护
	tx.head.rand = rand();			//闅忔満娣锋穯鍊?
	softmouse.button = button;
	softmouse.x = x;
	softmouse.y = y;
	softmouse.wheel = wheel;
	memcpy(&tx.cmd_mouse, &softmouse, sizeof(soft_mouse_t));
	int length = sizeof(cmd_head_t) + sizeof(soft_mouse_t);
	softmouse.x = 0;
	softmouse.y = 0;
	softmouse.wheel = 0;
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}

/*
榧犳爣绉诲姩x,y涓崟浣嶃€傛ā鎷熶汉涓虹Щ鍔▁,y涓崟浣嶃€備笉浼氬嚭鐜伴敭榧犲紓甯哥殑妫€娴?
娌℃湁鍐欑Щ鍔ㄦ洸绾跨殑鎺ㄨ崘鐢ㄦ鍑芥暟銆傛鍑芥暟涓嶄細鍑虹幇璺宠穬鐜拌薄锛屾寜鐓ф渶灏忔杩涢€艰繎
鐩爣鐐广€傝€楁椂姣攌mNet_mouse_move楂樸€?
ms鏄缃Щ鍔ㄩ渶瑕佸灏戞绉?娉ㄦ剰ms缁欑殑鍊间笉瑕佸お灏忥紝澶皬涓€鏍蜂細鍑虹幇閿紶鏁版嵁寮傚父銆?
灏介噺鍍忎汉鎿嶄綔銆傚疄闄呯敤鏃朵細姣攎s灏忋€?
*/
int kmNet_mouse_move_auto(int x, int y,int ms)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				 //鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mouse_automove;//鎸囦护
	tx.head.rand = ms;			     //闅忔満娣锋穯鍊?
	softmouse.x = x;
	softmouse.y = y;
	memcpy(&tx.cmd_mouse, &softmouse, sizeof(soft_mouse_t));
	int length = sizeof(cmd_head_t) + sizeof(soft_mouse_t);
	softmouse.x = 0;				//娓呴浂
	softmouse.y = 0;				//娓呴浂
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}



/*
浜岄樁璐濆灏旀洸绾挎帶鍒?
x,y 	:鐩爣鐐瑰潗鏍?
ms		:鎷熷悎姝よ繃绋嬬敤鏃讹紙鍗曚綅ms锛?
x1,y1	:鎺у埗鐐筽1鐐瑰潗鏍?
x2,y2	:鎺у埗鐐筽2鐐瑰潗鏍?
*/
int kmNet_mouse_move_beizer(int x, int y, int ms,int x1,int y1,int x2,int y2)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;			 //鎸囦护缁熻鍊?
	tx.head.cmd = cmd_bazerMove; //鎸囦护
	tx.head.rand = ms;			 //闅忔満娣锋穯鍊?
	softmouse.x = x;
	softmouse.y = y;
	softmouse.point[0] = x1;
	softmouse.point[1] = y1;
	softmouse.point[2] = x2;
	softmouse.point[3] = y2;
	memcpy(&tx.cmd_mouse, &softmouse, sizeof(soft_mouse_t));
	int length = sizeof(cmd_head_t) + sizeof(soft_mouse_t);
	softmouse.x = 0;
	softmouse.y = 0;
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}



int kmNet_keydown(int vk_key)
{	int i;
	if (vk_key >= KEY_LEFTCONTROL && vk_key <= KEY_RIGHT_GUI)//鎺у埗閿?
	{
		switch (vk_key)
		{
			case KEY_LEFTCONTROL: softkeyboard.ctrl |= BIT0; break;
			case KEY_LEFTSHIFT:   softkeyboard.ctrl |= BIT1; break;
			case KEY_LEFTALT:     softkeyboard.ctrl |= BIT2; break;
			case KEY_LEFT_GUI:    softkeyboard.ctrl |= BIT3; break;
			case KEY_RIGHTCONTROL:softkeyboard.ctrl |= BIT4; break;
			case KEY_RIGHTSHIFT:  softkeyboard.ctrl |= BIT5; break;
			case KEY_RIGHTALT:    softkeyboard.ctrl |= BIT6; break;
			case KEY_RIGHT_GUI:   softkeyboard.ctrl |= BIT7; break;
		}
	}
	else
	{//甯歌閿? 
		for (i = 0; i < 10; i++)//棣栧厛妫€鏌ラ槦鍒椾腑鏄惁瀛樺湪vk_key
		{	if (softkeyboard.button[i] == vk_key)
				goto KM_down_send;// 闃熷垪閲岄潰宸茬粡鏈塿k_key 鐩存帴鍙戦€佸氨琛?
		}
		//闃熷垪閲岄潰娌℃湁vk_key 
		for (i = 0; i < 10; i++)//閬嶅巻鎵€鏈夌殑鏁版嵁锛屽皢vk_key娣诲姞鍒伴槦鍒楅噷
		{
			if (softkeyboard.button[i] == 0)
			{// 闃熷垪閲岄潰宸茬粡鏈塿k_key 鐩存帴鍙戦€佸氨琛?
				softkeyboard.button[i] = vk_key;
				goto KM_down_send;
			}
		}
		//闃熷垪宸茬粡婊′簡 閭ｄ箞灏卞墧闄ゆ渶寮€濮嬬殑閭ｄ釜
		memcpy(&softkeyboard.button[0], &softkeyboard.button[1], 10);
		softkeyboard.button[9] = vk_key;
	}
KM_down_send:
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_keyboard_all;	//鎸囦护
	tx.head.rand = rand();			// 闅忔満娣锋穯鍊?
	memcpy(&tx.cmd_keyboard, &softkeyboard, sizeof(soft_keyboard_t));
	int length = sizeof(cmd_head_t) + sizeof(soft_keyboard_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}




int kmNet_keyup(int vk_key)
{
	int i;
	if (vk_key >= KEY_LEFTCONTROL && vk_key <= KEY_RIGHT_GUI)//鎺у埗閿?
	{
		switch (vk_key)
		{
		case KEY_LEFTCONTROL: softkeyboard.ctrl &= ~BIT0; break;
		case KEY_LEFTSHIFT:   softkeyboard.ctrl &= ~BIT1; break;
		case KEY_LEFTALT:     softkeyboard.ctrl &= ~BIT2; break;
		case KEY_LEFT_GUI:    softkeyboard.ctrl &= ~BIT3; break;
		case KEY_RIGHTCONTROL:softkeyboard.ctrl &= ~BIT4; break;
		case KEY_RIGHTSHIFT:  softkeyboard.ctrl &= ~BIT5; break;
		case KEY_RIGHTALT:    softkeyboard.ctrl &= ~BIT6; break;
		case KEY_RIGHT_GUI:   softkeyboard.ctrl &= ~BIT7; break;
		}
	}
	else
	{//甯歌閿? 
		for (i = 0; i < 10; i++)//棣栧厛妫€鏌ラ槦鍒椾腑鏄惁瀛樺湪vk_key
		{
			if (softkeyboard.button[i] == vk_key)// 闃熷垪閲岄潰宸茬粡鏈塿k_key 
			{
				memcpy(&softkeyboard.button[i], &softkeyboard.button[i + 1], 10 - i);
				softkeyboard.button[9] = 0;
				goto KM_up_send;
			}
		}
	}
KM_up_send:
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_keyboard_all;	//鎸囦护
	tx.head.rand = rand();			// 闅忔満娣锋穯鍊?
	memcpy(&tx.cmd_keyboard, &softkeyboard, sizeof(soft_keyboard_t));
	int length = sizeof(cmd_head_t) + sizeof(soft_keyboard_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}


//閲嶅惎鐩掑瓙
int kmNet_reboot(void)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_reboot;		//鎸囦护
	tx.head.rand = rand();			// 闅忔満娣锋穯鍊?
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	WSACleanup();
	sockClientfd = -1;
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);

}



//鐩戝惉鐗╃悊閿紶
static HANDLE handle_listen = NULL;
DWORD WINAPI ThreadListenProcess(LPVOID lpParameter)
{
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);			//鍒涘缓濂楁帴瀛楋紝SOCK_DGRAM鎸囨槑浣跨敤 UDP 鍗忚
	SOCKET sock = socket(AF_INET, SOCK_DGRAM, 0);	//缁戝畾濂楁帴瀛?
	sockaddr_in servAddr;
	memset(&servAddr, 0, sizeof(servAddr));			 //姣忎釜瀛楄妭閮界敤0濉厖
	servAddr.sin_family = PF_INET;					//浣跨敤IPv4鍦板潃
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY);	 //鑷姩鑾峰彇IP鍦板潃
	servAddr.sin_port = htons(addrSrv.sin_port+1);  //绔彛
	bind(sock, (SOCKADDR*)&servAddr, sizeof(SOCKADDR));
	SOCKADDR cliAddr;  //瀹㈡埛绔湴鍧€淇℃伅
	int nSize = sizeof(SOCKADDR);
	char buff[1024];  //缂撳啿鍖?
	monitor_run = monitor_ok;
	while (monitor_run) {
		int strLen = recvfrom(sock, buff, 1024, 0, &cliAddr, &nSize); 
		memcpy(&hw_mouse, buff, sizeof(hw_mouse));							//鐗╃悊榧犳爣鐘舵€?
		memcpy(&hw_keyboard, &buff[sizeof(hw_mouse)], sizeof(hw_keyboard));	//鐗╃悊閿洏鐘舵€?
	}
	closesocket(sock);
	return 0;

}

//浣胯兘閿紶鐩戞帶
int kmNet_monitor(char enable)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;				//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_monitor;		//鎸囦护
	if(enable)
	tx.head.rand = (addrSrv .sin_port+1)|0xaa55<<16;	// 闅忔満娣锋穯鍊?
	else 
	tx.head.rand = 0;	// 闅忔満娣锋穯鍊?
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (enable)//鎵撳紑鐩戝惉鍔熻兘
	{
		do
		{	if (handle_listen == NULL)
			{
				DWORD lpThreadID;
				monitor_run = monitor_begin;
				handle_listen = CreateThread(NULL, 0, ThreadListenProcess, NULL, 0, &lpThreadID);
			}
			Sleep(10);
		} while (monitor_run!= monitor_ok); //绛夊緟鐩戝惉绾跨▼鍚姩
	}
	else {
		handle_listen == NULL;
		monitor_run = monitor_exit;
	}
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}


/*
鐩戝惉鐗╃悊榧犳爣宸﹂敭鐘舵€?
杩斿洖鍊?
-1锛氳繕鏈紑鍚洃鍚姛鑳?闇€瑕佸厛璋冪敤kmNet_monitor锛?锛?
0 :鐗╃悊榧犳爣宸﹂敭鏉惧紑
1锛氱墿鐞嗛紶鏍囧乏閿寜涓?
*/
int kmNet_monitor_mouse_left()
{
	if (monitor_run != monitor_ok) return -1;
	return (hw_mouse.buttons & 0x01)?1:0;
}


/*//鐩戝惉鐗╃悊榧犳爣涓敭鐘舵€?
杩斿洖鍊?
-1锛氳繕鏈紑鍚洃鍚姛鑳?闇€瑕佸厛璋冪敤kmNet_monitor锛?锛?
0 :鐗╃悊榧犳爣涓敭鏉惧紑
1锛氱墿鐞嗛紶鏍囦腑閿寜涓?
*/
int kmNet_monitor_mouse_middle()
{
	if (monitor_run != monitor_ok) return -1;
	return (hw_mouse.buttons & 0x04) ? 1 : 0;
}

/*//鐩戝惉鐗╃悊榧犳爣鍙抽敭鐘舵€?
杩斿洖鍊?
-1锛氳繕鏈紑鍚洃鍚姛鑳?闇€瑕佸厛璋冪敤kmNet_monitor锛?锛?
0 :鐗╃悊榧犳爣鍙抽敭鏉惧紑
1锛氱墿鐞嗛紶鏍囧彸閿寜涓?
*/
int kmNet_monitor_mouse_right()
{
	if (monitor_run != monitor_ok) return -1;
	return (hw_mouse.buttons & 0x02) ? 1 : 0;
}


/*//鐩戝惉鐗╃悊榧犳爣渚ч敭1鐘舵€?
杩斿洖鍊?
-1锛氳繕鏈紑鍚洃鍚姛鑳?闇€瑕佸厛璋冪敤kmNet_monitor锛?锛?
0 :鐗╃悊榧犳爣渚ч敭1鏉惧紑
1锛氱墿鐞嗛紶鏍囦晶閿?鎸変笅
*/
int kmNet_monitor_mouse_side1()
{
	if (monitor_run != monitor_ok) return -1;
	return (hw_mouse.buttons & 0x08) ? 1 : 0;
}

/*//鐩戝惉鐗╃悊榧犳爣渚ч敭2鐘舵€?
杩斿洖鍊?
-1锛氳繕鏈紑鍚洃鍚姛鑳?闇€瑕佸厛璋冪敤kmNet_monitor锛?锛?
0 :鐗╃悊榧犳爣渚ч敭2鏉惧紑
1锛氱墿鐞嗛紶鏍囦晶閿?鎸変笅
*/
int kmNet_monitor_mouse_side2()
{
	if (monitor_run != monitor_ok) return -1;
	return (hw_mouse.buttons & 0x10) ? 1 : 0;
}



//鐩戝惉閿洏鎸囧畾鎸夐敭鐘舵€?
int kmNet_monitor_keyboard(unsigned char  vk_key)
{
	if (monitor_run != monitor_ok) return -1;
	if (vk_key >= KEY_LEFTCONTROL && vk_key <= KEY_RIGHT_GUI)//鎺у埗閿?
	{
		switch (vk_key)
		{
		case KEY_LEFTCONTROL: return  hw_keyboard.buttons & BIT0 ? 1 : 0;
		case KEY_LEFTSHIFT:   return  hw_keyboard.buttons & BIT1 ? 1 : 0;
		case KEY_LEFTALT:     return  hw_keyboard.buttons & BIT2 ? 1 : 0;
		case KEY_LEFT_GUI:    return  hw_keyboard.buttons & BIT3 ? 1 : 0;
		case KEY_RIGHTCONTROL:return  hw_keyboard.buttons & BIT4 ? 1 : 0;
		case KEY_RIGHTSHIFT:  return  hw_keyboard.buttons & BIT5 ? 1 : 0;
		case KEY_RIGHTALT:    return  hw_keyboard.buttons & BIT6 ? 1 : 0;
		case KEY_RIGHT_GUI:   return  hw_keyboard.buttons & BIT7 ? 1 : 0;
		}
	}
	else//甯歌閿?
	{
		for (int i = 0; i < 10; i++)
		{
			if (hw_keyboard.data[i] == vk_key)
			{
				return 1;
			}
		}
	}
	return 0;

}


//寮€鍚洅瀛愬唴閮ㄦ墦鍗颁俊鎭苟鍙戦€佸埌鎸囧畾绔彛锛堣皟璇曚娇鐢級
int kmNet_debug(short port, char enable)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_debug;			//鎸囦护
	tx.head.rand = port | enable << 16;	// 闅忔満娣锋穯鍊?
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);

}

//灞忚斀榧犳爣宸﹂敭 
int kmNet_mask_mouse_left(int enable)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mask_mouse;		//鎸囦护
	tx.head.rand = enable? (mask_keyboard_mouse_flag |= BIT0): (mask_keyboard_mouse_flag &= ~BIT0);	// 灞忚斀榧犳爣宸﹂敭
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}

//灞忚斀榧犳爣鍙抽敭 
int kmNet_mask_mouse_right(int enable)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mask_mouse;		//鎸囦护
	tx.head.rand = enable ? (mask_keyboard_mouse_flag |= BIT1) : (mask_keyboard_mouse_flag &= ~BIT1);	// 灞忚斀榧犳爣宸﹂敭
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}


//灞忚斀榧犳爣涓敭 
int kmNet_mask_mouse_middle(int enable)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mask_mouse;		//鎸囦护
	tx.head.rand = enable ? (mask_keyboard_mouse_flag |= BIT2) : (mask_keyboard_mouse_flag &= ~BIT2);	// 灞忚斀榧犳爣宸﹂敭
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}


//灞忚斀榧犳爣渚ч敭閿? 
int kmNet_mask_mouse_side1(int enable)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mask_mouse;		//鎸囦护
	tx.head.rand = enable ? (mask_keyboard_mouse_flag |= BIT3) : (mask_keyboard_mouse_flag &= ~BIT3);	// 灞忚斀榧犳爣宸﹂敭
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}



//灞忚斀榧犳爣渚ч敭閿?
int kmNet_mask_mouse_side2(int enable)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mask_mouse;		//鎸囦护
	tx.head.rand = enable ? (mask_keyboard_mouse_flag |= BIT4) : (mask_keyboard_mouse_flag &= ~BIT4);	// 灞忚斀榧犳爣宸﹂敭
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}


//灞忚斀榧犳爣X杞村潗鏍?
int kmNet_mask_mouse_x(int enable)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mask_mouse;		//鎸囦护
	tx.head.rand = enable ? (mask_keyboard_mouse_flag |= BIT5) : (mask_keyboard_mouse_flag &= ~BIT5);	// 灞忚斀榧犳爣宸﹂敭
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}


//灞忚斀榧犳爣y杞村潗鏍?
int kmNet_mask_mouse_y(int enable)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mask_mouse;		//鎸囦护
	tx.head.rand = enable ? (mask_keyboard_mouse_flag |= BIT6) : (mask_keyboard_mouse_flag &= ~BIT6);	// 灞忚斀榧犳爣宸﹂敭
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}

//灞忚斀榧犳爣婊氳疆
int kmNet_mask_mouse_wheel(int enable)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mask_mouse;		//鎸囦护
	tx.head.rand = enable ? (mask_keyboard_mouse_flag |= BIT7) : (mask_keyboard_mouse_flag &= ~BIT7);	// 灞忚斀榧犳爣宸﹂敭
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}

 
//灞忚斀閿洏鎸囧畾鎸夐敭
int kmNet_mask_keyboard(short vkey)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_mask_mouse;		//鎸囦护
	tx.head.rand = (mask_keyboard_mouse_flag&0xff)|(vkey<<8);	// 灞忚斀閿洏vkey
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}

//瑙ｉ櫎灞忚斀鎵€鏈夊凡缁忚缃殑鐗╃悊灞忚斀
int kmNet_unmask_all()
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_unmask_all;		//鎸囦护
	mask_keyboard_mouse_flag = 0;
	tx.head.rand = mask_keyboard_mouse_flag;
	int length = sizeof(cmd_head_t);
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}



//璁剧疆閰嶇疆淇℃伅  鏀笽P涓庣鍙ｅ彿
int kmNet_setconfig( char *ip,unsigned short port)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	tx.head.indexpts++;					//鎸囦护缁熻鍊?
	tx.head.cmd = cmd_setconfig;		//鎸囦护
	tx.head.rand = inet_addr(ip); ;
	tx.u8buff.buff[0] = port >> 8;
	tx.u8buff.buff[1] = port >> 0;
	int length = sizeof(cmd_head_t)+2;
	sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
	SOCKADDR_IN sclient;
	int clen = sizeof(sclient);
	err = recvfrom(sockClientfd, (char*)&rx, 1024, 0, (struct sockaddr*)&sclient, &clen);
	if (err < 0)
		return err_net_rx_timeout;
	return NetRxReturnHandle(&rx, &tx);
}


//灏嗘暣涓狶CD灞忓箷鐢ㄦ寚瀹氶鑹插～鍏呫€?娓呭睆鍙互鐢ㄩ粦鑹?
int kmNet_lcd_color(unsigned short rgb565)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	for (int y = 0; y < 40; y++)
	{
		tx.head.indexpts++;		    //鎸囦护缁熻鍊?
		tx.head.cmd = cmd_showpic;	//鎸囦护
		tx.head.rand = 0|y*4;
		for(int c=0;c<512;c++)
		  tx.u16buff.buff[c]=rgb565;
		int length = sizeof(cmd_head_t) + 1024;
		sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
		SOCKADDR_IN sclient;
		int clen = sizeof(sclient);
		err = recvfrom(sockClientfd, (char*)&rx, length, 0, (struct sockaddr*)&sclient, &clen);
		if (err < 0)
			return err_net_rx_timeout;
	}
	return NetRxReturnHandle(&rx, &tx);

}

//鍦ㄥ簳閮ㄦ樉绀轰竴寮?28x80鐨勫浘鐗?
int kmNet_lcd_picture_bottom(unsigned char *buff_128_80)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	for (int y = 0; y < 20; y++)
	{
		tx.head.indexpts++;		    //鎸囦护缁熻鍊?
		tx.head.cmd = cmd_showpic;	//鎸囦护
		tx.head.rand = 80+y*4;
		memcpy(tx.u8buff.buff, &buff_128_80[y*1024], 1024);
		int length = sizeof(cmd_head_t) + 1024;
		sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
		SOCKADDR_IN sclient;
		int clen = sizeof(sclient);
		err = recvfrom(sockClientfd, (char*)&rx, length, 0, (struct sockaddr*)&sclient, &clen);
		if (err < 0)
			return err_net_rx_timeout;
	}
	return NetRxReturnHandle(&rx, &tx);
}

//鍦ㄥ簳閮ㄦ樉绀轰竴寮?28x160鐨勫浘鐗?
int kmNet_lcd_picture(unsigned char* buff_128_160)
{
	int err;
	if (sockClientfd <= 0)		return err_creat_socket;
	for (int y = 0; y < 40; y++)
	{
		tx.head.indexpts++;		    //鎸囦护缁熻鍊?
		tx.head.cmd = cmd_showpic;	//鎸囦护
		tx.head.rand = y * 4;
		memcpy(tx.u8buff.buff, &buff_128_160[y * 1024], 1024);
		int length = sizeof(cmd_head_t) + 1024;
		sendto(sockClientfd, (const char*)&tx, length, 0, (struct sockaddr*)&addrSrv, sizeof(addrSrv));
		SOCKADDR_IN sclient;
		int clen = sizeof(sclient);
		err = recvfrom(sockClientfd, (char*)&rx, length, 0, (struct sockaddr*)&sclient, &clen);
		if (err < 0)
			return err_net_rx_timeout;
	}
	return NetRxReturnHandle(&rx, &tx);
}