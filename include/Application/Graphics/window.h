#pragma once
#include "display.h"
#include "widgets.h"

class Window: public Display {
	sf::RenderWindow window{ sf::VideoMode(800, 600), "Application" };
	tgui::Gui graphical_ui{ window };
	Widgets widgets;
public:
	Window();
	void execution() override;
};