#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

//함수 정의 title과 author 값 입력 책이름, 저자 저장
Book::Book(const string& title, const string& author) : title(title), author(author)
{
}
