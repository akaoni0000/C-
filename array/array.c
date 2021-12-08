#include <stdio.h>


int main(void) {
    int array [10];  //要素数は10個
    array[3] = 5;
    printf("%dです\n", array[9]);  //10個目の配列はないので最大は9 何も入っていない要素は0になる 
    printf("%dです\n", array[3]);
    
    int array2[5] = {1,2,3};
    printf("%d\n", array2[0]);
    printf("%d\n", array2[1]);
    printf("%d\n", array2[2]);
    printf("%d\n", array2[3]);
    printf("%d\n", array2[4]);

    int array3[] = {1,2,3};
    printf("%d\n", array3[0]);
    printf("%d\n", array3[1]);
    printf("%d\n", array3[2]);

    int array4[] = {1,2,3,4};
    for (int i = 0; i<=3; i++) {
        printf("%d回目\n", array4[i]);
    }

    int array5[] = {1,2,3,4,5,6,7,8,9};
    for (int num = 0; num<sizeof(array5)/sizeof(array[0]); num++) {
        printf("%d回目だぞ\n", array5[num]);
    }

    return 0;


}