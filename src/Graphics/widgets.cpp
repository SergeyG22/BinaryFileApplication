#include "../../include/Application/Graphics/widgets.h"


Widgets::Widgets() {
	topLabel = tgui::Label::create();
	topLabel->setText("Directory A");
	topLabel->setPosition(425, 30);
	topLabel->setTextSize(18);
	bottomLabel = tgui::Label::create();
	bottomLabel->setText("Directory B");
	bottomLabel->setPosition(425, 65);
	bottomLabel->setTextSize(18);
	topEditbox = tgui::EditBox::create();
	topEditbox->setSize(350, 30);
	topEditbox->setPosition(25, 25);
	bottomEditbox = tgui::EditBox::create();
	bottomEditbox->setSize(350, 30);
	bottomEditbox->setPosition(25, 65);
	topButtonFileDialog = tgui::Button::create();
	topButtonFileDialog->setText("Browse");
	topButtonFileDialog->setPosition(420, 135);
	topButtonFileDialog->setSize(135, 35);
	topButtonFileDialog->setTextSize(20);
	bottomButtonFileDialog = tgui::Button::create();
	bottomButtonFileDialog->setText("Browse");
	bottomButtonFileDialog->setPosition(420, 185);
	bottomButtonFileDialog->setSize(135, 35);
	bottomButtonFileDialog->setTextSize(20);
	buttonClearOutputWindow = tgui::Button::create();
	buttonClearOutputWindow->setText("Clear");
	buttonClearOutputWindow->setPosition(420, 285);
	buttonClearOutputWindow->setSize(135, 35);
	buttonClearOutputWindow->setTextSize(20);
	searchButton = tgui::Button::create();
	searchButton->setSize(135, 35);
	searchButton->setText("Search");
	searchButton->setPosition(420, 235);
	searchButton->setTextSize(20);
	outputWindow = tgui::ChatBox::create();
	outputWindow->setSize(350, 240);
	outputWindow->setTextSize(18);
	outputWindow->setPosition(25, 110);
	outputWindow->setLinesStartFromTop();
	topEditbox->setRenderer(m_theme.getRenderer("EditBox"));
	bottomEditbox->setRenderer(m_theme.getRenderer("EditBox"));
	topButtonFileDialog->setRenderer(m_theme.getRenderer("Button"));
	bottomButtonFileDialog->setRenderer(m_theme.getRenderer("Button"));
	buttonClearOutputWindow->setRenderer(m_theme.getRenderer("Button"));
	searchButton->setRenderer(m_theme.getRenderer("Button"));
	outputWindow->setRenderer(m_theme.getRenderer("ChatBox"));
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



