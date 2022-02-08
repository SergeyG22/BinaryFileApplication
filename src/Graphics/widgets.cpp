#include "../../include/Application/Graphics/widgets.h"


Widgets::Widgets() {
    label_1 = tgui::Label::create();
	label_1->setText("Working directory:");
	label_1->setPosition(0,25);
	label_2 = tgui::Label::create();
	label_2->setText("Working directory:");
	label_2->setPosition(0,60);
	editbox_1 = tgui::EditBox::create();
	editbox_1->setSize(450,20);
	editbox_1->setPosition(125,25);
	editbox_2 = tgui::EditBox::create();
	editbox_2->setSize(450,20);
	editbox_2->setPosition(125,60);
	button_file_dialog_1 = tgui::Button::create();
	button_file_dialog_1->setText("Browse");
	button_file_dialog_1->setPosition(415,115);
	button_file_dialog_1->setSize(85,25);
	button_file_dialog_2 = tgui::Button::create();
	button_file_dialog_2->setText("Browse");
	button_file_dialog_2->setPosition(415,150);
	button_file_dialog_2->setSize(85,25);
	find_button = tgui::Button::create();
	find_button->setSize(85,25);
	find_button->setText("Search");
	find_button->setPosition(415,185);
	list_box = tgui::ListBox::create();
	list_box->setSize(250,240);
	list_box->setItemHeight(24);
	list_box->setPosition(125,110);	
}

tgui::FileDialog::Ptr Widgets::openFileDialogA() {
	file_dialog_1 = tgui::FileDialog::create("Open file", "Open");
	file_dialog_1->setSelectingDirectory(true);
	
	file_dialog_1->onFileSelect([&] {
		std::cout << file_dialog_1->getPath().asString() << '\n';
		tgui::String path = file_dialog_1->getPath().asString();
		editbox_1->setText(path);
		});

	return file_dialog_1;
}


tgui::FileDialog::Ptr Widgets::openFileDialogB() {
	file_dialog_2 = tgui::FileDialog::create("Open file", "Open");
	file_dialog_2->setSelectingDirectory(true);

	file_dialog_2->onFileSelect([&] {
		std::cout << file_dialog_2->getPath().asString() << '\n';
		tgui::String path = file_dialog_2->getPath().asString();
		editbox_2->setText(path);
		});

	return file_dialog_2;
}




//	auto signal = dialog_a->getSignal("onClose");

//	dialog_a->onClosing([&] {
//		std::cout << dialog_a->getPath().asString() << '\n';
//		tgui::String path = dialog_a->getPath().asString();
//		top_editbox->setText(path);
//		});