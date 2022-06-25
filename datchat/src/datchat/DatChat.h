#pragma once

#include <QtWidgets/QMainWindow>

#include "ui_DatChat.h"
#include "User.h"

namespace dat
{
    class DatChat : public QMainWindow
    {
        Q_OBJECT

    public:
        DatChat(QWidget* parent = nullptr);

    private:
        User m_User = User({ "Default User", QColor(0, 0, 0) });

    private:
        ::Ui::DatChatClass ui;
    };
}