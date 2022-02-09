#pragma once
#include "display.h"
#include "widgets.h"
#include <iostream>

class Window: public Display {
	sf::RenderWindow window{ sf::VideoMode(600, 420), "BinaryFileApplication" };
	tgui::Gui graphical_ui{ window };
	Widgets widgets;
	std::unique_ptr<BackendOperations>backend_ptr;
public:
	Window();
	void execution() override;
	void setBackendPointer(std::unique_ptr<BackendOperations>);
};