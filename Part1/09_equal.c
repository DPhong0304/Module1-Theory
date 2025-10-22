#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 3){
        printf("Usage: ./equal <num1> <num2>\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("%-11d = ", num1);
    showbit(num1);
    printf("%-11d = ", num2);
    showbit(num2); 
    if (is_equal(num1, num2)){
        printf("num1 = num2\n");
    }
    else{
        printf("num1 != num2\n");
    }
    return 0;
}

