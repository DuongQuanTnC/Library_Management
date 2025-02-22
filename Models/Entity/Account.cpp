//
// Created by Danh Quan on 18/02/2025.
//

#include "Account.h"

Account::Account(const std::string &account_name, const std::string &password, const std::string &account_type,
                 const std::string &user_name, const std::string &user_email, const std::string &phone_number) {
}

std::string Account::get_account_name() const {
    return accountName;
}

void Account::set_account_name(const std::string &account_name) {
    accountName = account_name;
}

std::string Account::get_password() const {
    return password;
}

void Account::set_password(const std::string &password) {
    this->password = password;
}

std::string Account::get_account_type() const {
    return accountType;
}

void Account::set_account_type(const std::string &account_type) {
    accountType = account_type;
}

std::string Account::get_user_name() const {
    return userName;
}

void Account::set_user_name(const std::string &user_name) {
    userName = user_name;
}

std::string Account::get_user_email() const {
    return userEmail;
}

void Account::set_user_email(const std::string &user_email) {
    userEmail = user_email;
}

std::string Account::get_phone_number() const {
    return phoneNumber;
}

void Account::set_phone_number(const std::string &phone_number) {
    phoneNumber = phone_number;
}

