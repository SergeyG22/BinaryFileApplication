#pragma once
#include <boost/iostreams/device/mapped_file.hpp>
#include <boost/algorithm/cxx14/equal.hpp>
#include <boost/filesystem.hpp>
#include "../Graphics/widgets.h"
#include <iostream>

class BackendOperations {

public:						 
	void binaryFindOperation(Widgets&);
};