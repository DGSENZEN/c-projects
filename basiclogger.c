#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char address[100];
    char phone[15];
};

struct Contact contacts[MAX_CONTACTS];
int contactCount = 0;

void addContact() {
    if (contactCount < MAX_CONTACTS) {
        struct Contact newContact;
        printf("Enter Name: ");
        scanf("%s", newContact.name);
        printf("Enter Address: ");
        scanf("%s", newContact.address);
        printf("Enter Phone Number: ");
        scanf("%s", newContact.phone);
        contacts[contactCount++] = newContact;
        printf("Contact added successfully!\n");
    } else {
        printf("Contact storage is full.\n");
    }
}

void displayContacts() {
    printf("Contacts:\n");
    for (int i = 0; i < contactCount; i++) {
        printf("Contact %d:\n", i + 1);
        printf("Name: %s\n", contacts[i].name);
        printf("Address: %s\n", contacts[i].address);
        printf("Phone: %s\n", contacts[i].phone);
    }
}

void updateContact() {
    int contactIndex;
    printf("Enter the index of the contact you want to update: ");
    scanf("%d", &contactIndex);

    if (contactIndex >= 1 && contactIndex <= contactCount) {
        struct Contact updatedContact;
        printf("Enter Name: ");
        scanf("%s", updatedContact.name);
        printf("Enter Address: ");
        scanf("%s", updatedContact.address);
        printf("Enter Phone Number: ");
        scanf("%s", updatedContact.phone);
        contacts[contactIndex - 1] = updatedContact;
        printf("Contact updated successfully!\n");
    } else {
        printf("Invalid contact index.\n");
    }
}

void removeContact() {
    int contactIndex;
    printf("Enter the index of the contact you want to remove: ");
    scanf("%d", &contactIndex);

    if (contactIndex >= 1 && contactIndex <= contactCount) {
        for (int i = contactIndex - 1; i < contactCount - 1; i++) {
            contacts[i] = contacts[i + 1];
        }
        contactCount--;
        printf("Contact removed successfully!\n");
    } else {
        printf("Invalid contact index.\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nContact Logger Menu:\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Update Contact\n");
        printf("4. Remove Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                updateContact();
                break;
            case 4:
                removeContact();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
