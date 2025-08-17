#include <iostream>
using namespace std;

int findDuplicate(int nums[], int n) {
    int slow = nums[0];
    int fast = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main() {
    int arr[] = {3, 1, 3, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]); // n+1 elements
    cout << "Duplicate number is: " << findDuplicate(arr, n) << endl;
    return 0;
}
