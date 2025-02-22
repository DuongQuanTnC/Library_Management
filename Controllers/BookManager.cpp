//
// Created by Danh Quan on 19/02/2025.
//

#include "BookManager.h"

void BookManager::addBook(const Book &book) {
    for (Book &b: bookList) {
        if (b.get_bookTitle() == book.get_bookTitle() && b.get_bookAuthor() == book.get_bookAuthor()
            && b.get_bookPublishcationYear() == book.get_bookPublishcationYear()) {
            b.set_bookQuantity(b.get_bookQuantity() + book.get_bookQuantity());
        }
    }

    return bookList.push_back(book);

}

void BookManager::deleteBook(int id) {
}

void BookManager::updateBook(int id) {
}

void BookManager::displayListBook(const std::vector<Book> &Book) {
}

Book BookManager::findById(int id) {
}

std::vector<Book> BookManager::findByTitle(const std::string &title) {
}

std::vector<Book> BookManager::findByAuthor(const std::string &author) {
}

std::vector<Book> BookManager::findByCategory(const std::string &category) {
}
