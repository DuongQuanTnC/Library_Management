//
// Created by Danh Quan on 21/02/2025.
//

#ifndef BOOKSERVICE_H
#define BOOKSERVICE_H


#include <vector>

#include "Book.h"
#include "BookDAO.h"

class BookService {
private:
    std::vector<Book> books;

public:
    BookService(const std::string& filename);
    void addBook(const Book& book);
    void deleteBook(int bookId);
    void borrowBook(int bookId);
    void returnBook(int bookId);
    void save(const std::string& filename) const;
};



#endif //BOOKSERVICE_H
