#include<iostream>
using namespace std;
class sortingArray {
	public: 
		void getInput() {
			int size;
			int choice;
			cout<<"Enter 0:integers, 1:floats: ";
			cin>>choice;
			cout<<"Enter size of array: ";
			cin>>size;
			int arr1[size];
			float arr2[size];
			cout<<"\nEnter array elements: ";
			for(int i=0;i<size;i++) {
				if(choice == 0) {
					cin>>arr1[i];
				} else {
					cin>>arr2[i];
				}
			}
			if(choice==0) {
				sortNumbers(arr1, size);
				printArray(arr1, size);
			}
			else {
				sortNumbers(arr2, size);
				printArray(arr2, size);
			}
		}
		void sortNumbers(int* arr, int size) {
			for(int i=0;i<size;i++) {
				for(int j=i+1;j<size;j++) {
					if(arr[j]<arr[i]) {
						int temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
			}
		}
		void sortNumbers(float* arr, int size) {
			for(int i=0;i<size;i++) {
				for(int j=i+1;j<size;j++) {
					if(arr[j]<arr[i]) {
						float temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
			}
		}
		void printArray(int* arr, int size) {
			for(int i=0;i<size;i++) {
				cout<<arr[i]<<" ";
			}
		}
		void printArray(float* arr, int size) {
			for(int i=0;i<size;i++) {
				cout<<arr[i]<<" ";
			}
		}
};
int main() {
	sortingArray obj;
	obj.getInput();
	printf("\n Hello World");
}
