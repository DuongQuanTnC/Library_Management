//
// Created by Danh Quan on 18/02/2025.
//

#include "User.h"

User::User(const std::string &user_name, const std::string &user_email, const std::string &phone_number):
    userName(user_name), userEmail(user_email), phoneNumber(phone_number) {}

int User::get_userId() const {
    return userId;
}

std::string User::get_user_name() const {
    return userName;
}

void User::set_user_name(const std::string &user_name) {
    userName = user_name;
}

std::string User::get_user_email() const {
    return userEmail;
}

void User::set_user_email(const std::string &user_email) {
    userEmail = user_email;
}

std::string User::get_phone_number() const {
    return phoneNumber;
}

void User::set_phone_number(const std::string &phone_number) {
    phoneNumber = phone_number;
}

std::vector<std::string> User::get_borrowed_books() const {
    return borrowed_books;
}

void User::set_borrowed_books(const std::vector<std::string> &borrowed_books) {
    this->borrowed_books = borrowed_books;
}
