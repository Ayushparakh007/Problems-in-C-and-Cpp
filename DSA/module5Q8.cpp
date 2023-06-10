#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool available;

public:
    Book(string title, string author, string isbn) {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
        this->available = true;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    string getISBN() const {
        return isbn;
    }

    bool isAvailable() const {
        return available;
    }

    void borrowBook() {
        if (available) {
            available = false;
            cout << "Book borrowed successfully." << endl;
        } else {
            cout << "Book is already borrowed." << endl;
        }
    }

    void returnBook() {
        if (!available) {
            available = true;
            cout << "Book returned successfully." << endl;
        } else {
            cout << "Book is already available." << endl;
        }
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void displayAvailableBooks() const {
        cout << "Available Books:" << endl;
        for (const Book& book : books) {
            if (book.isAvailable()) {
                cout << "Title: " << book.getTitle() << endl;
                cout << "Author: " << book.getAuthor() << endl;
                cout << "ISBN: " << book.getISBN() << endl;
                cout << "------------------------" << endl;
            }
        }
    }
};

int main() {
    Library library;

    // Add books to the library
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565");
    library.addBook(book1);

    Book book2("To Kill a Mockingbird", "Harper Lee", "9780061120084");
    library.addBook(book2);

    Book book3("Pride and Prejudice", "Jane Austen", "9780141439518");
    library.addBook(book3);

    // Display available books
    library.displayAvailableBooks();

    // Borrow a book
    cout << "Borrowing a book..." << endl;
    book1.borrowBook();

    // Display available books after borrowing
    library.displayAvailableBooks();

    // Return the borrowed book
    cout << "Returning the book..." << endl;
    book1.returnBook();

    // Display available books after returning
    library.displayAvailableBooks();

    return 0;
}
