
#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    char isbn[20];
    float price;
};

int main() {
    struct Book book;
    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    printf("Enter author name: ");
    fgets(book.author, sizeof(book.author), stdin);
    printf("Enter ISBN: ");
    fgets(book.isbn, sizeof(book.isbn), stdin);
    printf("Enter price: ");
    scanf("%f", &book.price);
    printf("\n--- Book Details ---\n");
    printf("Title: %s", book.title);
    printf("Author: %s", book.author);
    printf("ISBN: %s", book.isbn);
    printf("Price: $%.2f\n", book.price);

    return 0;
}
