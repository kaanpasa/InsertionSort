#include<stdio.h>
int i, step=1;
void printArray(int arr[], int n){
	printf("Step %d => ", step);
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	step++;
}

void insertionSort(int arr[], int n){
	int key, j;
	for(j=1; j<n; j++){
		key=arr[j];
		i=j-1;
		while(i>=0 && arr[i]>key){
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1]=key;
		printArray(arr, n);
	}
}	

int main(){
	int size;
	printf("Please give size of array: ");
	scanf("%d", &size);
	int array[size];
	for(i=0; i<size; i++){
		array[i]=rand()%100;
	}
	insertionSort(array,size);
	return 0;
}
