#include <bits/stdc++.h>
using namespace std;
template<class T>

T most_common(T A[], int size) {
	T winner = A[0]; int freq = 0; // so lan xuat hien!
	int i, j, temp;
	for(i = 0; i < size; i++) {
		for(temp = j = 0; j < size; j++) { // dem tan suat gtri nay!
			if(A[i] == A[j]) {
				temp++; // bien dem
			}
		}
		if(temp > freq) {
			freq = temp;
			winner = A[i];
		}
	}
	cout << winner; // gtri xuat hien nhieu nhat!
}

int main() {
	int arr[17] = {1,1,1,3,3,3,3,3,3,3,2,1,4,5,3};
	most_common( arr, 10 );
	
//	double arr[8] = {1.1, 3.1, 3.1, 3.1, 3.1, 3.1, 4.2, 6.4};
//	most_common( arr, 8 );
	
	// ? char return an address ?
//	int arr[7] = {'code', 'code', 'code', 'code', 'van', 'van', 'hanh'};
//	most_common( arr, 7 );
}
