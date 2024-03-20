#include <stdio.h>

int main() {
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("----- [강수빈]  [2023078011] -----\n\n");

    // 변수를 정의하는 데이터 타입에 따른 변수 크기의 차이(char=1byte, int=4byte, float=4byte, double=8byte)

    printf("Size of char: %ld byte \n", sizeof(charType));  //charType이라는 char 데이터타입
    printf("size of int: %ld bytes\n", sizeof(integerType));
    printf("size of float: %ld bytes\n", sizeof(floatType));
    printf("size of double: %ld bytes\n", sizeof(doubleType));

    printf("--------------------------------------------------------\n");

    //데이터 타입들의 크기 차이(char=1byte, int=4byte, float=4byte, double=8byte)

    printf("Size of char: %ld byte \n", sizeof(char));
    printf("size of int: %ld bytes\n", sizeof(int));
    printf("size of float: %ld bytes\n", sizeof(float));
    printf("size of double: %ld bytes\n", sizeof(double)); 

    printf("--------------------------------------------------------\n");

    // 포인터 변수의 크기는 모두 4byte로 나온다. 이는 32byte 머신이기에 그렇고 만약 64byte머신이라면 포인터 변수의 크기는 8byte일 것이다.

    printf("Size of char*: %ld bytes \n", sizeof(char*));
    printf("size of int*: %ld bytes\n", sizeof(int*));
    printf("size of float*: %ld bytes\n", sizeof(float*));
    printf("size of double*: %ld bytes\n", sizeof(double*));

    return 0;
}