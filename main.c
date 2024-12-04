#include <stdio.h>

void add(double a, double b) {
    printf("덧셈 결과: %.2f\n", a + b);
}

void subtract(double a, double b) {
    printf("뺄셈 결과: %.2f\n", a - b);
}

int main() {
    double num1, num2;
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%lf", &num1);
    
    printf("두 번째 숫자를 입력하세요: ");
    scanf("%lf", &num2);

    add(num1, num2);
    subtract(num1, num2);
    return 0;
}

