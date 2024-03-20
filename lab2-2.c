#include <stdio.h>

int main(){
    int i;
    int *ptr;
    int **dptr;

    printf("----- [강수빈]  [2023078011] -----\n\n");

    i = 1234;

    // ptr이 변수 i를 가리키지 않을 때의 값들 확인

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); //변수 i에 들어있는 값
    printf("address of i == %p\n", &i); // 변수 i의 주소
    printf("value of ptr == %p\n", ptr); // 포인터인 ptr가 가리키는 곳(i)의 주소
    printf("address of ptr == %p\n", &ptr); //포인터 ptr의 주소

// ptr이 i를 가리킬때의 값들 확인
    ptr = &i; /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n"); 
    printf("value of i == %d\n", i); // 변수 i에 들어있는 값
    printf("address of i == %p\n", &i); // 변수 i의 주소
    printf("value of ptr == %p\n", ptr); // 포인터 ptr이 가리키는 곳(i)의 주소
    printf("address of ptr == %p\n", &ptr); // 포인터 ptr의 주소
    printf("value of *ptr == %d\n", *ptr); // 포인터 ptr이 가리키는 곳의 값

// dptr이 ptr을 가리키게 한 다음 ptr과 dptr을 이용해 값 확인
    dptr = &ptr;    /*dptr is now holding the adress of ptr */

    printf("\n[checking values after dptr = &ptr] \n"); 
    printf("value of i == %d\n", i); // 변수 i에 들어있는 값
    printf("address of i == %p\n", &i); //변수 i의 주소
    printf("value of ptr == %p\n", ptr); // 포인터 ptr이 가리키는 곳(i)의 주소
    printf("address of ptr == %p\n", &ptr); // 포인터 ptr의 주소
    printf("value of *ptr == %d\n", *ptr); // 포인터 ptr이 가리키는 곳의 값
    printf("value of dptr == %p\n", dptr); // 포인터 dptr이 가리키는 곳(ptr)의 주소
    printf("address of dptr == %p\n", &dptr); // 포인터 dptr의 주소
    printf("value of *dptr == %p\n", *dptr);  // 포인터 dptr이 가리키는 곳(ptr)의 값 = i의 주소
    printf("value of **dptr == %d\n", **dptr); // 포인터 dptr이 가리키는 곳의 값


 // ptr을 이용해서 변수 i에 들어있는 값을 바꾼다음 dptr과 ptr로 접근해서 값을 확인해본다

    *ptr = 7777;/* changing the value of *ptr */


    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); 
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr **dptr == %d\n", **dptr);


 // dptr을 이용해서 변수 i에 들어있는 값을 바꾼다음 dptr과 ptr로 접근해서 값을 확인해본다

    **dptr = 8888;/* changing the value of **dptr */ 

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); 
    printf("value of *ptr == %d\n", *ptr); 
    printf("value of **dptr == %d\n", **dptr);

    return 0;
}