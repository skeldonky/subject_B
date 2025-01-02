#include <iostream>
#include <vector>
#include <string>
//�������
#include "Book.h"
#include "BookManager.h"


int main() {
    BookManager manager;

    // ������ ���� ���α׷��� �⺻ �޴��� �ݺ������� ����Ͽ� ����� �Է��� ó���մϴ�.
    // ���α׷� ���Ḧ �����ϱ� ������ ��� �����մϴ�.
    while (true) {
        cout << "\n������ ���� ���α׷�" << endl;
        cout << "1. å �߰�" << endl; // å ������ �Է¹޾� å ��Ͽ� �߰�
        cout << "2. ��� å ���" << endl; // ���� å ��Ͽ� �ִ� ��� å ���
        cout << "3. å ���� �˻�" << endl; // å ���� �˻�
        cout << "4. å ���� �˻�" << endl; // å ���� �˻�
        cout << "5. ����" << endl; // ���α׷� ����
        cout << "����: ";

        int choice; // ������� �޴� ������ ����
        cin >> choice;

        if (choice == 1) {
            // 1�� ����: å �߰�
            // ����ڷκ��� å ����� ���ڸ��� �Է¹޾� BookManager�� �߰��մϴ�.
            string title, author;
            cout << "å ����: ";
            cin.ignore(); // ���� �Է��� �ܿ� ���۸� ����
            getline(cin, title); // ���� �Է� (���� ����)
            cout << "å ����: ";
            getline(cin, author); // ���ڸ� �Է� (���� ����)
            manager.addBook(title, author); // �Է¹��� å ������ �߰�
        }
        else if (choice == 2) {
            // 2�� ����: ��� å ���
            // ���� BookManager�� ����� å ����� ����մϴ�.
            manager.displayAllBooks();
        }
        else if(choice == 3)
        {
            // 3�� ���� : �������� ã��
            // ���� BookManager�� ����� å ��Ͽ��� �������� å�� �ִ��� �˻��մϴ�.
            string title;
            cout << "�˻��Ͻ� å�� ������ �Է����ּ���. : ";
            cin >> title;
            manager.searchByTitle(title);
        }
        else if(choice == 4)
        {
            // 4�� ���� : ���ڷ� ã��
            // ���� BookManager�� ����� å ��Ͽ��� ���ڷ� å�� �ִ��� �˻��մϴ�.
            string author;
            cout << "�˻��Ͻ� å�� ���� �̸��� �Է����ּ���. : " << endl;
            cin >> author;
            manager.searchByAuthor(author);
        }
        else if (choice == 5) {
            // 5�� ����: ����
            // ���α׷��� �����ϰ� ����ڿ��� �޽����� ����մϴ�.
            cout << "���α׷��� �����մϴ�." << endl;
            break; // while ���� ����
        }
        else {
            // �߸��� �Է� ó��
            // �޴��� ���� ��ȣ�� �Է����� ��� ��� �޽����� ����մϴ�.
            cout << "�߸��� �Է��Դϴ�. �ٽ� �õ��ϼ���." << endl;
        }
    }

    return 0; // ���α׷� ���� ����
}
