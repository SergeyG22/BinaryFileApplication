#include "../../include/Application/Facades/user_interface.h"

UserInterface::UserInterface() {
	display = std::make_unique<Window>();
	backend = std::make_unique<BackendOperations>();
	display->setBackendPointer(std::move(backend));
}

void UserInterface::execution() {
	display->execution();
}
