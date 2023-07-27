#pragma once

#include "chat_user.h"
#include "chat_message.h"
#include "broadcast_message.h"
#include "private_message.h"
#include <iostream>
#include <string>
#include <map>
//#include <vector>
#include <memory>

class chat_mgr
{
public:
	// construct
	chat_mgr();

	// destructor
	~chat_mgr();

	// function help
	void displayHelp();

	// login availability
	bool isLoginAvailable(const std::string& login) const;

	// registration
	void signUp();

	// login verification
	bool isValidLogin(const std::string& login) const;

	// authorization
	chat_user *signIn();

	// user logout
	void signOut();

	// deleting a user
	void removeUser(chat_user& user);

	// Add functions to provide range-based for loop support
	std::shared_ptr<chat_message>* begin() const { return messages_; }
	std::shared_ptr<chat_message>* end() const { return messages_ + numMessages_; }

	// sending a message
	void sendMessage(const std::string& message);

	// sending a private message
	void sendPrivateMessage(chat_user& sender, const std::string& receiverName, const std::string& messageText);

	// sending a shared message
	void sendBroadcastMessage(chat_user& sender, const std::string& message);

	// main work
	void work();

	// check unread messages
	void checkUnreadMessages();

private:
	std::map<std::string, chat_user> users_;
	std::shared_ptr<chat_message>* messages_;
	size_t numMessages_;
	chat_user *loggedUser_;
};