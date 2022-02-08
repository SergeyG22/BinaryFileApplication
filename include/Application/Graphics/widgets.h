#pragma once
#include "../../tgui-src/include/TGUI/TGUI.hpp"
#include "../../tgui-src/include/TGUI/Widgets/FileDialog.hpp"
#include <iostream>

struct Widgets {
	tgui::Label::Ptr label_1;
	tgui::Label::Ptr label_2;
	tgui::ListBox::Ptr list_box;
	tgui::EditBox::Ptr editbox_1;
	tgui::EditBox::Ptr editbox_2;
	tgui::Button::Ptr find_button;
	tgui::FileDialog::Ptr file_dialog_1;
	tgui::FileDialog::Ptr file_dialog_2;
	tgui::Button::Ptr button_file_dialog_1;
	tgui::Button::Ptr button_file_dialog_2;	
	tgui::FileDialog::Ptr openFileDialogA();
	tgui::FileDialog::Ptr openFileDialogB();
	Widgets();
};