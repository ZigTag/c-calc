#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char symbol;
    double num1 = 0;
    double num2 = 0;
    
    if (argc == 1) {
        printf("Welcome to Falcon's C Calculator!\nPlease enter a operator: ");
        
        scanf("%c", &symbol);

        if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
            printf("Please enter a number: ");
            scanf("%lf", &num1);
            printf("Please enter a second number: ");
            scanf("%lf", &num2);
        }
    } else if (argc < 4) {
        printf("You are missing a number/symbol\n");
        return 1;
    } else if (argc == 4) {
        num1 = strtod(argv[1], NULL);
        symbol = argv[2][0];
        num2 = strtod(argv[3], NULL);
    } else {
        printf("You have inputted too many fields\n");
        return 1;
    }
    
    switch (symbol) {
    case '+':
        printf("%f %c %f = %f\n", num1, symbol, num2, num1 + num2);
        break;
    case '-':
        printf("%f %c %f = %f\n", num1, symbol, num2, num1 - num2);
        break;
    case '*':
        printf("%f %c %f = %f\n", num1, symbol, num2, num1 * num2);
        break;
    case '/':
        printf("%f %c %f = %f\n", num1, symbol, num2, num1 / num2);
        break;
    
    default:
        printf("The following operators are availible:\n+\n-\n*\n/\n");
        break;
    }
    return 0;
}
