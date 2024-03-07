#include <stdio.h>
#include <string.h>
#include "DataTypes.h"

const char admin[MAX_NAMES][MAX_NAME_LENGTH];
const char adminPass[MAX_NAMES][MAX_NAME_LENGTH];
const char user[MAX_NAMES][MAX_NAME_LENGTH];
const char userPass[MAX_NAMES][MAX_NAME_LENGTH];
char searchName[MAX_NAME_LENGTH];
char searchPass[MAX_NAME_LENGTH];
extern snacks[];
extern bakery[];
extern coldDrink[];
extern hotDrink[];
extern flavors[];
extern prodBuy[];

int main()
{
    char loopStatus = 1;
    char cashStatus = 1;
    u8 modeNum;
    int category, item, quantity, cash;
    int totalCheck = 0;
    int subCard = 100;
    //u8 prodBuy[][MAX_ITEMS] = {0};

    while (1) {
        printf("===============================\n");
        printf("1) Admin.      2) User.\n");
        printf("Choose the Mode by the number: ");
        scanf("%d", &modeNum);

        switch (modeNum) { // Admin
            case 1: {
                while (1) {
                    printf("===============================\n");
                    printf("Enter your Name: ");
                    scanf("%s", searchName);
                    notFoundname(searchAdmin(admin, searchName));
                    if (searchAdmin(admin, searchName)) {
                        while (1) {
                            printf("Enter your Password: ");
                            scanf("%s", searchPass);
                            notFoundpass(searchAdmin(adminPass, searchPass));
                            if (searchAdmin(adminPass, searchPass)) break;
                        }
                        break;
                    }
                }
                printf("===============================\n");
                printf("Menu:\n");
                printf("No. Name  Quan.  Price\n\n");
                printf("Cat.1) Snacks:\n");
                printAdminMenu(snacks);

                printf("Cat.2) Bakery:\n");
                printAdminMenu(bakery);

                printf("Cat.3) Cold Drinks:\n");
                printAdminMenu(coldDrink);

                printf("Cat.4) Hot Drinks:\n");
                printAdminMenu(hotDrink);

                printf("Cat.5) flavors:\n");
                printAdminMenu(flavors);
                printf("===============================\n");

                break;
            }
            case 2: { // User
                while (loopStatus) {
                    printf("===============================\n");
                    printf("1) Guest.      2) Subscriber.\n");
                    printf("Choose the Mode by the number: ");
                    scanf("%d", &modeNum);
                    switch (modeNum) {
                        case 1: { // Guest
                            loopStatus = 0;
                            break;
                        }
                        case 2: { // Subscriber
                            loopStatus = 0;
                            while (1) {
                                printf("===============================\n");
                                printf("Enter your Name: ");
                                scanf("%s", searchName);
                                notFoundname(searchUser(user, searchName));
                                if (searchAdmin(admin, searchName)) {
                                    while (1) {
                                        printf("Enter your Password: ");
                                        scanf("%s", searchPass);
                                        notFoundpass(searchUser(userPass, searchPass));
                                        if (searchAdmin(userPass, searchPass)) break;
                                    }
                                    break;
                                }
                            }
                            break;
                        }
                        default: {
                            printf("===============================\n");
                            printf("Wrong Number!\n");
                            printf("===============================\n");
                        }
                    }
                } // while loop
                printf("===============================\n");
                printf("Menu:\n");
                printf("No. Name   price\n\n");
                printf("Cat.1) Snacks:\n");
                printMenu(snacks);

                printf("Cat.2) Bakery:\n");
                printMenu(bakery);

                printf("Cat.3) Cold Drinks:\n");
                printMenu(coldDrink);

                printf("Cat.4) Hot Drinks:\n");
                printMenu(hotDrink);

                printf("Cat.5) flavors:\n");
                printMenu(flavors);
                printf("===============================\n");

                itemBuy();
                //printMenubuy(prodBuy);

                printf("===============================\n");
                printf("Check:\n");
                printf("No. Name  Quan.  Total\n\n");
                for (int i = 0; i < MAX_ITEMS; i++) { // print the receipt
                    category = catReturn(prodBuy, i);
                    item = itemReturn(prodBuy, i);
                    quantity = quanReturn(prodBuy, i);

                    if (category == 0) break;
                    switch (category) {
                        case 1:{
                            printBuy(snacks, prodBuy, i, item);
                            totalCheck += totalSum(snacks, prodBuy, i, item);
                            reduceQuan(snacks, prodBuy, i, item);
                            break;
                        }
                        case 2:{
                            printBuy(bakery, prodBuy, i, item);
                            totalCheck += totalSum(bakery, prodBuy, i, item);
                            reduceQuan(bakery, prodBuy, i, item);
                            break;
                        }
                        case 3:{
                            printBuy(coldDrink, prodBuy, i, item);
                            totalCheck += totalSum(coldDrink, prodBuy, i, item);
                            reduceQuan(coldDrink, prodBuy, i, item);
                            break;
                        }
                        case 4:{
                            printBuy(hotDrink, prodBuy, i, item);
                            totalCheck += totalSum(hotDrink, prodBuy, i, item);
                            reduceQuan(hotDrink, prodBuy, i, item);
                            break;
                        }
                        case 5:{
                            printBuy(flavors, prodBuy, i, item);
                            totalCheck += totalSum(flavors, prodBuy, i, item);
                            reduceQuan(flavors, prodBuy, i, item);
                            break;
                        }

                    }
                }
                printf("===============================\n");
                printf("Total Check: %d\n", totalCheck);
                printf("===============================\n");
                switch (modeNum) {
                    case 1: { // Guest
                        break;
                    }
                    case 2: { // Subscriber
                        printf("===============================\n");
                        if (subCard >= totalCheck) {
                            subCard -= totalCheck;
                            cashStatus = 0;
                            printf("===============================\n");
                            printf ("the remaining balance %d EGP\n", subCard);
                            printf("===============================\n");
                        }else {
                            printf("===============================\n");
                            printf ("The balance is not enough!\n");
                            printf("===============================\n");
                        }
                        break;
                    }
                }
                if (cashStatus) {
                    printf("Enter the cash: ");
                    scanf("%d", &cash);
                    printf("===============================\n");
                    printf("The remaining of cash %d EGP\n", cash-totalCheck);
                    printf("===============================\n");
                }
                printf("Good bye!\n");
                break; //User
            }
            default: {
                printf("===============================\n");
                printf("Wrong Number!\n");
                printf("===============================\n");
            }
        }
    }

    return 0;
}
