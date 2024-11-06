// 2. Write a C program that defines a structure called Book to store the details of books including title, author, and price. The
// program should then create an array of Book structures to store the details of three books. After storing the details, the
// program should print the details of all books.

#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[3];
    
    // Input details for 3 books
    for(int i = 0; i < 3; i++) {
        printf("Enter details for Book %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]%*c", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]%*c", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    
    // Output the details of all books
    printf("\nDetails of Books:\n");
    for(int i = 0; i < 3; i++) {
        printf("Book %d\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("\n");
    }
    
    return 0;
}
