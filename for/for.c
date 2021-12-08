#include <stdio.h>

int main (void){
    int i;
    for (i=1; i <= 10; i++) {
        printf("%d回目\n", i);
    }
    
    //100万円の元を年利5%で運用したら何年後に1億円超える?
    int year = 1;
    int money =  1000000;
    while (money<100000000) {
        money *= 1.05;
        year ++;
    }
    printf("%d年後に%d円になる", year, money);
}