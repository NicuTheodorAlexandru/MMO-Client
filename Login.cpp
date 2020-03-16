#include "Login.h"

Login::Login()
{
	
}

Login::~Login()
{
}

void Login::AccountLogin(sf::TcpSocket socket, std::string username, std::string password)
{
	std::string cmd = "login";
	sf::Packet packet;
	packet << cmd << username << password;
	socket.send(packet);
	socket.receive(packet);
}