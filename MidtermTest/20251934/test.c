#include <stdio.h>

int main() {
    printf("\033[40m"); // 배경: 검정

    // 별 + 산
    printf("\033[37m");
    printf("             *       *       *       *\n");
    printf("            /\\              /\\        /\\\n");
    printf("           /  \\     *      /  \\      /  \\\n");
    printf("          /_/\\_\\          /_/\\_\\    /_/\\_\\\n");

    // 지붕 (빨강)
    printf("\033[41m");
    printf("               _________\n");
    printf("              /        /\\\n");
    printf("             /        /  \\\n");
    printf("            /________/___\\\n");

    // 굴뚝 연기 (밝은 흰색)
    printf("\033[97m");
    printf("                  (  )\n");
    printf("                   ) (\n");
    printf("                  (  )\n");

    // 집 본체 (노랑)
    printf("\033[43m");
    printf("           |  ___   ___  |\n");
    printf("           | |   | |   | |\n");
    printf("           | |___| |___| |\n");
    printf("           |  ___   ___  |\n");
    printf("           | |   | |   | |\n");
    printf("           | |___| |___| |\n");

    // 창문 + 응원 메시지 (배경 파랑 + 텍스트 밝은 노랑)
    printf("\033[44m\033[93m");
    printf("          당신 잘하고 있어!\n");
    printf("           [ ]      [ ]\n");

    printf("\033[0m"); // 스타일 초기화
    return 0;
}

