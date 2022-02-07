#include "../../include/Application/Graphics/widgets.h"
#include "../../include/Application/Graphics/widgets.h"

Widgets::Widgets() {
    top_label = tgui::Label::create();
	top_label->setText("Working directory:");
	top_label->setPosition(0,25);
	bottom_label = tgui::Label::create();
	bottom_label->setText("Working directory:");
	bottom_label->setPosition(0,75);
	top_editbox = tgui::EditBox::create();
	top_editbox->setPosition(125,25);
	bottom_editbox = tgui::EditBox::create();
	bottom_editbox->setPosition(125,75);
	top_button = tgui::Button::create();
	top_button->setText("Browse ...");
	top_button->setPosition(300,25);
	bottom_button = tgui::Button::create();
	bottom_button->setText("Browse ... ");
	bottom_button->setPosition(300,75);
	list_box = tgui::ListBox::create();
	list_box->setSize(250,120);
	list_box->setItemHeight(24);
	list_box->setPosition(10, 140);
	list_box->addItem("Item 1");
	list_box->addItem("Item 2");
}
