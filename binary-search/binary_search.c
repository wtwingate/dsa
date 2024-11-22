#include <stdio.h>

int binary_search(int arr[], int len, int val);

int main(void)
{
	int len = 100;
	int arr[len];
	
	for (int i = 0; i < len; i++) {
		arr[i] = i;
	}

	int res = binary_search(arr, len, 42);

	if (res >= 0) {
		printf("Value found at index %d\n", res);
	} else {
		printf("Value not found\n");
	}

	return 0;
}

int binary_search(int arr[], int len, int val)
{
	int left = 0;
	int right = len - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (val == arr[mid]) {
			return mid;
		} else if (val < arr[mid]) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}

	return -1;
}
