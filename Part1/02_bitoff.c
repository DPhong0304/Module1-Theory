#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 3){
        printf("Usage: ./bitoff <num> <position>\n");
        return 1;
    }

    int num = atoi(argv[1]), num2;
    int pos = atoi(argv[2]);
    printf("%-11d = ", num);
    showbit(num);
    num2 = bit_off(num, pos);
    printf("%-11d = ", num2);
    showbit(num2);
    return 0;
}

