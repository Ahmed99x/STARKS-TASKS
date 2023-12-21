#include <stdio.h>
#include <string.h>

int main() {
    // Correct ID and password
    const char correctID[] = "user123";
    const char correctPassword[] = "123456";

    char enteredID[50];
    char enteredPassword[50];
    int attemptCount = 0;

    // Ask for user ID
    printf("Enter your ID: ");
    scanf("%s", enteredID);

    // strcmp function is used for comparison
    if (strcmp(enteredID, correctID) == 0) {
        
        while (attemptCount < 3) {
            printf("Enter your password: ");
            scanf("%s", enteredPassword);
			printf("==============================================\n");

            
            if (strcmp(enteredPassword, correctPassword) == 0) {
                printf("Welcome!\n");
                return 0;
            } else {
                printf("Incorrect password. Please try again.\n");
            }

            attemptCount++;
        }

        // After 3 incorrect attempts
		printf("==============================================\n");
        printf("No more tries.\n");
		printf("==============================================\n");
    } else {
        // If ID is incorrect
		printf("==============================================\n");
        printf("You are not registered.\n");
		printf("==============================================\n");
    }
}