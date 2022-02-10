#include "../../include/Application/Graphics/widgets.h"


Widgets::Widgets() {
    topLabel = tgui::Label::create();
	topLabel->setText("Working directory:");
	topLabel->setPosition(400,25);
	bottomLabel = tgui::Label::create();
	bottomLabel->setText("Working directory:");
	bottomLabel->setPosition(400,60);
	topEditbox = tgui::EditBox::create();
	topEditbox->setSize(350,20);
	topEditbox->setPosition(25,25);
	bottomEditbox = tgui::EditBox::create();
	bottomEditbox->setSize(350,20);
	bottomEditbox->setPosition(25,60);
	topButtonFileDialog = tgui::Button::create();
	topButtonFileDialog->setText("Browse");
	topButtonFileDialog->setPosition(415,135);
	topButtonFileDialog->setSize(85,25);
	bottomButtonFileDialog = tgui::Button::create();
	bottomButtonFileDialog->setText("Browse");
	bottomButtonFileDialog->setPosition(415,170);
	bottomButtonFileDialog->setSize(85,25);
	buttonClearOutputWindow = tgui::Button::create();
	buttonClearOutputWindow->setText("Clear");
	buttonClearOutputWindow->setPosition(415, 240);
	buttonClearOutputWindow->setSize(85,25);
	searchButton = tgui::Button::create();
	searchButton->setSize(85,25);
	searchButton->setText("Search");
	searchButton->setPosition(415,205);	
	outputWindow = tgui::ChatBox::create();
	outputWindow->setSize(350, 240);
	outputWindow->setTextSize(18);
	outputWindow->setPosition(25, 110);
	outputWindow->setLinesStartFromTop();

}


tgui::FileDialog::Ptr Widgets::openTopFileDialog() {
	topFileDialog = tgui::FileDialog::create("Open file", "Open");
	topFileDialog->setSelectingDirectory(true);
	
	topFileDialog->onClose([&] {
		tgui::String path = topFileDialog->getPath().asString();
		if (!topFileDialog->getSelectedPaths().empty()) {
			topEditbox->setText(path);
		}
		});

	return topFileDialog;
}


tgui::FileDialog::Ptr Widgets::openBottomFileDialog() {
	bottomFileDialog = tgui::FileDialog::create("Open file", "Open");
	bottomFileDialog->setSelectingDirectory(true);

	bottomFileDialog->onClose([&] {
		tgui::String path = bottomFileDialog->getPath().asString();
		if (!bottomFileDialog->getSelectedPaths().empty()) {
			bottomEditbox->setText(path);
		}
		});

	return bottomFileDialog;
}



