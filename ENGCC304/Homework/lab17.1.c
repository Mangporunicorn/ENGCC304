#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[100];
    int year;
};

// เพิ่มหนังสือใหม่
void addBook(struct Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library is full.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &books[*count].id);
    getchar(); // เคลียร์ newline

    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = '\0'; // ลบ newline

    printf("Enter Author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = '\0';

    printf("Enter Year: ");
    scanf("%d", &books[*count].year);

    (*count)++;
    printf("Book added successfully!\n");
}

// ค้นหาหนังสือตามชื่อ
void searchBook(struct Book books[], int count, char title[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}

// แสดงรายชื่อหนังสือทั้งหมด
void displayBooks(struct Book books[], int count) {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("Book ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n\n", books[i].year);
    }
}

int main() {
    struct Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    char searchTitle[100];

    do {
        printf("\nChoose an option:\n");
        printf("1. Add new book\n");
        printf("2. Search book by title\n");
        printf("3. Display all books\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // เคลียร์ newline

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                printf("Enter Title to Search: ");
                fgets(searchTitle, sizeof(searchTitle), stdin);
                searchTitle[strcspn(searchTitle, "\n")] = '\0';
                searchBook(books, count, searchTitle);
                break;
            case 3:
                displayBooks(books, count);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
