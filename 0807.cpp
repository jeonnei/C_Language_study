#define _CRT_SECURE_NO_WARNINGS

/*#include <stdio.h>

int main() {
    int a, b;
    int* ptrA, * ptrB;
    int sum, diff;

    // ����ڷκ��� �� ������ �Է� ����
    printf("�� ������ �Է��ϼ���: ");
    scanf("%d %d", &a, &b);

    // �Է� ���� �� ������ �ּҸ� ���� �� ������ ������ ����
    ptrA = &a;
    ptrB = &b;

    // �����͸� ����Ͽ� �� ���� �հ� ���� ���
    sum = *ptrA + *ptrB;
    diff = *ptrA - *ptrB;

    // ���� �հ� ���� ���
    printf("��: %d\n", sum);
    printf("��: %d\n", diff);

    return 0;
}*/
/*#include <stdio.h>

// swap �Լ� ����
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("�� ������ �Է��ϼ���: ");
    scanf("%d %d", &x, &y);

    // ������ ������ �ּ� ����
    int* ptrX = &x;
    int* ptrY = &y;

    // ���� �Լ� ȣ��
    swap(ptrX, ptrY);

    printf("ù ��° ��: %d, �� ��° ��: %d\n", x, y);

    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h> // abs() �Լ��� ����ϱ� ���� �ʿ�

int main() {
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    // ������ ������ �ּ� ����
    int* ptrNum = &num;

    // ���� ���
    int absValue = abs(*ptrNum);

    printf("����: %d\n", absValue);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    float num1, num2;
    printf("�� �Ǽ��� �Է��ϼ���: ");
    scanf("%f %f", &num1, &num2);

    // ������ ������ �ּ� ����
    float* ptrNum1 = &num1;
    float* ptrNum2 = &num2;

    // �����͸� ����Ͽ� �� �Ǽ��� ���� ���
    float result = (*ptrNum1) * (*ptrNum2);

    // ��� ���
    printf("��: %.1f\n", result);

    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char* ptr;

    // ����ڷκ��� ���ڿ� �Է� �ޱ�
    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin);

    // ���� ���� ����
    str[strcspn(str, "\\n")] = '\\0';

    // ������ ������ ���ڿ��� �ּ� ����
    ptr = str;

    // strlen() �Լ��� ����Ͽ� ���ڿ��� ���� ���
    int length = strlen(ptr);

    // ���ڿ��� ���� ���
    printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.\n", length);

    return 0;
}*/
/*#include <stdio.h>
#include <math.h>

int main() {
    float x, y, average;
    printf("�� �Ǽ��� �Է��ϼ���: ");
    scanf("%f %f", &x, &y);

    // ������ ������ �ּ� ����
    float* ptrX = &x;
    float* ptrY = &y;

    // �����͸� ����Ͽ� ��� ���
    average = (*ptrX + *ptrY) / 2.0;

    // ����� �Ҽ� ù° �ڸ����� �ݿø�
    average = roundf(average * 10) / 10;

    printf("���: %.1f\n", average);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    int* ptrN = &n;

    printf("%d�� ���: ", *ptrN);
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

    printf("�迭�� ���̸� �Է��ϼ��� (�ִ� 10): ");
    scanf("%d", &n);

    // �迭 ���� ����
    if (n > 10) {
        printf("�迭�� ���̴� �ִ� 10�̾�� �մϴ�.\\n");
        return 1;
    }

    printf("�迭�� ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // �����͸� ����Ͽ� �迭�� ��Ҹ� �������� ���
    printf("�迭�� ���� ���: ");
    for (int* ptr = &arr[n - 1]; ptr >= arr; ptr--) {
        printf("%d ", *ptr);
    }
    printf("\n");

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int a, b;
    printf("�� ������ �Է��ϼ���: ");
    scanf("%d %d", &a, &b);

    // ������ ������ �ּ� ����
    int* ptrA = &a;
    int* ptrB = &b;

    // �� �����Ͱ� ����Ű�� ���� ���� ���
    int difference = *ptrA - *ptrB;

    printf("�� ���� ��: %d\n", difference);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int length = 5; // �迭�� ���� ����
    int arr1[5], arr2[5];

    // ù ��° �迭 �Է�
    printf("ù ��° �迭�� ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr1[i]);
    }

    // �� ��° �迭 �Է�
    printf("�� ��° �迭�� ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr2[i]);
    }

    // �迭 ��� ��ȯ
    for (int i = 0; i < length; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }

    // ��ȯ�� ù ��° �迭 ���
    printf("ù ��° �迭�� ��ȯ�� ���: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // ��ȯ�� �� ��° �迭 ���
    printf("�� ��° �迭�� ��ȯ�� ���: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    int* ptr = &num;

    // ������ ������ ����Ͽ� ���� ���
    *ptr = (*ptr) * (*ptr);

    printf("������ ���: %d\n", *ptr);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    double a, b;
    printf("�� �Ǽ��� �Է��ϼ���: ");
    scanf("%lf %lf", &a, &b);

    double* ptrA = &a;
    double* ptrB = &b;

    double average = (*ptrA + *ptrB) / 2;

    printf("�� �Ǽ��� ���: %lf\n", average);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    char str[100];
    char* ptr;
    int length = 0;

    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin);

    // �����͸� ���ڿ��� ���� ��ġ�� ����
    ptr = str;

    // �����͸� ����Ͽ� ���ڿ��� ������ �̵��ϸ� ���̸� ���
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    // ���ڿ��� ���̸� ��� (���� ���� ���Ÿ� ���� -1)
    printf("���ڿ��� ����: %d\n", length - 1);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int arr[100];
    int n;

    printf("�迭�� ���̸� �Է��ϼ���: ");
    scanf("%d", &n);

    printf("�迭�� ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ������ ���� �ʱ�ȭ
    int* ptr = arr;
    int min = *ptr;

    // ������ ������ ����Ͽ� �ּҰ� ã��
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    printf("�迭�� �ּҰ�: %d\n", min);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int n;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    int* ptrN = &n;

    printf("%d�� ���: ", *ptrN);
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

    printf("�迭�� ���̸� �Է��ϼ��� (�ִ� 5): ");
    scanf("%d", &n);

    printf("�迭�� ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // �����͸� ����Ͽ� �迭 ����� ���� ���
    int* ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++; // �����͸� ���� ��ҷ� �̵�
    }

    printf("�迭 ����� ����: %d\n", sum);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int a, b;
    int* ptrA, * ptrB;

    // ����ڷκ��� �� ������ �Է� �޽��ϴ�.
    printf("�� ������ �Է��ϼ���: ");
    scanf("%d %d", &a, &b);

    // �� ������ �ּҸ� �����Ϳ� �����մϴ�.
    ptrA = &a;
    ptrB = &b;

    // �����Ϳ� ���� �����ڸ� ����Ͽ� �� ���� �հ� ���� ����մϴ�.
    int sum = *ptrA + *ptrB;
    int diff = *ptrA - *ptrB;

    // ���� �հ� ���� ����մϴ�.
    printf("��: %d, ��: %d\n", sum, diff);

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int num;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &num);

    int* ptr = &num;

    for (int i = 0; i < 5; i++) {
        (*ptr)++;
        printf("������ ��: %d\n", *ptr);
    }

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int arr[5];
    int n = 5; // �迭 ���̸� 5�� ����

    printf("�迭�� ��Ҹ� �Է��ϼ��� (�� %d��): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i); // ������ ������ ����Ͽ� �Է� �ޱ�
    }

    // �����Ϳ� ���� �����ڸ� ����Ͽ� �迭�� ��Ҹ� �� ��� �����
    for (int i = 0; i < n; i++) {
        *(arr + i) *= 2; // �� ��Ҹ� �� ���
    }

    // ����� �迭 ���
    printf("����� �迭�� ���: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    return 0;
}*/
/*#include <stdio.h>

int main() {
    int a, b;
    int* ptrA, * ptrB;

    // ����ڷκ��� �� ������ �Է� ����
    printf("�� ������ �Է��ϼ���: ");
    scanf("%d %d", &a, &b);

    // �� ������ �ּҸ� ���� ������ ������ ����
    ptrA = &a;
    ptrB = &b;

    // �����͸� �̿��Ͽ� �� ������ ���ϰ� �� ū ���� ���
    if (*ptrA > *ptrB) {
        printf("�� ū ��: %d\n", *ptrA);
    }
    else {
        printf("�� ū ��: %d\n", *ptrB);
    }

    return 0;
}*/
/*#include <stdio.h>

// �� ������ ���� ����ϴ� �Լ�
int sum(int* a, int* b) {
    return *a + *b;
}

int main() {
    int x, y;

    // ����ڷκ��� �� ������ �Է� ����
    printf("�� ������ �Է��ϼ���: ");
    scanf("%d %d", &x, &y);

    // �� ������ �ּҸ� �Լ��� �����Ͽ� ���� ���
    int result = sum(&x, &y);

    // ���� ���� ���
    printf("�� ������ ��: %d\n", result);

    return 0;
}*/
/*#include <stdio.h>

// �迭 ��Ҹ� �� ��� ����� �Լ�
void doubleArray(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        *(arr + i) *= 2;
    }
}

int main() {
    int arr[5];
    int n;

    printf("�迭�� ���̸� �Է��ϼ��� (�ִ� 5): ");
    scanf("%d", &n);

    // �迭 ���� ����
    if (n > 5) {
        printf("�迭�� ���̴� �ִ� 5�̾�� �մϴ�.\n");
        return 1;
    }

    printf("�迭�� ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // �Լ� ȣ���Ͽ� �迭 ��Ҹ� �� ��� �����
    doubleArray(arr, n);

    // ����� �迭 ���
    printf("����� �迭�� ���: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}*/
