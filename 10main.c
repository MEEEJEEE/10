#include <stdio.h>
#include <string.h>

//실습4

int main(void) {
    char str[30] = "happy C programming";

    // 문자열 길이 계산
    int length = strlen(str);

    printf("문자열 \"%s\"의 길이: %i\n", str, length);

    return 0;
}
