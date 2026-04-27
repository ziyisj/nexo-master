#include <winsock2.h>
#include <windows.h>

#include "DHZBox.h"
#include "common/Data.h"

#include "UDPSender.h"

std::string DHZBox::EncryptString(const std::string& InputString) {
    std::string encrypted_string;
    for (char ch : InputString) {
        if (isalpha(ch)) {
            if (islower(ch)) {
                encrypted_string += char((ch - 'a' + std::stoi(GameData.Config.AimBot.DHZRANDOM)) % 26 + 'a');
            }
            else if (isupper(ch)) {
                encrypted_string += char((ch - 'A' + std::stoi(GameData.Config.AimBot.DHZRANDOM)) % 26 + 'A');
            }
        }
        else {
            encrypted_string += ch;
        }
    }
    return encrypted_string;
}

bool DHZBox::Init(const std::string& Ip, int Port)
{
    UDPSender* Sender = UDPSender::GetInstance();

    return Sender->Init(Ip, Port);
};

void DHZBox::Move(int x, int y) 
{
    auto sender2 = UDPSender::GetInstance();
    sender2->Send(EncryptString(std::format("move({},{})", x, y)));
};

void DHZBox::LeftClick() 
{
    auto sender2 = UDPSender::GetInstance();
    sender2->Send(EncryptString("left(1)"));
    Sleep(10);
    sender2->Send(EncryptString("left(0)"));
};


void DHZBox::LeftDown()
{
    auto sender2 = UDPSender::GetInstance();
    sender2->Send(EncryptString("left(1)"));
};

void DHZBox::LeftUp()
{
    auto sender2 = UDPSender::GetInstance();
    sender2->Send(EncryptString("left(0)"));
};

void DHZBox::Close() 
{

};