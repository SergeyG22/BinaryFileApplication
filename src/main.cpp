//#include "../build/_deps/tgui-src/include/TGUI/Backends/SFML.hpp"
//#include "../build/_deps/tgui-src/include/TGUI/Core.hpp"
//#include "../build/_deps/tgui-src/include/TGUI/TGUI.hpp"
#include <boost/iostreams/device/mapped_file.hpp>
//#include <SFML/Graphics.hpp>
//#include <iostream>

#include "../include/Application/Graphics/window.h"
#include "../include/Application/Graphics/widgets.h"
#include "../include/Application/Graphics/display.h"

  namespace io = boost::iostreams;


//ÑÄÅËÀÒÜ ÔÀÑÀÄ ÌÅÆÄÓ MAIN È äðóãèìè êîìïîíåíòàìè


int main() {

      Display* display = new Window();
      display->execution();

};