//
// Created by Danh Quan on 18/02/2025.
//

#include "Book.h"

#include <iomanip>
#include <iostream>

Book::Book(const std::string &bookTitle, const std::string &bookAuthor, const std::string &bookCategory,
           int bookPublicationYear,
           int bookQuantity):
        bookTitle(bookTitle), bookAuthor(bookAuthor), bookCategory(bookCategory), bookPublicationYear(bookPublicationYear),
        bookQuantity(bookQuantity) { bookId += 1; };

Book::Book(int bookId, const std::string &bookTitle, const std::string &bookAuthor, const std::string &bookCategory,
        int bookPublicationYear, int bookQuantity):
                bookTitle(bookTitle), bookAuthor(bookAuthor), bookCategory(bookCategory),
                bookPublicationYear(bookPublicationYear), bookQuantity(bookQuantity) {};



int Book::get_bookId() const {
        return bookId;
}

std::string Book::get_bookTitle() const {
        return bookTitle;
}

void Book::set_bookTitle(const std::string &bookTitle) {
        this->bookTitle = bookTitle;
}

std::string Book::get_bookAuthor() const {
        return bookAuthor;
}

void Book::set_bookAuthor(const std::string &bookAuthor) {
        this->bookAuthor = bookAuthor;
}

std::string Book::get_bookCategory() const {
        return bookCategory;
}

void Book::set_bookCategory(const std::string &bookCategory) {
        this->bookCategory = bookCategory;
}

int Book::get_bookPublicationYear() const {
        return bookPublicationYear;
}

void Book::set_bookPublicationYear(const int publishcation_year) {
        bookPublicationYear = publishcation_year;
}

int Book::get_bookQuantity() const {
        return bookQuantity;
}

void Book::set_bookQuantity(int bookQuantity) {
        this->bookQuantity = bookQuantity;
}
