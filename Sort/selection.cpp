//baekjoon sort1 selectionSort
#include <iostream>
using namespace std;

void selectionSort(int data[], int n) {
	
	for(int i=0 ; i<n ; i++) {	
		int tmp, large = 0;
		for(int j=1 ; j<n-i ; j++) {
			if(data[j] > data[large]) {
				large = j;
			}
		}
		tmp = data[n-(i+1)];
		data[n-(i+1)] = data[large];
		data[large] = tmp;			
	}
}

int main() {
	
	int n;
	int data[1000];
	
	cin >> n;
	
	for(int i=0 ; i<n ; i++) {
		cin >> data[i];
	}
	
	selectionSort(data, n);
	
	for(int i=0 ; i<n ; i++) {
		cout << data[i] << endl;
	}
}


