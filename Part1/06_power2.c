#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 2){
        printf("Usage: ./power2 <num>\n");
        return 1;
    }

    int num = atoi(argv[1]), num2;
    printf("%-11d = ", num);
    showbit(num);
    if (power2_check(num)){
        printf("%d is a power of 2\n", num);
    }
    else{
        printf("%d is not a power of 2\n", num);
    }
    return 0;
}
