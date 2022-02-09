#include "../../include/Application/Graphics/window.h"

Window::Window(){    
	window.setFramerateLimit(60);
    graphical_ui.add(widgets.label_1);
    graphical_ui.add(widgets.label_2); 
    graphical_ui.add(widgets.editbox_1);
    graphical_ui.add(widgets.editbox_2);
    graphical_ui.add(widgets.button_file_dialog_1);
    graphical_ui.add(widgets.button_file_dialog_2);
    graphical_ui.add(widgets.list_box);
    graphical_ui.add(widgets.find_button);

    widgets.button_file_dialog_1->onPress([&] {
        graphical_ui.add(widgets.openFileDialogA());
        });

    widgets.button_file_dialog_2->onPress([&] {
        graphical_ui.add(widgets.openFileDialogB());
        });

    widgets.find_button->onPress([&] {
        backend_ptr->binaryFindOperation(widgets);
        });
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

void Window::setBackendPointer(std::unique_ptr<BackendOperations>ptr) {
    backend_ptr = std::move(ptr);
}

