#include "../../include/Application/Backend/backend_operations.h"

								
void BackendOperations::binaryFindOperation(Widgets& widgets) {

    std::string folder_a = widgets.topEditbox->getText().toStdString();
    std::string folder_b = widgets.bottomEditbox->getText().toStdString();

    boost::iostreams::mapped_file_source file_a;
    boost::iostreams::mapped_file_source file_b;

    std::vector<tgui::String>lines;

    if (boost::filesystem::exists(boost::filesystem::path(folder_a)) &&
        boost::filesystem::exists(boost::filesystem::path(folder_b))) {

       for (auto& first_it : boost::filesystem::directory_iterator(folder_a)) {  
            if (!boost::filesystem::is_directory(first_it.path())) {
                          if (boost::filesystem::file_size(first_it.path())) { 
               file_a.close();
               file_a.open(first_it.path());
               }
                else {
                      file_a.close();
                    }

            }
            else {
                file_a.close();
            }
            
           
           for (auto& second_it : boost::filesystem::directory_iterator(folder_b)) {
               if (!boost::filesystem::is_directory(second_it.path())) {
                             if (boost::filesystem::file_size(second_it.path())) {
                 file_b.close();
                 file_b.open(second_it.path());
                 }
                  else {
                        file_b.close();
                      }

               }
               else {
                   file_b.close();
               }
               
               if (file_a.size() && file_b.size()) {
                   if ((file_a.data() != nullptr) || (file_b.data() != nullptr)) {

                          if (file_a.size() == file_b.size() && boost::algorithm::equal(file_a.data(), file_a.data() + file_a.size(), file_b.data(),
                              file_b.data() + file_b.size())) {
                              
                              tgui::String item = first_it.path().filename().string() + " [EQUIALENT] " + second_it.path().filename().string();                            
                              lines.emplace_back(item);
                          }
                   }
                 }                                   
           }

        }

    }


    if (!lines.empty()) {
        widgets.outputWindow->removeAllLines();
        for (const auto it : lines) {
            widgets.outputWindow->addLine(it, tgui::Color::White);
        }
    }


}
