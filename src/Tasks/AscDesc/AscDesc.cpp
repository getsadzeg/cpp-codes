#include <iostream>
using namespace std;

bool isAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}
bool isDescending(int arr[], int size) {
    for(int i = 0; i < size-1; i++) {
        if(arr[i] < arr[i+1]) {
            return false;
        }
    }
    return true;
}

void sortbyDesc(int arr[], int n) {
	int p = 0;
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i] < arr[j]) {
				p = arr[i];
				arr[i] = arr[j];
				arr[j] = p;
				
			}

		}
		cout << arr[i] << " " ;
	}
}

int main() {
    int arr[8];
    for(int i = 0; i < 8; i++) {
        cin >> arr[i];
}


    cout << endl;

    if ( isAscending(arr, 8) ) {
        cout << "Array is ascending" << endl;
    }
    else if( isDescending(arr,8) ) {
        cout << "Array is descending" << endl;
    }
    else cout << "Mixed" << endl;
    cout << endl;
    sortbyDesc(arr, 8);
    cout << endl;
    return 0;
}
