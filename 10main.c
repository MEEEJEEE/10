#include <stdio.h>
#include <string.h>

//실습6
//한 단어씩 읽어와서 출력
int main(void) {
    FILE *fp = NULL;
    char word[50];

    // 파일 열기
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없음\n");
        return 1;  // 오류 코드 반환
    }

    // 한 단어씩 읽어와서 출력
    while (fgets(word, sizeof(word), fp) != NULL) {
        printf("%s", word);
    }

    // 파일 닫기
    fclose(fp);

    return 0;
}
