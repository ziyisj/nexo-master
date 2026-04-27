#include "CatBox.h"
#include <Utils/Utils.h>
#include <Utils/XorString.h>

CatNet CatBox::hCatNet;

bool CatBox::Init(char* IP, char* Port, char* UUID)
{
	CatNet::ErrorCode Err = hCatNet.init(IP, std::stoi(Port), UUID);
	if (Err != 0)
	{
		Utils::Log(2, XorStr("CatBox Init Error %d"), Err);
	}
    return Err == 0;
}

void CatBox::Close()
{
	return;
}


void CatBox::Move(int X, int Y)
{
	hCatNet.mouseMove(X, Y);
}

void CatBox::LeftDown()
{
	hCatNet.mouseButton(BTN_LEFT, 1);
}

void CatBox::LeftUp()
{
	hCatNet.mouseButton(BTN_LEFT, 0);
}

void CatBox::LeftClick()
{
	hCatNet.mouseButton(BTN_LEFT, 1);
	Sleep(10);
	hCatNet.mouseButton(BTN_LEFT, 0);
}