#include "DataTypes.h"

typedef struct {
    char name[MAX_NAME_LENGTH];
    int quantity;
    int price;
} MenuItem;

typedef struct {
    int categeory, item, quantity;
} MenuBuy;


char searchAdmin(char admin [][MAX_NAME_LENGTH], char searchName[]);
char searchUser(char user [][MAX_NAME_LENGTH], char searchName[]);
void notFound(char found);
void printMenu(const MenuItem menu[]);
void itemBuy();
void printBuy(const MenuItem menu[], const MenuBuy buy[], int i, int item);
int totalSum(const MenuItem menu[], const MenuBuy buy[], int i, int item);
void reduceQuan(MenuItem menu[], int item);
int catReturn(const MenuBuy buy[], int i);
int itemReturn(const MenuBuy buy[], int i);
int quanReturn(const MenuBuy buy[], int i);
