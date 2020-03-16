#include <SFML/Window.hpp>
#include <TGUI/TGUI.hpp>
#include <iostream>
#include "Login.h"
#include "SocketManager.h"
#include "GuiLogin.h"

Login login;
void Run(), Update(sf::RenderWindow& window, tgui::Gui& gui), Render();
bool running;

SocketManager socketManager;
GuiLogin guiLogin;

int main()
{
	socketManager.Connect();
	Run();
	socketManager.Disconnect();
	return 0;
}

void Run()
{
	running = true;
	sf::RenderWindow window(sf::VideoMode(640, 640), "MMO Client");
	//gui start
	tgui::Gui gui(window);
	guiLogin.Activate(&gui);
	while (running)
	{
		Update(window, gui);
		Render();
	}
	guiLogin.Deactivate(&gui);
}

void Update(sf::RenderWindow& window, tgui::Gui& gui)
{
	
	//window update
	if (window.isOpen())
	{
		if (!running)
		{
			window.close();
		}
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
				running = false;
			}
			else if (event.type == sf::Event::Resized)
			{
				window.setView(sf::View(sf::FloatRect(0.f, 0.f, static_cast<float>(event.size.width), static_cast<float>(event.size.height))));
				gui.setView(window.getView());
			}
			gui.handleEvent(event);
		}
		window.clear();
		gui.draw();
		window.display();
	}
}

void Render()
{

}