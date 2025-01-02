#include "BookManager.h"

// å �߰� �޼���
void BookManager::addBook(const string& title, const string& author) {
    books.push_back(Book(title, author)); // push_back ���
    cout << "å�� �߰��Ǿ����ϴ�: " << title << " by " << author << endl;
}

// ��� å ��� �޼���
void BookManager::displayAllBooks() const {
    if (books.empty()) {
        cout << "���� ��ϵ� å�� �����ϴ�." << endl;
        return;
    }

    cout << "���� ���� ���:" << endl;
    for (size_t i = 0; i < books.size(); i++) { // �Ϲ����� for�� ���
        cout << "- " << books[i].title << " by " << books[i].author << endl;
    }
}

void BookManager::searchByTitle(string title)
{
    //å�� ���� Ȯ�ο� ������ å�� ��ġ ����� ����
    bool on = false;
    int check = 0;
    for (int i = 0; i < books.size(); i++)
    {
        //å �ִ��� Ȯ�� ������ �ݺ��� ������
        if (books[i].title == title)
        {
            //0���� �����ϹǷ� + 1 ���ش�.
            check = i + 1;
            on = true;
            break;
        }
    }

    //å ���� Ȯ�� �� ���� ���
    if (on)
    {
        cout << "å�� �ֽ��ϴ�. ��ġ�� " << check << "��° ��ġ�� �ֽ��ϴ�." << endl;
    }
    else {
        cout << "ã�� å�� �����ϴ�." << endl;
    }
}

void BookManager::searchByAuthor(string author)
{
    //������ ���� Ȯ�ο� ������ ������ ��ġ ����� ����
    bool on = false;
    int cnt = 0;
    int size = books.size();
    int *check = new int[size];
    
    for (int i = 0; i < books.size(); i++)
    {
        //���� �ִ��� Ȯ�� å�� ������ ����
        if (books[i].author == author)
        {
            //0���� �����ϹǷ� + 1 ���ش�.
            check[cnt] = i;
            on = true;
            cnt++;
        }
    }

    //å ���� Ȯ�� �� ���� ���
    if (on)
    {
        cout << "�ش� ������ å�� �ֽ��ϴ�. " << endl;
        cout << "�� : " << cnt << "���� �����մϴ�." << endl;
        cout << "å ������ : ";
        for (size_t i = 0; i < cnt; i++)
        {
            if (i == cnt-1)
            {
                //������ å�̸� �ڿ��� ','�� �ʿ��� ����
                cout << books[check[i]].title << endl;
            }
            else {
                cout << books[check[i]].title << ", ";
            }
            cout << books[check[i]].title << ", ";
        }
    }
    else {
        cout << "ã�� å�� �����ϴ�." << endl;
    }
}
