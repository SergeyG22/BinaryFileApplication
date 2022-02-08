#pragma once
#include "display.h"
#include "widgets.h"
#include <iostream>

class Window: public Display {
	sf::RenderWindow window{ sf::VideoMode(600, 420), "Application" };
	tgui::Gui graphical_ui{ window };
	Widgets widgets;
public:
	Window();
	void execution() override;
};