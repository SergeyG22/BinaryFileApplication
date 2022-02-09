#include "../../include/Application/Backend/backend_operations.h"

								
void BackendOperations::binaryFindOperation(Widgets& widgets) {

    std::string folder_a = widgets.editbox_1->getText().toStdString();
    std::string folder_b = widgets.editbox_2->getText().toStdString();

      boost::iostreams::mapped_file_source file_a;
      boost::iostreams::mapped_file_source file_b;

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
                              
                              std::cout << first_it.path().filename() << " === " << second_it.path().filename() <<'\n';
                              tgui::String item = first_it.path().filename().string() + " === " + second_it.path().filename().string();
                              widgets.list_box->addItem(item);
                          }
                           else {
                              std::cout << "no equialent!\n";
                              
                         }


                   }
                 }


                                    
           }

        }

    }



}
