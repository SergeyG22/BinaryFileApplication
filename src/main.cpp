#include "../build/_deps/tgui-src/include/TGUI/Backends/SFML.hpp"
#include "../build/_deps/tgui-src/include/TGUI/Core.hpp"
#include "../build/_deps/tgui-src/include/TGUI/TGUI.hpp"
#include <boost/iostreams/device/mapped_file.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

  namespace io = boost::iostreams;

bool runExample(tgui::GuiBase& gui)
{
    return true;
}
//

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    tgui::Gui gui(window);
    io::mapped_file_source f1("C:/Users/Dolba/Desktop/task/test1.txt");
    io::mapped_file_source f2("C:/Users/Dolba/Desktop/task/test2.txt");

    if (f1.size() == f2.size() && std::equal(f1.data(), f1.data() + f1.size(), f2.data())) {
        std::cout << "The files are equal\n";
    }
    else {
        std::cout << "The files are not equal\n";
    }
    
    if (!runExample(gui))
        return EXIT_FAILURE;

    gui.mainLoop();
    return EXIT_SUCCESS;  
}