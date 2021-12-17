#include <stdio.h>

int keisan(int x, int y, int *aaa, int *bbb);

int main() {
    int *apple, orange; //ポインタ変数は*をつける
    apple = &orange; //&演算子がつくとそれがついた変数のアドレスを求める
    printf("%p\n", &orange); //%pは変換指定子
    printf("%p\n", apple);

    int *p, i; //pはポインタでiは変数
    p = &i;
    *p = 15; //通常変数モード 変数を入れる pにもiにも15が入る
    printf("%d\n", *p);
    printf("%d\n", i);

    i = 20;
    printf("%d\n", *p);
    printf("%d\n", i);

    int f;
    int *d = &f;    //*は最初にポインタ宣言するときに使う それか通常変数モード
    f = 30;
    printf("%d\n", *d);
    printf("%d\n", f);

    int tasizan;
    int hikizan;
    keisan(60, 30, &tasizan, &hikizan);
    printf("%d\n", tasizan);
    printf("%d\n", hikizan);



    return 0;
}

//引数を二つ渡す方法 最後にreturnをつけないと警告がでた
int keisan(int x, int y, int *aaa, int *bbb) {
    *aaa = x+y;
    *bbb = x-y;
    return 0;
}