/*#include <stdio.h>

// ����� ����ϴ� �Լ�
float Average(float* num1, float* num2) {
    return (*num1 + *num2) / 2.0;
}

int main() {
    float x, y;
    printf("�� �Ǽ��� �Է��ϼ���: ");
    scanf("%f %f", &x, &y);

    // ������ ������ �ּ� ����
    float* ptrX = &x;
    float* ptrY = &y;

    // ��� ��� �Լ� ȣ��
    float average = Average(ptrX, ptrY);

    printf("���: %.2f\n", average);

    return 0;
}*/
/*#include <string.h>
#include <stdio.h>

// ���ڿ� ���̸� ����ϴ� �Լ�
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

    // ����ڷκ��� ���ڿ��� �Է� ����
    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // ���� ���� ����

    // ���ڿ��� ���̸� ����Ͽ� ���
    int length = stringLength(str);
    printf("�Է��� ���ڿ��� ����: %d\n", length);

    return 0;
}*/
/*#include <stdio.h>

// �ִ밪�� ã�� �Լ� ����
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

    // ����ڷκ��� �迭�� ���̿� ��Ҹ� �Է� �޽��ϴ�
    printf("�迭�� ���̸� �Է��ϼ��� (�ִ� 5): ");
    scanf("%d", &n);

    // �迭 ���� ����
    if (n > 5) {
        printf("�迭�� ���̴� �ִ� 5�̾�� �մϴ�.\n");
        return 1;
    }

    printf("�迭�� ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // �ִ밪�� ã�� �Լ� ȣ��
    int max = findMax(arr, n);

    // �ִ밪 ���
    printf("�迭�� �ִ밪: %d\n", max);

    return 0;
}*/
#include <stdio.h>
#include <math.h> // sqrt �Լ��� ����ϱ� ���� �ʿ�

// �������� ����ϴ� �Լ�
double calculateSquareRoot(int* num) {
    return sqrt(*num);
}

int main() {
    int n;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    // ������ ������ �ּ� ����
    int* ptrN = &n;

    // ������ ��� �Լ� ȣ��
    double result = calculateSquareRoot(ptrN);

    // ��� ���
    printf("�Է��� ���� %d�� ������: %f\n", n, result);

    return 0;
}
