#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 2){
        printf("Usage: ./LSB <num>\n");
        return 1;
    }

    int num = atoi(argv[1]), num2;
    printf("%-11d = ", num);
    showbit(num);
    num2 = LSB(num);
    printf("LSB:%-7d = ", num2);
    showbit(num2);
    return 0;
}
