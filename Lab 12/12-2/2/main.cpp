#include "list.h"
#include <vector>

int main() {
	int array[5] = {1,2,4,5,6};
	int array2[4] = {1,3,5,7};


	List<int> li(array, 5);
	List<int> li2(array2, 4);
	
	//implement here
	int size = sizeof(array)/sizeof(array[0]);
	int size2 = sizeof(array2)/sizeof(array[0]);

	int arr[1] = {0};
	List<int> res(arr, 1);
	
	int idx = 0, idx2 = 0;
	while(true) {
		if(idx == size && idx2 == size2) break;
		else if(idx == size && idx2 < size2) {
			res.push_back(array2[idx2]);
			idx2++;
		}
		else if(idx < size && idx2 == size2) {
			res.push_back(array[idx]);
			idx++;
		}
		else if(array[idx] <= array2[idx2]) {
			res.push_back(array[idx]);
			idx++;
		}
		else if(array[idx] > array2[idx2]) {
			res.push_back(array2[idx2]);
			idx2++;
		}
	}
	res.pop_front();

	cout << res << endl; // 1,1,2,3,4,5,5,6,7

	return 0;
}