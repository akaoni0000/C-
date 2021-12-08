#include <stdio.h>
#include <stdlib.h> //atoi関数
#include <string.h> //strcpy関数 strcat関数 sprintf関数 

int main(void) {
    char a = 'A'; //ここはシングルクオーテーションでないとエラーになった 一文字しかだめ
    printf("%c\n", a);

    //配列を文字列で扱うときは配列の要素数は文字数+1と設定する 最後に終端文字\0が入るから
    char array[5] = {'J', 'O', 'H', 'O', 'N'}; 
    printf("%s\n", array);
    // 終端文字を入れないでもできた

    char array2[5] = {'J', 'O', 'H', 'N', '\0'};
    printf("%s\n", array2);


    char array3[] = "JOHN";
    printf("%s\n", array3);
    // char array2[] = {3,4,5};
    // printf("%s", array2);     これは無理

    //atoi関数 文字列を数値にする
    char suuti[] = "123";
    int num = atoi(suuti);
    printf("%d\n", num*2);

    //strcpy関数 文字列をコピーする 
    char str[30];  //要素数を指定しないとエラーになった
    strcpy(str, "MIKE");
    printf("%s\n", str);     

    //strcat関数 引数の先頭の配列に後ろの配列を入れる
    char str1[10] = "Star";  //str1にstr2が入るのでここのメモリを多くしておかないとエラーになる
    char str2[] = "Wars";
    strcat(str1, str2);
    printf("%s\n", str1);

    //sprintf関数 変数 配列を合成できる
    char str10[20];
    char str11[] = "Star";
    char str12[] = "Wars";
    int i = 3;
    sprintf(str10, "%s%s%d", str11, str12, i); //strに全てが入る
    printf("%s\n", str10);


    //strlen関数
    char str100[333];
    printf("何か入力しろ\n");
    scanf("%s", str100);
    int number;
    number = strlen(str100);  //日本語の文字列の長さは数えられない 数値と英語のみ
    printf("%d文字だ", number);

     




    return 0;
}