#include <string>

class Book
{
    private:
    std::string title;
    std::string author;
    int pageCount;

    public:
    Book(std::string title, std::string author, int pageCount);
    std::string getTitle();
    void displayBookInfo();

};