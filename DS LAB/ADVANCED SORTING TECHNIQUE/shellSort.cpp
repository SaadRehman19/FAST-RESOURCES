// Shell Sort in C++ programming

#include <iostream>
using namespace std;

// Shell sort
void shellSort(int array[], int n) {
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
//    for(int gap=n/2; gap>0;gap/=2){
//    	for(int i=gap;i<n;i++){                              //ALTERNATIVE METHOD
//    		for(int j=i-gap;j>=0;j-=gap){
//    			if(array[j+gap] >array[j]){
//    				break;
//				}else{
//					int tmp;
//					tmp=array[j+gap];
//					array[j+gap]=array[j];
//					array[j]=tmp;
//				}
//			}
//		}
//	}
}

// Print an array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int i;
  int data[] = {9, 8, 3, 0, 5, 6, 4, 1};
  int size = sizeof(data) / sizeof(data[0]);
  shellSort(data, size);
  cout << "Sorted array: \n";
  printArray(data, size);
  //cin>>i;
}
