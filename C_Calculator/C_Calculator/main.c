#include <stdio.h>

void add(double a, double b) {
    printf("���� ���: %.2f\n", a + b);
}

void subtract(double a, double b) {
    printf("���� ���: %.2f\n", a - b);
}

void multiply(double a, double b) {
    printf("���� ���: %.2f\n", a * b);
}

void divide(double a, double b) {
    if (b == 0) {
        printf("������ ����: 0���� ���� �� �����ϴ�.\n");
    }
    else {
        printf("������ ���: %.2f\n", a / b);
    }
}

int main() {
    double num1, num2;
    int choice;

    // ù ��° ���� �Է�
    printf("ù ��° ���ڸ� �Է��ϼ���: ");
    if (scanf_s("%lf", &num1) != 1) {
        printf("�߸��� �Է��Դϴ�.\n");
        return 1; // ������ �߻��ϸ� ���α׷� ����
    }

    // �� ��° ���� �Է�
    printf("�� ��° ���ڸ� �Է��ϼ���: ");
    if (scanf_s("%lf", &num2) != 1) {
        printf("�߸��� �Է��Դϴ�.\n");
        return 1; // ������ �߻��ϸ� ���α׷� ����
    }

    // ���� ����
    printf("\n����� ������ �����ϼ���:\n");
    printf("1. ����\n");
    printf("2. ����\n");
    printf("3. ����\n");
    printf("4. ������\n");
    printf("����: ");
    if (scanf_s("%d", &choice) != 1) {
        printf("�߸��� �Է��Դϴ�.\n");
        return 1; // ������ �߻��ϸ� ���α׷� ����
    }

    // ���õ� ���꿡 ���� ó��
    switch (choice) {
    case 1:
        add(num1, num2);
        break;
    case 2:
        subtract(num1, num2);
        break;
    case 3:
        multiply(num1, num2);
        break;
    case 4:
        divide(num1, num2);
        break;
    default:
        printf("�߸��� �����Դϴ�.\n");
        break;
    }

    return 0;
}
