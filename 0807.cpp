#define _CRT_SECURE_NO_WARNINGS

/*#include <stdio.h>

int main() {
    int a, b;
    int* ptrA, * ptrB;
    int sum, diff;

    // 사용자로부터 두 정수를 입력 받음
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    // 입력 받은 두 정수의 주소를 각각 두 포인터 변수에 저장
    ptrA = &a;
    ptrB = &b;

    // 포인터를 사용하여 두 수의 합과 차를 계산
    sum = *ptrA + *ptrB;
    diff = *ptrA - *ptrB;

    // 계산된 합과 차를 출력
    printf("합: %d\n", sum);
    printf("차: %d\n", diff);

    return 0;
}*/
/*#include <stdio.h>

// swap 함수 구현
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &x, &y);

    // 포인터 변수에 주소 저장
    int* ptrX = &x;
    int* ptrY = &y;

    // 스왑 함수 호출
    swap(ptrX, ptrY);

    printf("첫 번째 수: %d, 두 번째 수: %d\n", x, y);

    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h> // abs() 함수를 사용하기 위해 필요

int main() {
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    // 포인터 변수에 주소 저장
    int* ptrNum = &num;

    // 절댓값 계산
    int absValue = abs(*ptrNum);

    printf("절댓값: %d\n", absValue);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    float num1, num2;
    printf("두 실수를 입력하세요: ");
    scanf("%f %f", &num1, &num2);

    // 포인터 변수에 주소 저장
    float* ptrNum1 = &num1;
    float* ptrNum2 = &num2;

    // 포인터를 사용하여 두 실수의 곱을 계산
    float result = (*ptrNum1) * (*ptrNum2);

    // 결과 출력
    printf("곱: %.1f\n", result);

    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char* ptr;

    // 사용자로부터 문자열 입력 받기
    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);

    // 개행 문자 제거
    str[strcspn(str, "\\n")] = '\\0';

    // 포인터 변수에 문자열의 주소 저장
    ptr = str;

    // strlen() 함수를 사용하여 문자열의 길이 계산
    int length = strlen(ptr);

    // 문자열의 길이 출력
    printf("입력한 문자열의 길이는 %d입니다.\n", length);

    return 0;
}*/
/*#include <stdio.h>
#include <math.h>

int main() {
    float x, y, average;
    printf("두 실수를 입력하세요: ");
    scanf("%f %f", &x, &y);

    // 포인터 변수에 주소 저장
    float* ptrX = &x;
    float* ptrY = &y;

    // 포인터를 사용하여 평균 계산
    average = (*ptrX + *ptrY) / 2.0;

    // 평균을 소수 첫째 자리까지 반올림
    average = roundf(average * 10) / 10;

    printf("평균: %.1f\n", average);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    int* ptrN = &n;

    printf("%d의 약수: ", *ptrN);
    for (int i = 1; i <= *ptrN; i++) {
        if (*ptrN % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int arr[10];
    int n;

    printf("배열의 길이를 입력하세요 (최대 10): ");
    scanf("%d", &n);

    // 배열 길이 검증
    if (n > 10) {
        printf("배열의 길이는 최대 10이어야 합니다.\\n");
        return 1;
    }

    printf("배열의 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 포인터를 사용하여 배열의 요소를 역순으로 출력
    printf("배열의 역순 출력: ");
    for (int* ptr = &arr[n - 1]; ptr >= arr; ptr--) {
        printf("%d ", *ptr);
    }
    printf("\n");

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int a, b;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    // 포인터 변수에 주소 저장
    int* ptrA = &a;
    int* ptrB = &b;

    // 두 포인터가 가리키는 값의 차를 계산
    int difference = *ptrA - *ptrB;

    printf("두 수의 차: %d\n", difference);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int length = 5; // 배열의 길이 정의
    int arr1[5], arr2[5];

    // 첫 번째 배열 입력
    printf("첫 번째 배열의 요소를 입력하세요: ");
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr1[i]);
    }

    // 두 번째 배열 입력
    printf("두 번째 배열의 요소를 입력하세요: ");
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr2[i]);
    }

    // 배열 요소 교환
    for (int i = 0; i < length; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }

    // 교환된 첫 번째 배열 출력
    printf("첫 번째 배열의 교환된 요소: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // 교환된 두 번째 배열 출력
    printf("두 번째 배열의 교환된 요소: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    int* ptr = &num;

    // 포인터 연산을 사용하여 제곱 계산
    *ptr = (*ptr) * (*ptr);

    printf("제곱된 결과: %d\n", *ptr);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    double a, b;
    printf("두 실수를 입력하세요: ");
    scanf("%lf %lf", &a, &b);

    double* ptrA = &a;
    double* ptrB = &b;

    double average = (*ptrA + *ptrB) / 2;

    printf("두 실수의 평균: %lf\n", average);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    char str[100];
    char* ptr;
    int length = 0;

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);

    // 포인터를 문자열의 시작 위치로 설정
    ptr = str;

    // 포인터를 사용하여 문자열의 끝까지 이동하며 길이를 계산
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    // 문자열의 길이를 출력 (개행 문자 제거를 위해 -1)
    printf("문자열의 길이: %d\n", length - 1);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int arr[100];
    int n;

    printf("배열의 길이를 입력하세요: ");
    scanf("%d", &n);

    printf("배열의 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 포인터 변수 초기화
    int* ptr = arr;
    int min = *ptr;

    // 포인터 연산을 사용하여 최소값 찾기
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    printf("배열의 최소값: %d\n", min);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    int* ptrN = &n;

    printf("%d의 약수: ", *ptrN);
    for (int i = 1; i <= *ptrN; i++) {
        if (*ptrN % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int arr[5];
    int n;
    int sum = 0;

    printf("배열의 길이를 입력하세요 (최대 5): ");
    scanf("%d", &n);

    printf("배열의 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 포인터를 사용하여 배열 요소의 총합 계산
    int* ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++; // 포인터를 다음 요소로 이동
    }

    printf("배열 요소의 총합: %d\n", sum);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int a, b;
    int* ptrA, * ptrB;

    // 사용자로부터 두 정수를 입력 받습니다.
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    // 두 정수의 주소를 포인터에 저장합니다.
    ptrA = &a;
    ptrB = &b;

    // 포인터와 복합 연산자를 사용하여 두 수의 합과 차를 계산합니다.
    int sum = *ptrA + *ptrB;
    int diff = *ptrA - *ptrB;

    // 계산된 합과 차를 출력합니다.
    printf("합: %d, 차: %d\n", sum, diff);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    int* ptr = &num;

    for (int i = 0; i < 5; i++) {
        (*ptr)++;
        printf("증가된 값: %d\n", *ptr);
    }

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int arr[5];
    int n = 5; // 배열 길이를 5로 정의

    printf("배열의 요소를 입력하세요 (총 %d개): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i); // 포인터 연산을 사용하여 입력 받기
    }

    // 포인터와 복합 연산자를 사용하여 배열의 요소를 두 배로 만들기
    for (int i = 0; i < n; i++) {
        *(arr + i) *= 2; // 각 요소를 두 배로
    }

    // 변경된 배열 출력
    printf("변경된 배열의 요소: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    return 0;
}*/
/*#include <stdio.h>

int main() {
    int a, b;
    int* ptrA, * ptrB;

    // 사용자로부터 두 정수를 입력 받음
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    // 두 정수의 주소를 각각 포인터 변수에 저장
    ptrA = &a;
    ptrB = &b;

    // 포인터를 이용하여 두 정수를 비교하고 더 큰 수를 출력
    if (*ptrA > *ptrB) {
        printf("더 큰 수: %d\n", *ptrA);
    }
    else {
        printf("더 큰 수: %d\n", *ptrB);
    }

    return 0;
}*/
/*#include <stdio.h>

// 두 정수의 합을 계산하는 함수
int sum(int* a, int* b) {
    return *a + *b;
}

int main() {
    int x, y;

    // 사용자로부터 두 정수를 입력 받음
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &x, &y);

    // 두 정수의 주소를 함수에 전달하여 합을 계산
    int result = sum(&x, &y);

    // 계산된 합을 출력
    printf("두 정수의 합: %d\n", result);

    return 0;
}*/
/*#include <stdio.h>

// 배열 요소를 두 배로 만드는 함수
void doubleArray(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        *(arr + i) *= 2;
    }
}

int main() {
    int arr[5];
    int n;

    printf("배열의 길이를 입력하세요 (최대 5): ");
    scanf("%d", &n);

    // 배열 길이 검증
    if (n > 5) {
        printf("배열의 길이는 최대 5이어야 합니다.\n");
        return 1;
    }

    printf("배열의 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 함수 호출하여 배열 요소를 두 배로 만들기
    doubleArray(arr, n);

    // 변경된 배열 출력
    printf("변경된 배열의 요소: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}*/
