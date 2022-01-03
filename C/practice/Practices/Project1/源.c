#include<stdio.h>

int main() {
	int arr[10] = { 34,43,53,32,12,65,76,45,34,32 };
	printf_s("%d", max(arr, 10));
	return 0;
}

int max(int* values, int size) {
	int mval = *values;
	for (int i = 1; i < size; i++) {
		if (values[i] > mval)
			mval = values[i];
	}

	return mval;
}