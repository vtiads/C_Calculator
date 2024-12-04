#include <stdio.h>

void add(double a, double b) {
    printf("덧셈 결과: %.2f\n", a + b);
}

void subtract(double a, double b) {
    printf("뺄셈 결과: %.2f\n", a - b);
}

void multiply(double a, double b) {
    printf("곱셈 결과: %.2f\n", a * b);
}

void divide(double a, double b) {
    if (b == 0) {
        printf("나누기 오류: 0으로 나눌 수 없습니다.\n");
    }
    else {
        printf("나눗셈 결과: %.2f\n", a / b);
    }
}

int main() {
    double num1, num2;
    int choice;

    // 첫 번째 숫자 입력
    printf("첫 번째 숫자를 입력하세요: ");
    if (scanf("%lf", &num1) != 1) {
        printf("잘못된 입력입니다.\n");
        return 1; // 오류가 발생하면 프로그램 종료
    }



