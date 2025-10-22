#include "phong.h"

int main(int argc, char* argv[]){
    if (argc < 2){
        printf("Usage: ./twoscomplement <num>\n");
        return 1;
    }

    int num = atoi(argv[1]);
    int num2 = twoscomplement(num);
    printf("%-11d = ", num);
    showbit(num);
    printf("%-11d = ", num2);
    showbit(num2);  
    return 0;
}

