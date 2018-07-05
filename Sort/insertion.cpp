//baekjoon sort1 insertionSort
#include <iostream>
using namespace std;

void insertionSort(int data[], int n) {
	
	int loc, newItem;
	for(int i=1 ; i<n ; i++) {
		loc = i-1;
		newItem = data[i];
		while (loc >= 0 && newItem < data[loc]) {
			data[loc+1] = data[loc];
			loc = loc-1;
		}
		data[loc+1] = newItem;			
	}
}

int main() {
	
	int n;
	int data[1000];
	
	cin >> n;
	
	for(int i=0 ; i<n ; i++) {
		cin >> data[i];
	}
	
	insertionSort(data, n);
	
	for(int i=0 ; i<n ; i++) {
		cout << data[i] << endl;
	}
}


