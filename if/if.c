#include <stdio.h>

int main(void) {
    int apple = 8;
    if (apple) // 0以外ならtrue, 0ならfalse
    printf("りんごは8個ではない\n");
    apple = 10;
    if (apple == 10)
    printf("りんごの数は10個だ\n");
    apple = 8;
    if (apple != 10)
    printf("りんごの数は10個じゃない\n");

    //ブロック文でもいい
    printf("りんごの数は?\n");
    scanf("%d", &apple);
    if (10 <= apple && apple <= 100) {
        printf("りんごは10個から100個だ\n");
    }
    else if (apple < 10) {
        printf("りんごの数は10個以下だ\n");
    }
    else {
        printf("りんごの数は100個より多いな\n");
    }

    //switch文
    printf("1から3までの数字を入力しろ\n");
    int num;
    scanf("%d", &num);
    switch(num) {
        case 1:
            printf("ドラえもんだよ");
            break;
        case 2:
            printf("のび太だよ");
            break;
        case 3:
            printf("セワシだよ");
            break;
        default:
            printf("正しい番号を入力しろ");
            break;    
    }
}