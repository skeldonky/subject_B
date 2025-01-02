#pragma once
#include <iostream>
#include <vector>
//�������
#include "Book.h"

class BookManager {
private:
    vector<Book> books; // å ��� ����

public:
    // å �߰� �޼���
    void addBook(const string& title, const string& author);
    
    // ��� å ��� �޼���
    void displayAllBooks() const;

    // ���� �˻� ��� (������ ���� ���� ���ٰ� ����)
    void searchByTitle(string title);

    //�۰� �˻� ���
    void searchByAuthor(string author);

};
