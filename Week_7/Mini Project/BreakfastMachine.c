#include <stdio.h>
#include <string.h>
#include "DataTypes.h"
#include "BreakfastMachine.h"

const char admin[MAX_NAMES][MAX_NAME_LENGTH] = {"Ahmed", "Mohammed", "Ali"};
const char adminPass[MAX_NAMES][MAX_NAME_LENGTH] = {"Ahmed", "Mohammed", "Ali"};
const char user[MAX_NAMES][MAX_NAME_LENGTH]  = {"Ahmed", "Mohammed", "Ali"};
const char userPass[MAX_NAMES][MAX_NAME_LENGTH] = {"Ahmed", "Mohammed", "Ali"};
char searchName[MAX_NAME_LENGTH];
char searchPass[MAX_NAME_LENGTH];
//u8 prodBuy[][MAX_ITEMS] = {0};

MenuItem snacks[MAX_ITEMS] = {
    {"Break", 10, 5},
    {"Molto", 10, 8},
    {"Boreo", 10, 6},
};
MenuItem bakery[MAX_ITEMS] = {
    {"Domty Sandwich", 20, 10}
};
MenuItem coldDrink[MAX_ITEMS] = {
    {"Water", 20, 5},
    {"Cola ", 20, 8},
    {"Juice", 20, 6},
};
MenuItem hotDrink[MAX_ITEMS] = {
    {"Tea  ", 10, 5},
    {"Coffe", 10, 8},
};
MenuItem flavors[MAX_ITEMS] = {
    {"Mint      ", 15, 5},
    {"Strawberry", 10, 8},
};

MenuBuy prodBuy[MAX_ITEMS] = {
    {0, 0, 0}
};


char searchAdmin(char admin [][MAX_NAME_LENGTH], char searchName[]) {
    char found = 0;
    for (int i = 0; i < MAX_NAMES; i++) {
        if (strcmp(admin[i], searchName) == 0) {
            found = 1;
        }
    }
    return found;
}

char searchUser(char user [][MAX_NAME_LENGTH], char searchName[]) {
    char found = 0;
    for (int i = 0; i < MAX_NAMES; i++) {
        if (strcmp(admin[i], searchName) == 0) {
            found = 1;
        }
    }
    return found;
}

void notFoundname(char found) {
    if (found) {
        printf("===============================\n");
        printf("Welcome %s\n", searchName);
        printf("===============================\n");
    }
    else {
        printf("===============================\n");
        printf("This name is not founded!\n");
        printf("===============================\n");
    }
}

void notFoundpass(char found) {
    if (found) {
        printf("===============================\n");
        printf("Welcome %s\n", searchName);
        printf("===============================\n");
    }
    else {
        printf("===============================\n");
        printf("This password is wrong!\n");
        printf("===============================\n");
    }
}

void printMenu(const MenuItem menu[]) {
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (menu[i].price == 0) break;
        printf("%d.  %s  %d EGP\n", (i + 1), menu[i].name, menu[i].price);
    }
    printf("\n");
}

void printAdminMenu(const MenuItem menu[]) {
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (menu[i].price == 0) break;
        printf("%d. %s  %d  %d EGP\n", (i + 1), menu[i].name, menu[i].quantity, menu[i].price);
    }
    printf("\n");
}

void printMenubuy(const MenuBuy menu[]) {
    for (int i = 0; i < MAX_ITEMS; i++) {
        if (menu[i].categeory == 0) break;
        printf("%d  %d  %d\n", menu[i].categeory, menu[i].item, menu[i].quantity);
    }
    printf("\n");
}

void itemBuy(){
    u8 prodNum;
    u8 more;
    printf("Enter the number of products you want: ");
    scanf("%d", &prodNum);
    for (int i = 0; i < prodNum; i++) {
        printf("Enter the number of Category Product Quantity respectively: ");
        scanf("%d %d %d", &prodBuy[i].categeory, &prodBuy[i].item, &prodBuy[i].quantity);
        if (i == prodNum-1) {
            printf("Press 1 if you need more products or 2 if you don't: ");
            scanf("%d", &more);
            switch (more) {
                case 1: {
                    prodNum += 1;
                    break;
                }case 2: {
                    break;
                }default: {
                    printf("===============================\n");
                    printf("Wrong Number!\n");
                    printf("===============================\n");
                }
            }
        }
    }
}

void printBuy(const MenuItem menu[], const MenuBuy buy[], int i, int item) {
    int total = buy[i].quantity * menu[item-1].price;
    static int totalSum = 0;
    totalSum += total;
    printf("%d.  %s  %d   total = %d EGP\n", (i + 1), menu[item-1].name, buy[i].quantity, total);
    printf("\n");
}

int totalSum(const MenuItem menu[], const MenuBuy buy[], int i, int item) {
    int total = buy[i].quantity * menu[item-1].price;
    return total;
}

void reduceQuan(MenuItem menu[], const MenuBuy buy[], int i, int item) {
    menu[item-1].quantity -= buy[i].quantity;
}

int catReturn(const MenuBuy buy[], int i) {
    return buy[i].categeory;
}
int itemReturn(const MenuBuy buy[], int i) {
    return buy[i].item;
}
int quanReturn(const MenuBuy buy[], int i) {
    return buy[i].quantity;
}
