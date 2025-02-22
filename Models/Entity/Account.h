//
// Created by Danh Quan on 18/02/2025.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    static int accountId;
    std::string accountName;
    std::string password;
    std::string accountType;

public:
    Account(const std::string &account_name, const std::string &password, const std::string &account_type,
        const std::string &user_name, const std::string &user_email, const std::string &phone_number);

    ~Account() = default;

    [[nodiscard]] std::string get_account_name() const;

    void set_account_name(const std::string &account_name);

    std::string get_password() const;

    void set_password(const std::string &password);

    std::string get_account_type() const;

    void set_account_type(const std::string &account_type);

    std::string get_user_name() const;

    void set_user_name(const std::string &user_name);

    std::string get_user_email() const;

    void set_user_email(const std::string &user_email);

    std::string get_phone_number() const;

    void set_phone_number(const std::string &phone_number);
};



#endif //ACCOUNT_H
