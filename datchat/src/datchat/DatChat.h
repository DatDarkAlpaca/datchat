#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DatChat.h"

namespace dat
{
    class DatChat : public QMainWindow
    {
        Q_OBJECT

    public:
        DatChat(QWidget* parent = nullptr);
        ~DatChat();

    private:
        Ui::DatChatClass ui;
    };
}