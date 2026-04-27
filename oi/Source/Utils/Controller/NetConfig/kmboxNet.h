#pragma once
#include <winsock2.h>
#include <windows.h>
#include <stdio.h>
#include "math.h"

#pragma warning(disable : 4996)
//鍛戒护鐮?
#define 	cmd_connect			0xaf3c2828 //ok杩炴帴鐩掑瓙
#define     cmd_mouse_move		0xaede7345 //ok榧犳爣绉诲姩
#define		cmd_mouse_left		0x9823AE8D //ok榧犳爣宸﹂敭鎺у埗
#define		cmd_mouse_middle	0x97a3AE8D //ok榧犳爣涓敭鎺у埗
#define		cmd_mouse_right		0x238d8212 //ok榧犳爣鍙抽敭鎺у埗
#define		cmd_mouse_wheel		0xffeead38 //ok榧犳爣婊氳疆鎺у埗
#define     cmd_mouse_automove	0xaede7346 //ok榧犳爣鑷姩妯℃嫙浜哄伐绉诲姩鎺у埗
#define     cmd_keyboard_all    0x123c2c2f //ok閿洏鎵€鏈夊弬鏁版帶鍒?
#define		cmd_reboot			0xaa8855aa //ok鐩掑瓙閲嶅惎
#define     cmd_bazerMove       0xa238455a //ok榧犳爣璐濆灏旂Щ鍔?
#define     cmd_monitor         0x27388020 //ok鐩戞帶鐩掑瓙涓婄殑鐗╃悊閿紶鏁版嵁
#define     cmd_debug           0x27382021 //ok寮€鍚皟璇曚俊鎭?
#define     cmd_mask_mouse      0x23234343 //ok 灞忚斀鐗╃悊閿紶
#define     cmd_unmask_all      0x23344343 //ok 瑙ｉ櫎灞忚斀鐗╃悊閿紶
#define     cmd_setconfig       0x1d3d3323 //ok 璁剧疆IP閰嶇疆淇℃伅
#define     cmd_showpic         0x12334883 //鏄剧ず鍥剧墖

extern SOCKET sockClientfd; //socket閫氫俊鍙ユ焺
typedef struct
{	
	unsigned int  mac;			//鐩掑瓙鐨刴ac鍦板潃锛堝繀椤伙級
	unsigned int  rand;			//闅忔満鍊?
	unsigned int  indexpts;		//鏃堕棿鎴?
	unsigned int  cmd;			//鎸囦护鐮?
}cmd_head_t;

typedef struct
{
	unsigned char buff[1024];	//
}cmd_data_t;
typedef struct
{
	unsigned short buff[512];	//
}cmd_u16_t;

//榧犳爣鏁版嵁缁撴瀯浣?
typedef struct
{	int button;
	int x;
	int y;
	int wheel;
	int point[10];//鐢ㄤ簬璐濆灏旀洸绾挎帶鍒?棰勭暀5闃跺)
}soft_mouse_t;

//閿洏鏁版嵁缁撴瀯浣?
typedef struct
{
	char ctrl;		
	char resvel;
	char button[10];
}soft_keyboard_t;

//鑱斿悎浣?
typedef struct
{
	cmd_head_t head;
	union {
		cmd_data_t      u8buff;		  //buff
		cmd_u16_t       u16buff;	  //U16
		soft_mouse_t    cmd_mouse;    //榧犳爣鍙戦€佹寚浠?
		soft_keyboard_t cmd_keyboard; //閿洏鍙戦€佹寚浠?
	};
}client_tx;

enum
{	err_creat_socket=-9000,	//鍒涘缓socket澶辫触
	err_net_version,		//socket鐗堟湰閿欒
	err_net_tx		,		//socket鍙戦€侀敊璇?
	err_net_rx_timeout,		//socket鎺ユ敹瓒呮椂
	err_net_cmd,			//鍛戒护閿欒
	err_net_pts,			//鏃堕棿鎴抽敊璇?
	success=0,				//姝ｅ父鎵ц
	usb_dev_tx_timeout,		//USB devic鍙戦€佸け璐?
};



