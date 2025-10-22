#ifndef PHONG_H
#define PHONG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showbit(int num);
int bit_on(int num, int pos);
int bit_off(int num, int pos);
int flip(int num, int pos);
int bit_check(int num, int pos);
void swap(int* num1, int* num2);
int power2_check(int num);
int count1(int num);
int is_even(int num);
int twoscomplement(int num);
int is_equal(int num1, int num2);
int MSB(int num);
int LSB(int num);
int LSBoff(int num);
int is_multiple_of_8(int num);

#endif
