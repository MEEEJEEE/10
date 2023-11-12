#include <stdio.h>

//실습2
//문자열을 초기화하고, 그후에 문자열을 반벅하여 하나씩 출력 
int main(void) {
    int i = 0;
    char str[4];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';
    
    printf("%s\n", str);

    // 현재 문자 (str[i])이 맨 끝이 아닐 때까지 반복
    while (str[i] != '\0') {
        // 현재 문자 하나 출력
        printf("%c", str[i]);
        
        // i를 1 증가
        i++;
    }

    // 반복이 끝나면 줄 바꿈
    printf("\n");

    return 0;
}
