#define _CRT_SECURE_NO_WARNINGS


/*#include <stdio.h>

#define ARRAY_SIZE 10  // 배열의 길이를 상수로 정의

int main() {
    int arr[ARRAY_SIZE];
    printf("배열의 요소를 입력하세요:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("배열의 최댓값은 %d입니다.\n", max);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int arr[3]; // 배열 길이를 3으로 고정
    int i;

    printf("정수 배열의 요소를 입력하세요 (3개의 숫자를 입력하세요):\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    printf("역순으로 출력:");
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

    printf("x 값을 입력하세요: ");
    scanf("%lf", &x);

    // 다항식 계산
    for (int i = 0; i <= N; i++) {
        result += coefficients[i] * pow(x, i);
    }

    printf("다항식의 결과값: %lf\n", result);

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 10
void removeDuplicates(int arr[], int n) {
    int unique[ARRAY_SIZE], i, j, k = 0;
    int isDuplicate;

    // 배열에서 중복된 값을 제거하고 유니크한 값만 저장
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
    // 유니크한 값 출력
    printf("유니크한 값: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
}

int main() {
    int arr[ARRAY_SIZE];
    // 배열 요소 입력받기
    printf("배열 요소를 입력하세요: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    // 중복 값을 제거하고 유니크한 값만 출력
    removeDuplicates(arr, ARRAY_SIZE);

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 5
int main() {
    int i;

    int arr[ARRAY_SIZE];

    // 배열 요소를 입력받습니다.
    printf("배열 요소를 입력하세요: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // 짝수 요소를 출력합니다.
    printf("짝수: ");
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

    // 배열 요소 입력 받기
    printf("배열 요소를 입력하세요 : ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // 초기 최솟값과 최댓값 설정
    min = arr[0];
    max = arr[0];

    // 배열을 순회하며 최솟값과 최댓값 찾기
    for (i = 1; i < ARRAY_SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // 결과 출력
    printf("최솟값: %d, 최댓값: %d\n", min, max);

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 5
#include <stdio.h>

int main() {
    int sum = 0;


    int arr[ARRAY_SIZE];

    // 배열 요소를 입력받음
    printf("배열 요소를 입력하세요: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // 배열 요소들의 총합을 계산
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += arr[i];
    }

    // 총합을 출력
    printf("총합: %d\n", sum);

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 5
int main() {
    int  i;
    int odd_count = 0, even_count = 0;


    int array[ARRAY_SIZE];

    printf("배열 요소를 입력하세요: ");
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

    printf("홀수 개수: %d, 짝수 개수: %d\n", odd_count, even_count);

    return 0;
}*/
/*#include <stdio.h>
#define ARRAY_SIZE 5
int main() {
    int  i, j;
    int array[ARRAY_SIZE];
    printf("배열 요소를 입력하세요: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &array[i]);
    }

    int frequency[ARRAY_SIZE];
    for (i = 0; i < ARRAY_SIZE; i++) {
        frequency[i] = 1;
        for (j = i + 1; j < ARRAY_SIZE; j++) {
            if (array[i] == array[j]) {
                frequency[i]++;
                // 중복된 요소는 다시 세지 않도록 -1로 설정
                array[j] = -1;
            }
        }
    }
    printf("각 요소의 출현 빈도:\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] != -1) {
            printf("%d:%d회\n", array[i], frequency[i]);
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
    printf("배열 요소를 입력하세요: ");
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

    printf("두 번째로 큰 수: %d\n", second);

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

    printf("배열 요소를 입력하세요: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, ARRAY_SIZE);

    printf("정렬된 배열: ");
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

    printf("배열 요소를 입력하세요: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    printf("최소값 위치: %d\n", minIndex);

    return 0;
}*/
/*#include <stdio.h>

#define ARRAY_SIZE 4

int main() {
    int i;
    int arr[ARRAY_SIZE];
    long long product = 1;

    printf("배열 요소를 입력하세요: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < ARRAY_SIZE; i++) {
        product *= arr[i];
    }

    printf("배열 요소들의 곱: %d\n", product);

    return 0;
}*/

/*#include <stdio.h>
#define ARRAY_SIZE 7

int main() {
    int arr[ARRAY_SIZE];
    int searchNumber;
    int i;

    // 배열 요소 입력 받기
    printf("배열 요소를 입력하세요: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // 찾고자 하는 숫자 입력 받기
    printf("찾고자 하는 숫자를 입력하세요: ");
    scanf("%d", &searchNumber);

    // 해당 숫자의 모든 위치(인덱스) 찾기
    printf("숫자 %d의 위치: ", searchNumber);
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

    printf("배열 요소를 입력하세요 (%d개의 요소): ", ARRAY_SIZE);
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    printf("그룹 합: ");
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

    // 배열 요소 입력 받기
    printf("배열 요소를 입력하세요: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // 첫 번째 요소를 임시 저장
    temp = arr[0];

    // 모든 요소를 왼쪽으로 한 칸씩 이동
    for (i = 0; i < ARRAY_SIZE - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // 마지막 요소에 처음 요소를 저장
    arr[ARRAY_SIZE - 1] = temp;

    // 결과 출력
    printf("이동 후 배열: ");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}






