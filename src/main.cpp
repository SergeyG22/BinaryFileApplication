#include <boost/iostreams/device/mapped_file.hpp>
#include <boost/algorithm/cxx14/equal.hpp>
#include "../include/Application/Graphics/window.h"
#include "../include/Application/Graphics/widgets.h"
#include "../include/Application/Graphics/display.h"

 




int main() {
      Display* display = new Window();
      auto backend = std::unique_ptr<BackendOperations>(new BackendOperations());
      display->setBackendPointer(std::move(backend));
      display->execution(); 
};