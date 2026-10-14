#include <stdio.h>

int main(void)
{
    signed char d;

    printf("整数=");
    if (scanf("%hhd", &d) != 1) {
        printf("整数を入力してください\n");
        return 1;
    }

    if (d == 0) {
        printf("0です\n");      /* ② 0は正でも負でもない */
    } else if ((d & 0b10000000) == 0) {
        printf("正の数です\n"); /* ① 127もこちら */
    } else {
        printf("負の数です\n"); /* ① -128もこちら */
    }

    /* ③ 0b00000001で最下位ビットを調べると偶奇が判定できる */
    if ((d & 0b00000001) == 0) {
        printf("偶数です\n");
    } else {
        printf("奇数です\n");
    }
    return 0;
}
