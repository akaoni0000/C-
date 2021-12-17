#include <stdio.h>  //stdio.hはライブラリ そのライブラリを含むという意味

int main(void) {
    printf("hello world こんにちは世界 \nはじめまして"); // \nは改行
    printf("21\n"); // ""は文字列 数値を扱うにはどうすればいいのか

    //整数の変換指定子は%d
    printf("%d\n", 21);
    printf("%d円\n", 100);
    printf("%d\n", 10+3);
    printf("%d\n", 10-3);
    printf("%d\n", 10*3);
    printf("%d\n", 10/3);
    printf("%d\n\n", 10%3);

    //小数の変換指定子は%f
    printf("小数の計算\n");
    printf("%f\n", 3.14);
    printf("%f\n\n", 3.14*3.14);

    //intは4バイト分使う shortは2バイト分 charは1バイト doubleは8バイト
    printf("変数\n");
    int apple = 100;
    printf("%d\n", apple);
    apple ++;
    printf("%d\n", apple);
    apple --;
    apple --;
    printf("%d\n", apple);
    apple += 30;
    printf("%d\n\n", apple);

    //キャスト変換 小数を整数にする
    printf("キャスト変換\n");
    printf("%d\n", (int) 3.14);
    printf("%d\n\n", (int) (3.14*3.14));

    //scanf関数
    printf("キーボードに入力しなさい\n");
    int num;
    scanf("%d", &num); //&がなくてもできた
    printf("%d\n", num*10); //numに文字列が入っているときは0を返した

    printf("キーボードに入力しなさい\n");
    double num2;
    scanf("%lf", &num2);
    printf("%lf\n", num2*10); //numに文字列が入っているときは0を返した

    return 0;
}