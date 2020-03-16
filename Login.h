#pragma once
#include "SocketManager.h"
#include <SFML/Network.hpp>
#include <iostream>
#include <TGUI/TGUI.hpp>

class Login
{
public:
	Login();
	~Login();
	void AccountLogin(sf::TcpSocket socket, std::string username, std::string password);
};

