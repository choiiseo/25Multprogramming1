#include<stdio.h>

int main() {
    int a = 5, b = 10;

    // ���� �׽�Ʈ
    int sum = a + b;
    printf("a + b = %d\n", sum);

    // if�� �׽�Ʈ
    if (a < b) {
        printf("a�� b���� �۽��ϴ�.\n");
    }
    else {
        printf("a�� b���� ũ�ų� �����ϴ�.\n");
    }

    // while�� �׽�Ʈ
    int i = 0;
    while (i < 3) {
        printf("i = %d\n", i);
        i++;
    }

    return 0;
}
