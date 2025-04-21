#include<stdio.h>

int main() {
    int a = 5, b = 10;

    // 덧셈 테스트
    int sum = a + b;
    printf("a + b = %d\n", sum);

    // if문 테스트
    if (a < b) {
        printf("a는 b보다 작습니다.\n");
    }
    else {
        printf("a는 b보다 크거나 같습니다.\n");
    }

    // while문 테스트
    int i = 0;
    while (i < 3) {
        printf("i = %d\n", i);
        i++;
    }

    return 0;
}
