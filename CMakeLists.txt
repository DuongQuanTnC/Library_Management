cmake_minimum_required(VERSION 3.30)
project(Library_Management)

set(CMAKE_CXX_STANDARD 20)

# Thêm đường dẫn cho Models, Views, Controllers
include_directories(${PROJECT_SOURCE_DIR}/Models)
include_directories(${PROJECT_SOURCE_DIR}/Views)
include_directories(${PROJECT_SOURCE_DIR}/Controllers)
include_directories(${PROJECT_SOURCE_DIR}/Models/Entity)
include_directories(${PROJECT_SOURCE_DIR}/Models/DAO)
include_directories(${PROJECT_SOURCE_DIR}/Models/Service)

add_executable(Library_Management main.cpp
        Models/Entity/Book.cpp
        Models/Entity/Book.h
        Models/Entity/Account.cpp
        Models/Entity/Account.h
        Models/Entity/User.cpp
        Models/Entity/User.h
        Controllers/BookManager.cpp
        Controllers/BookManager.h
        Models/DAO/BookDAO.cpp
        Models/DAO/BookDAO.h
        Models/Service/BookService.cpp
        Models/Service/BookService.h
        Models/DAO/UserDAO.cpp
        Models/DAO/UserDAO.h)
