//
// Created by Danh Quan on 18/02/2025.
//

#ifndef USER_H
#define USER_H

#include <vector>

#include "Account.h"


class User {
private:
    static int userId;
    std::string userName;
    std::string userEmail;
    std::string phoneNumber;
    std::vector<std::string> borrowed_books;

public:
    User(const std::string &user_name, const std::string &user_email, const std::string &phone_number);

    int get_userId() const;

    std::string get_user_name() const;

    void set_user_name(const std::string &user_name);

    std::string get_user_email() const;

    void set_user_email(const std::string &user_email);

    std::string get_phone_number() const;

    void set_phone_number(const std::string &phone_number);

    std::vector<std::string> get_borrowed_books() const;

    void set_borrowed_books(const std::vector<std::string> &borrowed_books);
};



#endif //USER_H
