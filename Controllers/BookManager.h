//
// Created by Danh Quan on 19/02/2025.
//

#ifndef BOOKMANAGER_H
#define BOOKMANAGER_H

#include <vector>

#include "Book.h"

class BookManager {
private:
    std::vector<Book> bookList;

public:

    void addBook(const Book &book);
    void deleteBook(int id);
    void updateBook(int id);
    void displayListBook(const std::vector<Book> &Book);
    Book findById(int id);
    std::vector<Book> findByTitle(const std::string &title);
    std::vector<Book> findByAuthor(const std::string &author);
    std::vector<Book> findByCategory(const std::string &category);

};



#endif //BOOKMANAGER_H
