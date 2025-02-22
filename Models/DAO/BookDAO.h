//
// Created by Danh Quan on 21/02/2025.
//

#ifndef BOOKDAO_H
#define BOOKDAO_H

#include <Book.h>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>



class BookDAO {
public:
    static void saveToFile(const Book& book, const std::string& filename);
    static std::vector<Book> readAllFile(const std::string& filename);
    static void update(const Book& book, const std::string& filename);
    static void remove(int bookId, const std::string& filename);
    static void displayBook(Book &book);
};



#endif //BOOKDAO_H
