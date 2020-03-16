#include "GuiLogin.h"

GuiLogin::GuiLogin()
{
	gui = new tgui::Gui();
	//labels
		//logo
	label_logo = tgui::Label::create();
	label_logo->setPosition({ "20%", "10%" });
	label_logo->setSize({ "60%", "20%" });
	label_logo->setText("MMO-Client");
	//edit boxes
		//username
	editBox_username = tgui::EditBox::create();
	editBox_username->setPosition({ "30%", "40%" });
	editBox_username->setSize({ "40%", "10%" });
	editBox_username->setDefaultText("Username...");
		//password
	editBox_password = tgui::EditBox::create();
	editBox_password->setPosition({ "30%", "55%" });
	editBox_password->setSize({ "40%", "10%" });
	editBox_password->setDefaultText("Password...");
	//bubttons
		//login
	button_login = tgui::Button::create();
	button_login->setPosition({ "30%", "70%" });
	button_login->setSize({ "40%", "10%" });
	button_login->setText("Login");
		//register
	button_register = tgui::Button::create();
	button_register->setPosition({ "30%", "85%" });
	button_register->setSize({ "40%", "10%" });
	button_register->setText("Register");
}

void GuiLogin::Login()
{
	std::string username = editBox_username->textEntered;
	std::string password = editBox_password->textEntered;

	Login::AccountLogin()
}

GuiLogin::~GuiLogin()
{
	delete gui;
}

void GuiLogin::Deactivate(tgui::Gui* gui)
{
	gui->remove(label_logo);
	gui->remove(button_login);
	gui->remove(button_register);
	gui->remove(editBox_password);
	gui->remove(editBox_username);
}

void GuiLogin::Activate(tgui::Gui* gui)
{
	gui->add(label_logo);
	gui->add(button_login);
	gui->add(button_register);
	gui->add(editBox_password);
	gui->add(editBox_username);
}
