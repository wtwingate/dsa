#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int arr[], int len);

int main(void)
{
	int len = 10;
	int arr[len];

	srand(time(NULL));

	for (int i = 0; i < len; i++) {
		arr[i] = rand() % 100;
	}

	printf("Unsorted:");
	for (int i = 0; i < len; i++) {
		printf(" %2d", arr[i]);
	}
	printf("\n");

	bubble_sort(arr, len);

	printf("Sorted:  ");
	for (int i = 0; i < len; i++) {
		printf(" %2d", arr[i]);
	}
	printf("\n");

	return 0;
}

void bubble_sort(int arr[], int len)
{
	int sorted = 0;
	int last = len - 1;

	while (!sorted) {
		sorted = 1;
		for (int i = 0; i < last; i++) {
			if (arr[i] > arr[i + 1]) {
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				sorted = 0;
			}
		}
		last--;
	};
}
