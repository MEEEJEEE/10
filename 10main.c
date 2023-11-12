#include <stdio.h>
#include <string.h>

//실습3
#include <stdio.h>


int main(void) {
    char src[] = "The worst things to eat before you sleep";
    char dst[100];

    // 문자열 복사 
    strcpy(dst, src);

    // 복사된 문자열 출력
    printf("copied string: %s\n", dst);

    return 0;
}
