#pragma once
#include "../../tgui-src/include/TGUI/TGUI.hpp"

struct Widgets {
	tgui::Label::Ptr top_label;
	tgui::Label::Ptr bottom_label;
	tgui::EditBox::Ptr top_editbox;
	tgui::EditBox::Ptr bottom_editbox;
	tgui::Button::Ptr top_button;
	tgui::Button::Ptr bottom_button;
	tgui::ListBox::Ptr list_box;
	Widgets();
};