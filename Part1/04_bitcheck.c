#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 3){
        printf("Usage: ./bitcheck <num> <position>\n");
        return 1;
    }

    int num = atoi(argv[1]), num2;
    int pos = atoi(argv[2]);
    printf("%-11d = ", num);
    showbit(num);
    if (bit_check(num, pos)){
        printf("bit %d is on\n", pos);
    }
    else{
        printf("bit %d is off\n", pos);
    }
    return 0;
}
