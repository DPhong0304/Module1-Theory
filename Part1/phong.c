#include "phong.h"

int bit_on(int num, int pos){
    return (num | (1 << pos));
}

int bit_off(int num, int pos){
    return (num & ~(1 << pos));
}

void showbit(int num){
    int loop = sizeof(num) * 8;
    for (int i = loop - 1; i >= 0; i--){
        printf("%d", (num >> i) & 1); 
        if (i % 8 == 0){
            printf(" ");
        }
    }
    printf("\n");
}

int flip(int num, int pos){
    return num^(1 << pos);
}

int bit_check(int num, int pos){
    return (num >> pos) & 1;
}

void swap(int* num1, int* num2){
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
}

int power2_check(int num){
    return (num & (num - 1)) == 0;
}

int count1(int num){
    int count = 0;
    while (num > 0){
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int is_even(int num){
    return (num & 1) == 0;
}

int twoscomplement(int num){
    return (~num) + 1;
}

int is_equal(int num1, int num2){
    return (num1 & (~num2)) == 0;
}

int MSB(int num){
    int pos = 0;
    while (num > 0){
        num >>= 1;
        pos += 1;
    }
    return pos - 1;
}

int LSB(int num){
    return num & (-num);
}

int LSBoff(int num){
    return num & (num - 1);
}

int is_multiple_of_8(int num){
    return (num & 7) == 0;
}
