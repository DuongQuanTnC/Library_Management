//
// Created by Danh Quan on 21/02/2025.
//

#include "UserDAO.h"

void UserDAO::saveToFile(const User &user, const std::string &filename) {
    std::ofstream file(filename, std::ios::app);
    if (!file) {
        std::cout << "Loi khong the mo file!\n";
        return;
    }
    file << user.get_userId() << "," << user.get_user_name() << ","
         << user.get_user_email() << "," << user.get_phone_number() << std::endl;
    file.close();
    

}

std::vector<User> UserDAO::readAllFile(const std::string &filename) {
}

void UserDAO::updateUser(int userId, const std::string &filename) {
}

void UserDAO::removeUser(User userId) {
}

void UserDAO::displayUser(User &user) {
}
