#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int>& arr) {
    int n = arr.size() + 1;
    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    return total - sum;
}

int main() {
    int a[] = {1, 2, 4, 5};
    vector<int> arr(a, a + 4); 

    cout << "Missing number: " << findMissing(arr) << endl;
    return 0;
}
