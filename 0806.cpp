#define _CRT_SECURE_NO_WARNINGS


/*#include <stdio.h>

#define ARRAY_SIZE 10  // �迭�� ���̸� ����� ����

int main() {
    int arr[ARRAY_SIZE];
    printf("�迭�� ��Ҹ� �Է��ϼ���:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("�迭�� �ִ��� %d�Դϴ�.\n", max);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int arr[3]; // �迭 ���̸� 3���� ����
    int i;

    printf("���� �迭�� ��Ҹ� �Է��ϼ��� (3���� ���ڸ� �Է��ϼ���):\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    printf("�������� ���:");
    for (i = 2; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/
/*#include <stdio.h>
#include <math.h>

#define N 10

int main(void) {
    int coefficients[N + 1] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
    double x, result = 0.0;

    printf("x ���� �Է��ϼ���: ");
    scanf("%lf", &x);

    // ���׽� ���
    for (int i = 0; i <= N; i++) {
        result += coefficients[i] * pow(x, i);
    }

    printf("���׽��� �����: %lf\n", result);

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 10
void removeDuplicates(int arr[], int n) {
    int unique[ARRAY_SIZE], i, j, k = 0;
    int isDuplicate;

    // �迭���� �ߺ��� ���� �����ϰ� ����ũ�� ���� ����
    for (i = 0; i < n; i++) {
        isDuplicate = 0;

        for (j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[k++] = arr[i];
        }
    }
    // ����ũ�� �� ���
    printf("����ũ�� ��: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
}

int main() {
    int arr[ARRAY_SIZE];
    // �迭 ��� �Է¹ޱ�
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    // �ߺ� ���� �����ϰ� ����ũ�� ���� ���
    removeDuplicates(arr, ARRAY_SIZE);

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 5
int main() {
    int i;

    int arr[ARRAY_SIZE];

    // �迭 ��Ҹ� �Է¹޽��ϴ�.
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // ¦�� ��Ҹ� ����մϴ�.
    printf("¦��: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 5
int main() {
    int  i;
    int min, max;


    int arr[ARRAY_SIZE];

    // �迭 ��� �Է� �ޱ�
    printf("�迭 ��Ҹ� �Է��ϼ��� : ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // �ʱ� �ּڰ��� �ִ� ����
    min = arr[0];
    max = arr[0];

    // �迭�� ��ȸ�ϸ� �ּڰ��� �ִ� ã��
    for (i = 1; i < ARRAY_SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // ��� ���
    printf("�ּڰ�: %d, �ִ�: %d\n", min, max);

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 5
#include <stdio.h>

int main() {
    int sum = 0;


    int arr[ARRAY_SIZE];

    // �迭 ��Ҹ� �Է¹���
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // �迭 ��ҵ��� ������ ���
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += arr[i];
    }

    // ������ ���
    printf("����: %d\n", sum);

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 5
int main() {
    int  i;
    int odd_count = 0, even_count = 0;


    int array[ARRAY_SIZE];

    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }

    printf("Ȧ�� ����: %d, ¦�� ����: %d\n", odd_count, even_count);

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 5
int main() {
    int  i, j;
    int array[ARRAY_SIZE];
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &array[i]);
    }

    int frequency[ARRAY_SIZE];
    for (i = 0; i < ARRAY_SIZE; i++) {
        frequency[i] = 1;
        for (j = i + 1; j < ARRAY_SIZE; j++) {
            if (array[i] == array[j]) {
                frequency[i]++;
                // �ߺ��� ��Ҵ� �ٽ� ���� �ʵ��� -1�� ����
                array[j] = -1;
            }
        }
    }
    printf("�� ����� ���� ��:\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] != -1) {
            printf("%d:%dȸ\n", array[i], frequency[i]);
        }
    }

    return 0;
}*/
/*#include <stdio.h>
#include <limits.h>
#define ARRAY_SIZE 5
int main() {
    int i, first, second;
    first = second = INT_MIN;
    int arr[ARRAY_SIZE];
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    printf("�� ��°�� ū ��: %d\n", second);

    return 0;
}*/
/*#include <stdio.h>

#define ARRAY_SIZE 5

void sortArray(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[ARRAY_SIZE];
    int i;

    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, ARRAY_SIZE);

    printf("���ĵ� �迭: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 5

int main() {
    int arr[ARRAY_SIZE];
    int minIndex = 0;

    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    printf("�ּҰ� ��ġ: %d\n", minIndex);

    return 0;
}*/
/*#include <stdio.h>

#define ARRAY_SIZE 4

int main() {
    int i;
    int arr[ARRAY_SIZE];
    long long product = 1;

    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < ARRAY_SIZE; i++) {
        product *= arr[i];
    }

    printf("�迭 ��ҵ��� ��: %d\n", product);

    return 0;
}*/

/*#include <stdio.h>
#define ARRAY_SIZE 7

int main() {
    int arr[ARRAY_SIZE];
    int searchNumber;
    int i;

    // �迭 ��� �Է� �ޱ�
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // ã���� �ϴ� ���� �Է� �ޱ�
    printf("ã���� �ϴ� ���ڸ� �Է��ϼ���: ");
    scanf("%d", &searchNumber);

    // �ش� ������ ��� ��ġ(�ε���) ã��
    printf("���� %d�� ��ġ: ", searchNumber);
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] == searchNumber) {
            printf("%d ", i+1);
        }
    }
    printf("\n");

    return 0;
}
*/
/*#include <stdio.h>

#define ARRAY_SIZE 6

int main() {
    int i;
    int arr[ARRAY_SIZE];

    printf("�迭 ��Ҹ� �Է��ϼ��� (%d���� ���): ", ARRAY_SIZE);
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    printf("�׷� ��: ");
    for (i = 0; i < ARRAY_SIZE - 1; i += 2) {
        printf("%d ",arr[i] + arr[i + 1]);
    }

    return 0;
}*/
#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    int arr[ARRAY_SIZE];
    int i, temp;

    // �迭 ��� �Է� �ޱ�
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // ù ��° ��Ҹ� �ӽ� ����
    temp = arr[0];

    // ��� ��Ҹ� �������� �� ĭ�� �̵�
    for (i = 0; i < ARRAY_SIZE - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // ������ ��ҿ� ó�� ��Ҹ� ����
    arr[ARRAY_SIZE - 1] = temp;

    // ��� ���
    printf("�̵� �� �迭: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}






