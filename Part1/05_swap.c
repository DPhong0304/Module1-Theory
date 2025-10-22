#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 3){
        printf("Usage: ./swap <num1> <num2>\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("a = %-11d = ", num1);
    showbit(num1);
    printf("b = %-11d = ", num2);
    showbit(num2);
    printf("Swap a and b ...\n");
    swap(&num1, &num2);
    printf("a = %-11d = ", num1);
    showbit(num1);
    printf("b = %-11d = ", num2);
    showbit(num2);
    return 0;
}

