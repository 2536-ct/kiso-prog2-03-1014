#include <stdio.h>

int main(void)
{
    int num = 0b00000011;
    printf("%d\n", num);           /* 確認：3 */

    num = 0b00001010;
    printf("%d\n", num);           /* ① 10 */

    /* ② 出席番号が不明なので10番を例にする。実際の番号に書き換え可能 */
    int attendance_number = 0b00001010;
    printf("%d\n", attendance_number);
    return 0;
}
