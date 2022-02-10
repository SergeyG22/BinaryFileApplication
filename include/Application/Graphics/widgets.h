#pragma once
#include "../../tgui-src/include/TGUI/TGUI.hpp"
#include "../../tgui-src/include/TGUI/Widgets/FileDialog.hpp"

class Widgets {
	tgui::Theme m_theme{ "../themes/Black.txt" };
public:
	tgui::Label::Ptr topLabel;
	tgui::Label::Ptr bottomLabel;
	tgui::ChatBox::Ptr outputWindow;
	tgui::EditBox::Ptr topEditbox;
	tgui::EditBox::Ptr bottomEditbox;
	tgui::Button::Ptr searchButton;
	tgui::FileDialog::Ptr topFileDialog;
	tgui::FileDialog::Ptr bottomFileDialog;
	tgui::Button::Ptr topButtonFileDialog;
	tgui::Button::Ptr bottomButtonFileDialog;
	tgui::Button::Ptr buttonClearOutputWindow;
	tgui::FileDialog::Ptr openTopFileDialog();
	tgui::FileDialog::Ptr openBottomFileDialog();
	Widgets();
	~Widgets() = default;
};