#pragma once
#include <SFML/Network.hpp>
#include <iostream>

class SocketManager
{
public:
	SocketManager();
	~SocketManager();
	void Connect();
	void Disconnect();
	sf::TcpSocket socket;
};

