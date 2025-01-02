#include "BookManager.h"

// 책 추가 메서드
void BookManager::addBook(const string& title, const string& author) {
    books.push_back(Book(title, author)); // push_back 사용
    cout << "책이 추가되었습니다: " << title << " by " << author << endl;
}

// 모든 책 출력 메서드
void BookManager::displayAllBooks() const {
    if (books.empty()) {
        cout << "현재 등록된 책이 없습니다." << endl;
        return;
    }

    cout << "현재 도서 목록:" << endl;
    for (size_t i = 0; i < books.size(); i++) { // 일반적인 for문 사용
        cout << "- " << books[i].title << " by " << books[i].author << endl;
    }
}

void BookManager::searchByTitle(string title)
{
    //책의 유무 확인용 변수와 책의 위치 저장용 변수
    bool on = false;
    int check = 0;
    for (int i = 0; i < books.size(); i++)
    {
        //책 있는지 확인 있으면 반복문 나가기
        if (books[i].title == title)
        {
            //0부터 시작하므로 + 1 해준다.
            check = i + 1;
            on = true;
            break;
        }
    }

    //책 유무 확인 후 글자 출력
    if (on)
    {
        cout << "책이 있습니다. 위치는 " << check << "번째 위치에 있습니다." << endl;
    }
    else {
        cout << "찾는 책이 없습니다." << endl;
    }
}

void BookManager::searchByAuthor(string author)
{
    //저자의 유무 확인용 변수와 저자의 위치 저장용 변수
    bool on = false;
    int cnt = 0;
    int size = books.size();
    int *check = new int[size];
    
    for (int i = 0; i < books.size(); i++)
    {
        //저자 있는지 확인 책은 여러권 가능
        if (books[i].author == author)
        {
            //0부터 시작하므로 + 1 해준다.
            check[cnt] = i;
            on = true;
            cnt++;
        }
    }

    //책 유무 확인 후 글자 출력
    if (on)
    {
        cout << "해당 저자의 책이 있습니다. " << endl;
        cout << "총 : " << cnt << "권이 존재합니다." << endl;
        cout << "책 제목은 : ";
        for (size_t i = 0; i < cnt; i++)
        {
            if (i == cnt-1)
            {
                //마지막 책이름 뒤에는 ','가 필요없어서 구분
                cout << books[check[i]].title << endl;
            }
            else {
                cout << books[check[i]].title << ", ";
            }
            cout << books[check[i]].title << ", ";
        }
    }
    else {
        cout << "찾는 책이 없습니다." << endl;
    }
}
