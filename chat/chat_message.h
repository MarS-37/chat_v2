#pragma once
#include "chat_user.h"
#include <memory>
#include <string>

class chat_message {
public:
	// print the message
	virtual void print() const = 0;

	// print the message if it is not read by user
	virtual void printIfUnreadByUser(const std::string &) = 0;

	// check if message is read
	virtual bool isRead() const = 0;

protected:
	std::string text_;
	std::string sender_;
};