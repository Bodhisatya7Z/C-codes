#include <stdio.h>
#include <string.h>

struct contact {
    char Name[50];
    char number[16];
};

int main() {
    struct contact contacts[16];
    int count = 0;

    while (count < 16) {

        printf("Enter contact name (or 'e' to exit): ");
        scanf(" %49[^\n]", contacts[count].Name);

        if (strcmp(contacts[count].Name, "e") == 0) {
            break;
        }

        printf("Enter phone number: ");
        scanf("%15s", contacts[count].number);

        count++;
    }

    printf("\n--- Contact List ---\n");

    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s\n",
               i + 1,
               contacts[i].Name,
               contacts[i].number);
    }

    return 0;
}