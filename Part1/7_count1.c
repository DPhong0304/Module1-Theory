#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 2){
        printf("Usage: ./count1 <num>\n");
        return 1;
    }

    int num = atoi(argv[1]), num2;
    printf("%-11d = ", num);
    showbit(num);
    printf("%d has %d bit 1\n", num, count1(num));
    return 0;
}

