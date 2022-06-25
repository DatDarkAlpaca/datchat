#include "pch.h"
#include "DatChat.h"
#include "message_display/MessageDisplay.h"

dat::DatChat::DatChat(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.sendButton, &QPushButton::pressed, this, [&]() {
        auto display = (MessageDisplay*)(ui.messageDisplay);
        display->AddUserMessage(m_User, ui.messageEdit->document()->toPlainText());
        ui.messageEdit->clear();
    });
}