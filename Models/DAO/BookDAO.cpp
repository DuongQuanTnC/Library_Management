//
// Created by Danh Quan on 21/02/2025.
//

#include "BookDAO.h"

#include <iomanip>


void BookDAO::saveToFile(const Book& book, const std::string& filename) {
    std::ofstream file(filename, std::ios::app);
    if (!file) {
        std::cerr << "Lỗi: Không thể mở file!" << std::endl;
        return;
    }
    file << book.get_bookId() << "," << book.get_bookTitle() << ","
         << book.get_bookAuthor() << "," << book.get_bookCategory() << ","
         << book.get_bookPublicationYear() << "," << book.get_bookQuantity() << std::endl;
    file.close();
}

std::vector<Book> BookDAO::readAllFile(const std::string& filename) {
    std::vector<Book> books;
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Lỗi: Không thể mở file!" << std::endl;
        return books;
    }

    int id, quantity, publishcationYear;
    std::string title, author, category;
    while (file >> id) {
        file.ignore();
        std::getline(file, title, ',');
        std::getline(file, author, ',');
        std::getline(file, category, ',');
        file >> publishcationYear;
        file >> quantity;
        books.emplace_back(title, author, category, publishcationYear, quantity);
    }
    file.close();
    return books;
}

void BookDAO::update(const Book& book, const std::string& filename) {
    std::vector<Book> books = readAllFile(filename);
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Lỗi: Không thể mở file!" << std::endl;
        return;
    }

    for (const auto& b : books) {
        if (b.get_bookId() == book.get_bookId()) {
            file << book.get_bookId() << "," << book.get_bookTitle() << ","
                 << book.get_bookAuthor() << "," << book.get_bookCategory() << ","
                 << book.get_bookPublicationYear() << "," << book.get_bookQuantity() << std::endl;
            std::cout << "Update successful\n";
        }
    }
    file.close();
}

void BookDAO::remove(int bookId, const std::string& filename) {
    std::vector<Book> books = readAllFile(filename);
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Lỗi: Không thể mở file!" << std::endl;
        return;
    }

    for (const auto& b : books) {
        if (b.get_bookId() != bookId) {
            file << b.get_bookId() << "," << b.get_bookTitle() << ","
                 << b.get_bookAuthor() << "," << b.get_bookCategory() << ","
                 << b.get_bookPublicationYear() << "," << b.get_bookQuantity() << std::endl;
        }
    }
    file.close();
}

void BookDAO::displayBook(Book &book) {
    std::cout << std::left << std::setw(8) << book.get_bookId()
              << std::setw(25) << book.get_bookTitle()
              << std::setw(20) << book.get_bookAuthor()
              << std::setw(15) << book.get_bookCategory()
              << std::setw(10) << book.get_bookPublicationYear()
              << std::setw(8) << book.get_bookQuantity() << "\n";
}


