#include <stdio.h>
#include <stdlib.h>

void Bubblesort(int arr[], int size) {
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			if (arr[cur - 1] < arr[cur]) {
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}


int main(){
	int arr[] = { 9, 5, 2, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Bubblesort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
 	system("pause");
	return 0;
	
}