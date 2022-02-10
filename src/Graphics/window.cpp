#include "../../include/Application/Graphics/window.h"

Window::Window(){    
	m_window.setFramerateLimit(60);
    m_graphicalUI.add(m_widgets.topLabel);
    m_graphicalUI.add(m_widgets.bottomLabel); 
    m_graphicalUI.add(m_widgets.topEditbox);
    m_graphicalUI.add(m_widgets.bottomEditbox);
    m_graphicalUI.add(m_widgets.topButtonFileDialog);
    m_graphicalUI.add(m_widgets.bottomButtonFileDialog);
    m_graphicalUI.add(m_widgets.outputWindow);
    m_graphicalUI.add(m_widgets.searchButton);
    m_graphicalUI.add(m_widgets.buttonClearOutputWindow);



    m_widgets.topButtonFileDialog->onPress([&] {
        m_graphicalUI.add(m_widgets.openTopFileDialog());
        });

    m_widgets.bottomButtonFileDialog->onPress([&] {
        m_graphicalUI.add(m_widgets.openBottomFileDialog());
        });

    m_widgets.searchButton->onPress([&] {
        m_backendPtr->binaryFindOperation(m_widgets);
        });

    m_widgets.buttonClearOutputWindow->onPress([&] {
        m_widgets.outputWindow->removeAllLines();
        });
}

void Window::execution() {     
    while (m_window.isOpen()) {
        sf::Event event;
        while (m_window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                m_window.close();

            m_graphicalUI.handleEvent(event);
        }

        m_window.clear(sf::Color{ 120,231,12,150 });
        m_graphicalUI.draw();
        m_window.display();
    }
}

void Window::setBackendPointer(std::unique_ptr<BackendOperations>ptr) {
    m_backendPtr = std::move(ptr);
}

