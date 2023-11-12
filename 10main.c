#include <stdio.h>
#include <string.h>

//실습5

int main(void) {
    // 파일 포인터 정의
    FILE *filePointer;

    // 파일 열기
    filePointer = fopen("sample.txt", "w");

    // 파일 열기에 실패한 경우
    if (filePointer == NULL) {
        printf("Cannot open the file.\n");
        return 1;  // 프로그램 종료, 오류 코드 반환
    }

    // 3개의 단어 입력 받아 파일에 쓰기
    for (int i = 0; i < 3; i++) {
        char word[50];
        printf("Input a word: ");
        scanf("%s", word);

        // 파일에 내용 쓰기
        fprintf(filePointer, "%s\n", word);
    }

    // 파일 닫기
    fclose(filePointer);

    printf("Successfully wrote content to the file.\n");

    return 0;
}
