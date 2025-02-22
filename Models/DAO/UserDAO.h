//
// Created by Danh Quan on 21/02/2025.
//

#ifndef USERDAO_H
#define USERDAO_H
#include "User.h"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>


class UserDAO {
public:
    static void saveToFile(const User &user, const std::string &filename);
    static std::vector<User> readAllFile(const std::string &filename);
    static void updateUser(int userId, const std::string &filename);
    static void removeUser(User userId);
    static void displayUser(User &user);
};



#endif //USERDAO_H
