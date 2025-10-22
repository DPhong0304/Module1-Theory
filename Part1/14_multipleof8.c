#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 2){
        printf("Usage: ./evenodd <num>\n");
        return 1;
    }

    int num = atoi(argv[1]), num2;
    printf("%-11d = ", num);
    showbit(num);
    printf("%-11d = ", 7);
    showbit(7);
    if (is_multiple_of_8(num)){
        printf("%d is a multiple of 8\n", num);
    }
    else{
        printf("%d is not a multiple of 8\n", num);
    }
    return 0;
}