/*#include <stdio.h>

// 평균을 계산하는 함수
float Average(float* num1, float* num2) {
    return (*num1 + *num2) / 2.0;
}

int main() {
    float x, y;
    printf("두 실수를 입력하세요: ");
    scanf("%f %f", &x, &y);

    // 포인터 변수에 주소 저장
    float* ptrX = &x;
    float* ptrY = &y;

    // 평균 계산 함수 호출
    float average = Average(ptrX, ptrY);

    printf("평균: %.2f\n", average);

    return 0;
}*/
/*#include <string.h>
#include <stdio.h>

// 문자열 길이를 계산하는 함수
int stringLength(char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];

    // 사용자로부터 문자열을 입력 받음
    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // 개행 문자 제거

    // 문자열의 길이를 계산하여 출력
    int length = stringLength(str);
    printf("입력한 문자열의 길이: %d\n", length);

    return 0;
}*/
/*#include <stdio.h>

// 최대값을 찾는 함수 정의
int findMax(int* arr, int length) {
    int max = *arr;
    for (int i = 1; i < length; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arr[5];
    int n;

    // 사용자로부터 배열의 길이와 요소를 입력 받습니다
    printf("배열의 길이를 입력하세요 (최대 5): ");
    scanf("%d", &n);

    // 배열 길이 검증
    if (n > 5) {
        printf("배열의 길이는 최대 5이어야 합니다.\n");
        return 1;
    }

    printf("배열의 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 최대값을 찾는 함수 호출
    int max = findMax(arr, n);

    // 최대값 출력
    printf("배열의 최대값: %d\n", max);

    return 0;
}*/
#include <stdio.h>
#include <math.h> // sqrt 함수를 사용하기 위해 필요

// 제곱근을 계산하는 함수
double calculateSquareRoot(int* num) {
    return sqrt(*num);
}

int main() {
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    // 포인터 변수에 주소 저장
    int* ptrN = &n;

    // 제곱근 계산 함수 호출
    double result = calculateSquareRoot(ptrN);

    // 결과 출력
    printf("입력한 정수 %d의 제곱근: %f\n", n, result);

    return 0;
}
