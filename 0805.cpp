#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int main()
{
	int divisor = 1;
	int n = 10;
	for (int divisor = 1; divisor <= n; divisor++) {
		if (n % divisor == 0) {
			printf("%d ", divisor);
		}
	}
}*/
/*int main() {
    int m, n;
    double result = 1.0;

    printf("���� �� ���� m n ���·� �Է��Ͻÿ� : ");
    scanf_s("%d %d", &m, &n);

    for (int i = 0; i < n; i++) {
        result *= m;
    }

    printf("m^n = %.6f\n", result);

    return 0;
}*/
/*#include <stdio.h>
#include <math.h>

int main() {
    double num[5];
    double sum = 0.0, mean, variance = 0.0, stddev;

    printf("�ټ� �� �Ǽ����� num1 num2 num3 num4 num5 ���·� �Է��ϼ���: ");
    for (int i = 0; i < 5; i++) {
        scanf_s("%lf", &num[i]);
        sum += num[i];
    }

    mean = sum / 5;

    for (int i = 0; i < 5; i++) {
        variance += pow(num[i] - mean, 2);
    }

    variance /= 5;
    stddev = sqrt(variance);

    printf("ǥ������ = %.6lf\n", stddev);

    return 0;
}
*/
/*
int main() {
    int n = 1; // n�� 1�� �ʱ�ȭ

    // n^4�� 1000�� ���� ������ �ݺ�
    while ((n * n * n * n) <= 1000) {
        n++;
    }

    // ��� ���
    printf("n^4�� 1000�� �Ѵ� ���� ���� ���� n: %d\n", n);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int n = 1;
    while (1) {
        int n4 = n * n * n * n;
        if (n4 > 300) {
            break;
        }
        printf("n = %d, n^4 = %d\n", n, n4);
        n++;
    }
    return 0;
}*/
/*#include <stdio.h>

// �־��� �� �ڸ� �� n�� �� �ڸ� ���� ����Ͽ� ��ȯ�ϴ� �Լ�
#include <stdio.h>
#include <math.h>

int main() {
    int n, n1, n2, n3, n4;

    for (n = 1000; n <= 9999; n++) {
        n1 = n / 1000;        // õ ���� ��
        n2 = (n / 100) % 10;  // �� ���� ��
        n3 = (n / 10) % 10;   // �� ���� ��
        n4 = n % 10;          // �� ���� ��

        if (n == pow(n1, 4) + pow(n2, 4) + pow(n3, 3) + pow(n4, 3)) {
            printf("%d\n", n);
        }
    }

    return 0;
}*/
/*#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        int count = 0;
        int num = i;

        // �� �ڸ� ���ڸ� �˻��Ͽ� 3, 6, 9�� �ִ��� Ȯ��
        while (num > 0) {
            int digit = num % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                count++;
            }
            num /= 10;
        }

        // �ڼ��� �ľ� �� ��� "¦" ���
        if (count > 0) {
            printf("%d, ", i);
            for (int j = 0; j < count; j++) {
                printf("¦");
            }
            printf("\n");
        }
    }

    return 0;
}*/
/*#include <stdio.h>

int main() {
    double annualInterestRate = 0.035;
    double taxRate = 0.154;
    int months = 12;
    double monthlyDeposit = 200000;

    double totalInterest = 0;

    // �� ���� ���
    for (int i = 1; i <= months; i++) {
        totalInterest += monthlyDeposit * annualInterestRate * (months - i + 1) / 12;
    }

    double interestAfterTax = totalInterest * (1 - taxRate);
    double savingsRefund = monthlyDeposit * months + interestAfterTax;

    printf("�� ����: %.2f��\n", totalInterest);
    printf("���� ���� �� ����: %.2f��\n", interestAfterTax);
    printf("ȯ�� �ݾ�: %.2f��\n", savingsRefund);

    return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>

// �������� Ȯ���ϴ� �Լ�
bool is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

// �� ���� �ϼ��� ��ȯ�ϴ� �Լ� (switch �� ���)
int days_in_month(int year, int month) {
    switch (month) {
    case 1: return 31;
    case 2: return is_leap_year(year) ? 29 : 28;
    case 3: return 31;
    case 4: return 30;
    case 5: return 31;
    case 6: return 30;
    case 7: return 31;
    case 8: return 31;
    case 9: return 30;
    case 10: return 31;
    case 11: return 30;
    case 12: return 31;
    default: return 0; // ���� ó��
    }
}

// ���� ���� �ܿ� �ϼ��� ����ϴ� �Լ�
int remaining_days(int year, int month, int day) {
    int remaining = 0;
    for (int m = month; m <= 12; m++) {
        if (m == month) {
            remaining += days_in_month(year, m) - day;
        }
        else {
            remaining += days_in_month(year, m);
        }
    }
    return remaining;
}

int main() {
    int year, month, day;

    // ����� �Է�
    printf("��-��-���� �Է��ϼ��� (��: 2023-10-05): ");
    scanf_s("%d-%d-%d", &year, &month, &day);

    // ���� �ϼ� ��� �� ���
    int remaining = remaining_days(year, month, day);
    printf("%d���� ���� �ϼ��� %d�� �Դϴ�.\n", year, remaining);

    return 0;
}
*/
/*#include <stdio.h>

// �ݺ����� �̿��� ����
void printNumbersIterative(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// ���ȣ���� �̿��� ����
void printNumbersRecursive(int current, int n) {
    if (current > n) {
        printf("\n");
        return;
    }
    printf("%d ", current);
    printNumbersRecursive(current + 1, n);
}

int main() {
    int n;

    printf("�ڿ����� �Է��ϼ���: ");
    scanf("%d", &n);

    printf("�ݺ����� �̿��� ���: ");
    printNumbersIterative(n);

    printf("���ȣ���� �̿��� ���: ");
    printNumbersRecursive(1, n);

    return 0;
}
*/
/*#include <stdio.h>
#include <math.h> // ǥ�� pow() �Լ��� ����ϱ� ���� ����

double power(double x, unsigned y) {
    double result = 1.0;
    for (unsigned i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    double x = 2.0;
    unsigned y = 3;

    // �ݺ����� �̿��� power() �Լ� ȣ��
    double iterPower = power(x, y);

    // ǥ�� pow() �Լ� ȣ��
    double stdPower = pow(x, y);

    // ��� ��
    printf("Iterative power: %f\n", iterPower);
    printf("Standard pow: %f\n", stdPower);

    return 0;
}*/
/*#include <stdio.h>
#include <math.h> // ǥ�� pow() �Լ��� ����ϱ� ���� ����

double power(double x, unsigned y) {
    if (y == 0) {
        return 1.0;
    }
    return x * power(x, y - 1);
}

int main() {
    double x = 2.0;
    unsigned y = 3;

    // ��� ȣ���� �̿��� power() �Լ� ȣ��
    double recurPower = power(x, y);

    // ǥ�� pow() �Լ� ȣ��
    double stdPower = pow(x, y);

    // ��� ��
    printf("Recursive power: %f\n", recurPower);
    printf("Standard pow: %f\n", stdPower);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int n, i;
    printf("���� ���� : ");
    scanf("%d", &n);

    int max_sum = 0;
    int current_sum = 0;
    int num;

    for (i = 0; i < n; i++) {
        printf("����: ");
        scanf("%d", &num);

        if (current_sum > 0) {
            current_sum += num;
        }
        else {
            current_sum = num;
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("�ִ� �κ� ���� ��: %d\n", max_sum);
    return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>

// �Ҽ� ���θ� �Ǵ��ϴ� �Լ�
bool isPrime(int num) {
    if (num <= 1) return false; // 1 ������ ���ڴ� �Ҽ��� �ƴ�
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // ����� �����ϸ� �Ҽ��� �ƴ�
    }
    return true; // ����� ������ �Ҽ�
}

int main() {
    int n;
    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d", &n);

    bool first = true; // ù ��° �Ҽ����� ���θ� Ȯ���ϱ� ���� ����
    printf("�Ҽ�: ");
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            if (!first) {
                printf(", "); // ù ��° �Ҽ��� �ƴ� ��쿡�� ", " ���
            }
            printf("%d", i);
            first = false; // ù ��° �Ҽ��� �̹� ��������Ƿ� false�� ����
        }
    }
    printf("\n");
    return 0;
}*/
/*#include <stdio.h>

int main() {
    int number, sum = 0;

    // ����ڷκ��� ������ �Է¹޽��ϴ�.
    printf("������ �Է��ϼ���: ");
    scanf("%d", &number);

    // �Է¹��� ������ �� �ڸ����� ���մϴ�.
    while (number != 0) {
        sum += number % 10; // ������ �ڸ����� sum�� ���մϴ�.
        number /= 10;       // ������ �ڸ����� �����մϴ�.
    }

    // ���� ���� ����մϴ�.
    printf("�ڸ��� ��: %d\n", sum);

    return 0;
}*/
/*#include <stdio.h>

// �Ǻ���ġ ������ ����ϱ� ���� �Լ�
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N;
    printf("���� ���� N�� �Է��ϼ���: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("���� ������ �Է��ϼ���.\n");
        return 1;
    }

    int result = fibonacci(N);
    printf("�Ǻ���ġ ������ %d��° ���� %d�Դϴ�.\n", N, result);

    return 0;
}*/
/*#include <stdio.h>

// ���丮�� ��� �Լ�
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("���� ������ �Է��ϼ���.\\n");
        return 1;
    }

    printf("���丮��: %d\n", factorial(n));
    return 0;
}*/
/*#include <stdio.h>

// Ȧ�� �Լ� ����
void printOddNumbers(int start, int end) {
    int first = 1; // ù ��° Ȧ������ Ȯ���ϱ� ���� �÷��� ����
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            if (!first) {
                printf(", ");
            }
            printf("%d", i);
            first = 0; // ù ��° Ȧ�� ��� �� �÷��׸� 0���� ����
        }
    }
}

int main() {
    int num1, num2;

    // ����ڷκ��� �� ������ �Է¹޽��ϴ�.
    printf("�� ���ڸ� �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);

    // �� ���� ������ ��� Ȧ���� ����մϴ�.
    printf("Ȧ��: ");
    printOddNumbers(num1, num2);
    printf("\n");

    return 0;
}*/
/*#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    int result = (int)sqrt(num);
    printf("������: %d\n", result);

    return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false; // 1 ���ϴ� �Ҽ��� �ƴ�
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d�� �Ҽ��Դϴ�.\n", number);
    }
    else {
        printf("%d�� �Ҽ��� �ƴմϴ�.\n", number);
    }

    return 0;
}*/
/*#include <stdio.h>

int isperfectnumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int number;
    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &number);

    if (isperfectnumber(number)) {
        printf("%d�� �������Դϴ�.\n", number);
    }
    else {
        printf("%d�� �������� �ƴմϴ�.\n", number);
    }

    return 0;
}*/














