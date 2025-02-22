//
// Created by Danh Quan on 18/02/2025.
//

#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    static int bookId;
    std::string bookTitle;
    std::string bookAuthor;
    std::string bookCategory;
    int bookPublicationYear;
    int bookQuantity;

public:
    Book(const std::string &bookTitle, const std::string &bookAuthor, const std::string &bookCategory, int publishcation_year,
        int bookQuantity);

    Book(int bookId, const std::string &bookTitle, const std::string &bookAuthor, const std::string &bookCategory, int publishcation_year,
        int bookQuantity);

    ~Book() = default;

    int get_bookId() const;

    std::string get_bookTitle() const;

    void set_bookTitle(const std::string &bookTitle);

    std::string get_bookAuthor() const;

    void set_bookAuthor(const std::string &bookAuthor);

    std::string get_bookCategory() const;

    void set_bookCategory(const std::string &bookCategory);

    int get_bookPublicationYear() const;

    void set_bookPublicationYear(const int publishcation_year);

    int get_bookQuantity() const;

    void set_bookQuantity(const int bookQuantity);
};




#endif //BOOK_H
