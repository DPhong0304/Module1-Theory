#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 2){
        printf("Usage: ./MSB <num>\n");
        return 1;
    }

    int num = atoi(argv[1]), num2;
    printf("%-11d = ", num);
    showbit(num);
    printf("MSB at bit %d\n", MSB(num));
    return 0;
}
