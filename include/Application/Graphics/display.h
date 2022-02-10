#pragma once
#include <SFML/Graphics.hpp>
#include "../../tgui-src/include/TGUI/TGUI.hpp"
#include "../Graphics/widgets.h"
#include "../Backend/backend_operations.h"

class Display {

public:
	virtual ~Display() = default;
	virtual void execution() = 0;
	virtual void setBackendPointer(std::unique_ptr<BackendOperations>);
};