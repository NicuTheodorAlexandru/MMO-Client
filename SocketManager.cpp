#include "SocketManager.h"

SocketManager::SocketManager()
{
}

SocketManager::~SocketManager()
{
}

void SocketManager::Connect()
{
	sf::Socket::Status st;
	st = socket.Disconnected;
	while (st == socket.Disconnected)
	{
		st = socket.connect("127.0.0.1", 80);
		//get connection response
		sf::Packet packet;
		socket.receive(packet);
		sf::Uint8 connectionStatus;
		packet >> connectionStatus;
		if (connectionStatus != 1 || st == socket.Disconnected)
		{
			socket.disconnect();
			std::cout << "Couldn't connect to server!" << std::endl;
		}
		else
		{
			std::cout << "Connected to server" << std::endl;
		}
	}
}

void SocketManager::Disconnect()
{
	socket.disconnect();
}