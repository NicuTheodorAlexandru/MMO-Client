#pragma once
#include <TGUI/TGUI.hpp>
#include "Login.h"

class GuiLogin
{
public:
	GuiLogin();
	~GuiLogin();
	void Activate(tgui::Gui* gui), Deactivate(tgui::Gui* gui);
private:
	tgui::Gui* gui;
	tgui::Label::Ptr label_logo;
	tgui::EditBox::Ptr editBox_username;
	tgui::EditBox::Ptr editBox_password;
	tgui::Button::Ptr button_login;
	tgui::Button::Ptr button_register;
	void Login();
};

