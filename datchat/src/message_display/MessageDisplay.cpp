#include "pch.h"
#include "MessageDisplay.h"

dat::MessageDisplay::MessageDisplay(QWidget* parent)
	: QTextEdit(parent)
{

}

void dat::MessageDisplay::AddUserMessage(const User& user, const QString& entry)
{
	QString timeString = QTime::currentTime().toString("HH:mm");

	insertHtml(QString("<span>[%1] <\span>").arg(timeString));

	insertHtml(QString("<span style=\"color:%1;\">%2<\span>: ").arg(user.color.name(), user.name));

	insertHtml(entry);
}
