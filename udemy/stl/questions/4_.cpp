#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int left = 0, right = arr.size() - 1;
    
    while (right - left >= k) {
        if (abs(arr[left] - x) > abs(arr[right] - x)) {
            left++;
        } else {
            right--;
        }
    }
    
    return vector<int>(arr.begin() + left, arr.begin() + right + 1);
}

int main() {
    vector<int> arr = {1, 3, 6, 8, 9};
    int k = 3;
    int x = 4;
    
    vector<int> result = findClosestElements(arr, k, x);
    
    cout << "The " << k << " closest elements to " << x << " are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
