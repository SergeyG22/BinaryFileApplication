#pragma once
#include "../Graphics/display.h"
#include "../Graphics/window.h"

class UserInterface {
	std::unique_ptr<Display>m_display;
	std::unique_ptr<BackendOperations>m_backend;
public:
	UserInterface();
	~UserInterface() = default;
	void execution();
};