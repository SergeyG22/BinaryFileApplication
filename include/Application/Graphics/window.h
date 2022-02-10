#pragma once
#include "display.h"
#include "widgets.h"

class Window: public Display {
	std::unique_ptr<BackendOperations>m_backendPtr;
	sf::RenderWindow m_window{ sf::VideoMode(600, 420), "BinaryFileApplication", sf::Style::Close | sf::Style::Titlebar };
	tgui::Gui m_graphicalUI{ m_window };
	Widgets m_widgets;
public:
	Window();
	~Window() = default;
	void execution() override;
	void setBackendPointer(std::unique_ptr<BackendOperations>);
};