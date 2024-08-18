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

    printf("정수 두 개를 m n 형태로 입력하시오 : ");
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

    printf("다섯 개 실수값을 num1 num2 num3 num4 num5 형태로 입력하세요: ");
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

    printf("표준편차 = %.6lf\n", stddev);

    return 0;
}
*/
/*
int main() {
    int n = 1; // n을 1로 초기화

    // n^4이 1000을 넘을 때까지 반복
    while ((n * n * n * n) <= 1000) {
        n++;
    }

    // 결과 출력
    printf("n^4이 1000을 넘는 가장 작은 정수 n: %d\n", n);

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

// 주어진 네 자리 수 n의 각 자리 수를 계산하여 반환하는 함수
#include <stdio.h>
#include <math.h>

int main() {
    int n, n1, n2, n3, n4;

    for (n = 1000; n <= 9999; n++) {
        n1 = n / 1000;        // 천 단위 수
        n2 = (n / 100) % 10;  // 백 단위 수
        n3 = (n / 10) % 10;   // 십 단위 수
        n4 = n % 10;          // 일 단위 수

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

        // 각 자리 숫자를 검사하여 3, 6, 9가 있는지 확인
        while (num > 0) {
            int digit = num % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                count++;
            }
            num /= 10;
        }

        // 박수를 쳐야 할 경우 "짝" 출력
        if (count > 0) {
            printf("%d, ", i);
            for (int j = 0; j < count; j++) {
                printf("짝");
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

    // 총 이자 계산
    for (int i = 1; i <= months; i++) {
        totalInterest += monthlyDeposit * annualInterestRate * (months - i + 1) / 12;
    }

    double interestAfterTax = totalInterest * (1 - taxRate);
    double savingsRefund = monthlyDeposit * months + interestAfterTax;

    printf("총 이자: %.2f원\n", totalInterest);
    printf("세금 공제 후 이자: %.2f원\n", interestAfterTax);
    printf("환급 금액: %.2f원\n", savingsRefund);

    return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>

// 윤년인지 확인하는 함수
bool is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

// 각 월의 일수를 반환하는 함수 (switch 문 사용)
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
    default: return 0; // 오류 처리
    }
}

// 같은 년의 잔여 일수를 계산하는 함수
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

    // 사용자 입력
    printf("년-월-일을 입력하세요 (예: 2023-10-05): ");
    scanf_s("%d-%d-%d", &year, &month, &day);

    // 남은 일수 계산 및 출력
    int remaining = remaining_days(year, month, day);
    printf("%d년의 남은 일수는 %d일 입니다.\n", year, remaining);

    return 0;
}
*/
/*#include <stdio.h>

// 반복문을 이용한 구현
void printNumbersIterative(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// 재귀호출을 이용한 구현
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

    printf("자연수를 입력하세요: ");
    scanf("%d", &n);

    printf("반복문을 이용한 출력: ");
    printNumbersIterative(n);

    printf("재귀호출을 이용한 출력: ");
    printNumbersRecursive(1, n);

    return 0;
}
*/
/*#include <stdio.h>
#include <math.h> // 표준 pow() 함수를 사용하기 위해 포함

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

    // 반복문을 이용한 power() 함수 호출
    double iterPower = power(x, y);

    // 표준 pow() 함수 호출
    double stdPower = pow(x, y);

    // 결과 비교
    printf("Iterative power: %f\n", iterPower);
    printf("Standard pow: %f\n", stdPower);

    return 0;
}*/
/*#include <stdio.h>
#include <math.h> // 표준 pow() 함수를 사용하기 위해 포함

double power(double x, unsigned y) {
    if (y == 0) {
        return 1.0;
    }
    return x * power(x, y - 1);
}

int main() {
    double x = 2.0;
    unsigned y = 3;

    // 재귀 호출을 이용한 power() 함수 호출
    double recurPower = power(x, y);

    // 표준 pow() 함수 호출
    double stdPower = pow(x, y);

    // 결과 비교
    printf("Recursive power: %f\n", recurPower);
    printf("Standard pow: %f\n", stdPower);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int n, i;
    printf("숫자 개수 : ");
    scanf("%d", &n);

    int max_sum = 0;
    int current_sum = 0;
    int num;

    for (i = 0; i < n; i++) {
        printf("숫자: ");
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

    printf("최대 부분 숫자 합: %d\n", max_sum);
    return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>

// 소수 여부를 판단하는 함수
bool isPrime(int num) {
    if (num <= 1) return false; // 1 이하의 숫자는 소수가 아님
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // 약수가 존재하면 소수가 아님
    }
    return true; // 약수가 없으면 소수
}

int main() {
    int n;
    printf("숫자를 입력하세요: ");
    scanf("%d", &n);

    bool first = true; // 첫 번째 소수인지 여부를 확인하기 위한 변수
    printf("소수: ");
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            if (!first) {
                printf(", "); // 첫 번째 소수가 아닌 경우에만 ", " 출력
            }
            printf("%d", i);
            first = false; // 첫 번째 소수를 이미 출력했으므로 false로 설정
        }
    }
    printf("\n");
    return 0;
}*/
/*#include <stdio.h>

int main() {
    int number, sum = 0;

    // 사용자로부터 정수를 입력받습니다.
    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    // 입력받은 정수의 각 자리수를 더합니다.
    while (number != 0) {
        sum += number % 10; // 마지막 자리수를 sum에 더합니다.
        number /= 10;       // 마지막 자리수를 제거합니다.
    }

    // 계산된 합을 출력합니다.
    printf("자리수 합: %d\n", sum);

    return 0;
}*/
/*#include <stdio.h>

// 피보나치 수열을 계산하기 위한 함수
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N;
    printf("양의 정수 N을 입력하세요: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("양의 정수를 입력하세요.\n");
        return 1;
    }

    int result = fibonacci(N);
    printf("피보나치 수열의 %d번째 값은 %d입니다.\n", N, result);

    return 0;
}*/
/*#include <stdio.h>

// 팩토리얼 계산 함수
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("양의 정수를 입력하세요.\\n");
        return 1;
    }

    printf("팩토리얼: %d\n", factorial(n));
    return 0;
}*/
/*#include <stdio.h>

// 홀수 함수 구현
void printOddNumbers(int start, int end) {
    int first = 1; // 첫 번째 홀수인지 확인하기 위한 플래그 변수
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            if (!first) {
                printf(", ");
            }
            printf("%d", i);
            first = 0; // 첫 번째 홀수 출력 후 플래그를 0으로 설정
        }
    }
}

int main() {
    int num1, num2;

    // 사용자로부터 두 정수를 입력받습니다.
    printf("두 숫자를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    // 두 숫자 사이의 모든 홀수를 출력합니다.
    printf("홀수: ");
    printOddNumbers(num1, num2);
    printf("\n");

    return 0;
}*/
/*#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    int result = (int)sqrt(num);
    printf("제곱근: %d\n", result);

    return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false; // 1 이하는 소수가 아님
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    printf("양의 정수를 입력하세요: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d는 소수입니다.\n", number);
    }
    else {
        printf("%d는 소수가 아닙니다.\n", number);
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
    printf("양의 정수를 입력하세요: ");
    scanf("%d", &number);

    if (isperfectnumber(number)) {
        printf("%d는 완전수입니다.\n", number);
    }
    else {
        printf("%d는 완전수가 아닙니다.\n", number);
    }

    return 0;
}*/














