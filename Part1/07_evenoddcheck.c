#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 2){
        printf("Usage: ./evenodd <num>\n");
        return 1;
    }

    int num = atoi(argv[1]), num2;
    printf("%-11d = ", num);
    showbit(num);
    if (is_even(num)){
        printf("%d is even number\n", num);
    }
    else{
        printf("%d is odd number\n", num);
    }
    return 0;
}
