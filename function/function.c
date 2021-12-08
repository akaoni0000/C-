#include <stdio.h>

//C言語はmain関数で始まりmain関数のreturn０で終わる それより下は読み込まれない

//プロトタイプ宣言
int hello();
int calculation(int num);
int main() {
    hello();
    int number = calculation(10);
    printf("%dです", number);
    return 0;
}

//関数の作り方
//メモリを確保する
//名前を決める
//引数ありかなしか決める
//処理内容を書く

// ()の中にvoidを書かなくても大丈夫だった
int hello() {
    printf("こんにちは\n");
    return 0;
}

int calculation(int num) {
    int result = num*100;
    return result;
}