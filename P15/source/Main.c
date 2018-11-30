#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort(int *const array, const int size);

int main() {
	int a[SIZE] = { 2,6,4,8,10,12,59,68,45,37 },i;
	printf("Data items in original order\n");
	for (i = 0;i < SIZE;i++) {
		printf("%4d", a[i]);
	}
	bubbleSort(a, SIZE);
	printf("\nData items in ascending order\n");
	for (i = 0;i < SIZE;i++) {
		printf("%4d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
void bubbleSort(int*const array, const int size) {
	void swap(int *elememt1Ptr, int *element2Ptr);
	int pass, j;
	for (pass = 0;pass < size - 1;pass++) {
		for (j = 0;j < size - 1;j++) {
			if (array[j] > array[j + 1]) {
				swap(&array[j], &array[j+1]);
			}
		}
	}
}
void swap(int *elememt1Ptr, int *element2Ptr) {
	int hold = *elememt1Ptr;
	*elememt1Ptr = *element2Ptr;
	*element2Ptr = hold;
}