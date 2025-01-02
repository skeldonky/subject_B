#pragma once
#include <iostream>
#include <vector>
//헤더참조
#include "Book.h"

class BookManager {
private:
    vector<Book> books; // 책 목록 저장

public:
    // 책 추가 메서드
    void addBook(const string& title, const string& author);
    
    // 모든 책 출력 메서드
    void displayAllBooks() const;

    // 제목 검색 기능 (제목이 같은 경우는 없다고 가정)
    void searchByTitle(string title);

    //작가 검색 기능
    void searchByAuthor(string author);

};
