//
// Created by Danh Quan on 21/02/2025.
//

#include "BookService.h"

#include <algorithm>
#include <iostream>

BookService::BookService(const std::string& filename) {
    books = BookDAO::readAllFile(filename);
}

void BookService::addBook(const Book& book) {
    for (const auto& b : books) {
        if (b.get_bookId() == book.get_bookId()) {
            std::cout << "Sách đã tồn tại!" << std::endl;
            return;
        }
    }
    books.push_back(book);
    BookDAO::saveToFile(book, "books.txt");
}

void BookService::deleteBook(int bookId) {
    books.erase(std::remove_if(books.begin(), books.end(),
                               [bookId](const Book& b) { return b.get_bookId() == bookId; }),
                books.end());
    BookDAO::remove(bookId, "books.txt");
}

void BookService::borrowBook(int bookId) {
    for (auto& book : books) {
        if (book.get_bookId() == bookId && book.get_bookQuantity() > 0) {
            book.set_bookQuantity(book.get_bookQuantity() - 1);
            BookDAO::update(book, "books.txt");
            return;
        }
    }
    std::cout << "Không thể mượn sách!" << std::endl;
}

void BookService::returnBook(int bookId) {
    for (auto& book : books) {
        if (book.get_bookId() == bookId) {
            book.set_bookQuantity(book.get_bookQuantity() + 1);
            BookDAO::update(book, "books.txt");
            return;
        }
    }
}