/*
杩炴帴kmboxNet鐩掑瓙杈撳叆鍙傛暟鍒嗗埆鏄洅瀛?
ip  锛氱洅瀛愮殑IP鍦板潃 锛堟樉绀哄睆涓婁細鏈夋樉绀猴級
port: 閫氫俊绔彛鍙?  锛堟樉绀哄睆涓婁細鏈夋樉绀猴級
mac : 鐩掑瓙鐨刴ac鍦板潃锛堟樉绀哄睆骞曚笂鏈夋樉绀猴級
杩斿洖鍊硷細杩炴帴鎴愬姛杩斿洖0 锛屽叾浠栧€煎弬瑙侀敊璇唬鐮?
*/
int kmNet_init(char* ip, char* port, char* mac);//ok
int kmNet_mouse_move(short x, short y);			//ok
int kmNet_mouse_left(int isdown);				//ok
int kmNet_mouse_right(int isdown);				//ok
int kmNet_mouse_middle(int isdown);				//ok
int kmNet_mouse_wheel(int wheel);				//ok
int kmNet_mouse_all(int button, int x, int y, int wheel);//ok
int kmNet_mouse_move_auto(int x, int y,int time_ms);	//ok
int kmNet_mouse_move_beizer(int x, int y, int ms, int x1, int y1, int x2, int y2);//浜岄樁鏇茬嚎

//閿洏鍑芥暟
int kmNet_keydown(int vkey);// ok
int kmNet_keyup(int vkey);  // ok

//鍏朵粬鍑芥暟
int kmNet_reboot(void);
int kmNet_debug(short port, char enable);

//鐩戞帶绯诲垪
int kmNet_monitor(char enable);			//寮€鍚叧闂墿鐞嗛敭榧犵洃鎺?
int kmNet_monitor_mouse_left();			//鏌ヨ鐗╃悊榧犳爣宸﹂敭鐘舵€?
int kmNet_monitor_mouse_middle();		//鏌ヨ榧犳爣涓敭鐘舵€?
int kmNet_monitor_mouse_right();		//鏌ヨ榧犳爣鍙抽敭鐘舵€?
int kmNet_monitor_mouse_side1();		//鏌ヨ榧犳爣渚ч敭1鐘舵€?
int kmNet_monitor_mouse_side2();		//鏌ヨ榧犳爣渚ч敭2鐘舵€?
int kmNet_monitor_keyboard(unsigned char  vk_key);//鏌ヨ閿洏鎸囧畾鎸夐敭鐘舵€?
//鐗╃悊閿紶灞忚斀绯诲垪
int kmNet_mask_mouse_left(int enable);	//灞忚斀榧犳爣宸﹂敭 
int kmNet_mask_mouse_right(int enable);	//灞忚斀榧犳爣鍙抽敭 
int kmNet_mask_mouse_middle(int enable);//灞忚斀榧犳爣涓敭 
int kmNet_mask_mouse_side1(int enable);	//灞忚斀榧犳爣渚ч敭閿? 
int kmNet_mask_mouse_side2(int enable);	//灞忚斀榧犳爣渚ч敭閿?
int kmNet_mask_mouse_x(int enable);		//灞忚斀榧犳爣X杞村潗鏍?
int kmNet_mask_mouse_y(int enable);		//灞忚斀榧犳爣y杞村潗鏍?
int kmNet_mask_mouse_wheel(int enable);	//灞忚斀榧犳爣婊氳疆
int kmNet_mask_keyboard(short vkey);	//灞忚斀閿洏鎸囧畾鎸夐敭
int kmNet_unmask_all();					//瑙ｉ櫎灞忚斀鎵€鏈夊凡缁忚缃殑鐗╃悊灞忚斀


//閰嶇疆绫诲嚱鏁?
int kmNet_reboot(void);
int kmNet_setconfig(char* ip, unsigned short port);		  //閰嶇疆鐩掑瓙IP鍦板潃
int kmNet_lcd_color(unsigned short rgb565);				  //灏嗘暣涓狶CD灞忓箷鐢ㄦ寚瀹氶鑹插～鍏呫€?娓呭睆鍙互鐢ㄩ粦鑹?
int kmNet_lcd_picture_bottom(unsigned char* buff_128_80); //涓嬪崐閮ㄥ垎鏄剧ず128x80鍥剧墖
int kmNet_lcd_picture(unsigned char* buff_128_160);		  //鏁村睆鏄剧ず128x160鍥剧墖


