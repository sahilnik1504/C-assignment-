#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

void displayBook(struct Book b) {
    printf("\n--- Book Details ---\n");
    printf("ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book b1;
    printf("Enter Book ID, Title, Author, and Price: ");
    scanf("%d %s %s %f", &b1.id, b1.title, b1.author, &b1.price);
    displayBook(b1);
    return 0;
}