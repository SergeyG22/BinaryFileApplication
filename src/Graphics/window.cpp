#include "../../include/Application/Graphics/window.h"

Window::Window(){    
	window.setFramerateLimit(60);
    graphical_ui.add(widgets.top_label);
    graphical_ui.add(widgets.bottom_label); 
    graphical_ui.add(widgets.top_editbox);
    graphical_ui.add(widgets.bottom_editbox);
    graphical_ui.add(widgets.top_button);
    graphical_ui.add(widgets.bottom_button);
    graphical_ui.add(widgets.list_box);
}

void Window::execution() {

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            graphical_ui.handleEvent(event);
        }

        window.clear();
        graphical_ui.draw();
        window.display();
    }
}

