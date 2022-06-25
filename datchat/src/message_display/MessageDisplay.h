#pragma once
#include <QtWidgets/QTextEdit.h>
#include <QtCore/QTime>

#include "User.h"

namespace dat
{
	class MessageDisplay : public QTextEdit
	{
		Q_OBJECT

	public:
		MessageDisplay(QWidget* parent = nullptr);

	public:
		void AddUserMessage(const User& user, const QString& entry);
	};
}