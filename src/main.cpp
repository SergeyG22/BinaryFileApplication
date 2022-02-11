#include "../include/Application/Facades/user_interface.h"


int main() {
	auto userControl = std::make_unique<UserInterface>();
	userControl->execution();
};