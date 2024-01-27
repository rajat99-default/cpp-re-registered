#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // target = 8

    int target = 8;
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    int left = 0;
    int right = n - 1;

    for (; left < right;)
    {
        // Calculate the current sum of elements at left and right pointers
        int currentSum = arr[left] + arr[right];

        // Check if the current sum is equal to the target
        if (currentSum == target)
        {
            cout << "Pair found: (" << arr[left] << ", " << arr[right] << ")" << endl;
            left++;
            right--;
        }
        else if (currentSum < target)
        {
            // If current sum is less than target, move left pointer to the right
            left++;
        }
        else
        {
            // If current sum is greater than target, move right pointer to the left
            right--;
        }
    }

    return 0;
}
