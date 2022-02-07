#pragma once
#include <SFML/Graphics.hpp>
#include "../../tgui-src/include/TGUI/TGUI.hpp"
#include "../Graphics/widgets.h"

class Display {

public:
	virtual ~Display() = default;
	virtual void execution() = 0;
};