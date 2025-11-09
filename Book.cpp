#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book(string t, string a, int p) : title(t), author(a), pageCount(p)
{
}

string Book::getTitle()
{
    return title;
}

void Book::displayBookInfo()
{
    cout << "Title: " << title << endl << "Author: " << author << endl << "Page: " << pageCount << endl;
}