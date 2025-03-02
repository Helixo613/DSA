#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	deque<int> dq;

    for (int i = 0; i < n; i++) {
        // Remove elements that are out of the current window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // Remove smaller elements from the back
        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }

        // Insert the current element index
        dq.push_back(i);

        // Print the max of the current window (starting from index k-1)
        if (i >= k - 1) {
            cout << arr[dq.front()] << " ";
        }
    }
    cout << endl;
}




int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}