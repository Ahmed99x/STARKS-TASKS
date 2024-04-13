#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct client {
	int Id;
	int money;
	char name[20];
	struct client* Next;
} client;

client* head = NULL;

void AddClient(int Id, int MemNum) {
	client* PNew;
	client* PCheck;

	if (head == NULL) {
		PNew = (client*)malloc(sizeof(client));
		head = PNew;
		for (int i = 0; i < MemNum; i++) {
			if (i != 0) {
				PNew = (client*)malloc(sizeof(client));
				PCheck->Next = PNew;
			}

			PNew->Id = Id;
			printf("Enter the family member name: ");
			scanf("%s", &PNew->name);
			printf("Enter the family member money: ");
			scanf("%d", &PNew->money);

			PCheck = PNew;
			PNew->Next = NULL;
		}
	}
	else {
		PCheck = head;
		while (PCheck->Next != NULL) PCheck = PCheck->Next;
		for (int i = 0; i < MemNum; i++) {
			PNew = (client*)malloc(sizeof(client));
			PCheck->Next = PNew;

			PNew->Id = Id;
			printf("Enter the family member name: ");
			scanf("%s", &PNew->name);
			printf("Enter the family member money: ");
			scanf("%d", &PNew->money);

			PCheck = PNew;
			PNew->Next = NULL;
		}
	}
	int choice, id, number;
	printf("\nRun again?\n");
	printf("1) Yes\n");
	printf("2) No\n");
	scanf("%d", &choice);
	switch (choice) {
		case 1:
			printf("Enter ID: ");
			scanf("%d", &id);
			printf("Enter the number of family members: ");
			scanf("%d", &number);
			AddClient(id, number);
			break;
		case 2:
			break;
		default:
			printf("Invalid choice! Please enter again.\n");
	}
	printf("\n");
}

void ViewClients() {
	client* current = head;

	if (head == NULL) printf("Empty list\n\n");

	while (current) {
		/*/if (current->Id != current->Next->Id) {
			printf("Client ID: %d\n", current->Id);
		}*/
		printf("\n\nClient ID: %d\n", current->Id);
		printf("Member: %s\n", current->name);
		printf("Money: %d", current->money);
		current = current->Next;
	}
}

void EditClient() {
	client* edit = head;
	
	int id;
	char name[20];
	
	if (edit == NULL) {
		printf("Empty list\n\n");
	}
	else {
		printf("\t\t\t\t\tEdit the client\n");
		printf("\nEnter ID: ");
		scanf("%d", &id);
		printf("Enter the name of member: ");
		scanf("%s", &name);
		
		while (edit) {
			if (edit->Id == id && !strcmp(edit->name, name)) {
				edit->Id = id;
				strcpy(edit->name, name);
				printf("Enter the family member money: ");
				scanf("%d", &edit->money);
				break;
			}
			edit = edit->Next;
		}
	}
}

int main() {
	int choice, id, number;
	char name[20];
	printf("\t\t\t\t\t*****Welcome*****\n");

	while (1) {
		printf("\n\nEnter 1 to add a new client\n");
		printf("Enter 2 to view all clients\n");
		printf("Enter 3 to edit client data\n");
		printf("Your Choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			printf("\t\t\t\t\tAdding new client\n");
			printf("Enter ID: ");
			scanf("%d", &id);
			printf("Enter the number of family members: ");
			scanf("%d", &number);
			AddClient(id, number);
			break;
		case 2:
			printf("\t\t\t\t\tClients\n");
			ViewClients();
			break;
		case 3:
			EditClient();
			break;
		default:
			printf("Invalid choice! Please enter again.\n");
		}
	}

	return 0;
}