
#include <stdio.h>
#include <string.h>

// Book details
struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[100];
    int choice, count = 0, i, searchId, found;

    do {
        printf("\n===== LIBRARY MANAGEMENT =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[count].id);

                printf("Enter Book Title: ");
                scanf(" %49[^\n]", b[count].title);

                printf("Enter Author Name: ");
                scanf(" %49[^\n]", b[count].author);

                count++;
                printf("Book added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("No books available.\n");
                } else {
                    for (i = 0; i < count; i++) {
                        printf("\nBook ID: %d\n", b[i].id);
                        printf("Title: %s\n", b[i].title);
                        printf("Author: %s\n", b[i].author);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for (i = 0; i < count; i++) {
                    if (b[i].id == searchId) {
                        printf("Book Found!\n");
                        printf("Title: %s\n", b[i].title);
                        printf("Author: %s\n", b[i].author);
                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("Book not found.\n");
                }
                break;

            case 4:
                printf("Exiting Library System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
