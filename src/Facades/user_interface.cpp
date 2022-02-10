#include "../../include/Application/Facades/user_interface.h"

UserInterface::UserInterface() {
	m_display = std::make_unique<Window>();
	m_backend = std::make_unique<BackendOperations>();
	m_display->setBackendPointer(std::move(m_backend));
}

void UserInterface::execution() {
	m_display->execution();
}
