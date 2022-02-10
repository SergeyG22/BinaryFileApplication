#include "../../include/Application/Backend/backend_operations.h"


void BackendOperations::binaryFindOperation(Widgets& widgets) {

	std::string folderA = widgets.topEditbox->getText().toStdString();
	std::string folderB = widgets.bottomEditbox->getText().toStdString();

	boost::iostreams::mapped_file_source fileA;
	boost::iostreams::mapped_file_source fileB;

	std::vector<tgui::String>lines;

	if (boost::filesystem::exists(boost::filesystem::path(folderA)) &&
		boost::filesystem::exists(boost::filesystem::path(folderB))) {

		for (auto& firstIt : boost::filesystem::directory_iterator(folderA)) {
			if (!boost::filesystem::is_directory(firstIt.path())) {
				if (boost::filesystem::file_size(firstIt.path())) {
					fileA.close();
					fileA.open(firstIt.path());
				}
				else {
					fileA.close();
				}

			}
			else {
				fileA.close();
			}


			for (auto& secondIt : boost::filesystem::directory_iterator(folderB)) {
				if (!boost::filesystem::is_directory(secondIt.path())) {
					if (boost::filesystem::file_size(secondIt.path())) {
						fileB.close();
						fileB.open(secondIt.path());
					}
					else {
						fileB.close();
					}

				}
				else {
					fileB.close();
				}

				if (fileA.size() && fileB.size()) {
					if ((fileA.data() != nullptr) || (fileB.data() != nullptr)) {

						if (fileA.size() == fileB.size() && boost::algorithm::equal(fileA.data(), fileA.data() + fileA.size(), fileB.data(),
							fileB.data() + fileB.size())) {

							tgui::String item = firstIt.path().filename().string() + " [EQUIALENT] " + secondIt.path().filename().string();
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
