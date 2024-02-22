#include <stdio.h>

double calculateCube(void *value, int type) {
    double cube;

    switch (type) {
        case 1:
            cube = (double)(*(char *)value);
            cube *= cube * cube;
            break;
        case 2:
            cube = (double)(*(int *)value);
            cube *= cube * cube;
            break;
        case 3:
            cube = (double)(*(long int *)value);
            cube *= cube * cube;
            break;
        case 4:
            cube = (double)(*(float *)value);
            cube *= cube * cube;
            break;
        case 5:
            cube = (*(double *)value);
            cube *= cube * cube;
            break;
        default:
            printf("Invalid type.\n");
            cube = 0.0;
            break;
    }

    return cube;
}

int main() {
    int type;
    char cValue;
    int iValue;
    long int lValue;
    float fValue;
    double dValue;

    printf("Enter the type of value (char=1, int=2, long int=3, float=4, double=5): ");
    scanf("%d", &type);

    printf("Enter the value: ");

    switch (type) {
        case 1:
            scanf(" %c", &cValue);
            printf("Cube: %.2lf\n", calculateCube(&cValue, type));
            break;
        case 2:
            scanf("%d", &iValue);
            printf("Cube: %.2lf\n", calculateCube(&iValue, type));
            break;
        case 3:
            scanf("%ld", &lValue);
            printf("Cube: %.2lf\n", calculateCube(&lValue, type));
            break;
        case 4:
            scanf("%f", &fValue);
            printf("Cube: %.2lf\n", calculateCube(&fValue, type));
            break;
        case 5:
            scanf("%lf", &dValue);
            printf("Cube: %.2lf\n", calculateCube(&dValue, type));
            break;
        default:
            printf("Invalid type.\n");
            break;
    }

    return 0;
}