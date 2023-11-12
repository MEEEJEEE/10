#include <stdio.h>
#include <string.h>

//실습6
//한 글자씩 읽어와서 출력
int main(void) {
    FILE *fp = NULL;
    char c;

    // 파일 열기
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없음\n");
        return 1;  // 오류 코드 반환
    }

    // 한 글자씩 읽어와서 출력
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    // 파일 닫기
    fclose(fp);

    return 0;
}
