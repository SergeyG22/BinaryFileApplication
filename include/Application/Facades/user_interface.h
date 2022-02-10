#pragma once
#include "../Graphics/display.h"
#include "../Graphics/window.h"

class UserInterface {
	std::unique_ptr<Display>display;
	std::unique_ptr<BackendOperations>backend;
public:
	UserInterface();
	~UserInterface() = default;
	void execution();
};