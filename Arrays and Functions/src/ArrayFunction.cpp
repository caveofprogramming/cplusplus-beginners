// O(n) solution for finding smallest subarray with sum 
// greater than x 
#include <iostream> 
using namespace std; 
  
// Returns length of smallest subarray with sum greater than x. 
// If there is no subarray with given sum, then returns n+1 
int smallestSubWithSum(int arr[], int n, int x) 
{ 
    // Initialize current sum and minimum length 
    int curr_sum = 0, min_len = n+1; 
  
    // Initialize starting and ending indexes 
    int start = 0, end = 0; 
    while (end < n) 
    { 
        // Keep adding array elements while current sum 
        // is smaller than x 
        while (curr_sum <= x && end < n) 
        { 
            // Ignore subarrays with negative sum if 
            // x is positive. 
            if (curr_sum <= 0 && x > 0) 
            { 
                start = end; 
                curr_sum = 0; 
            } 
  
            curr_sum += arr[end++]; 
        } 
  
        // If current sum becomes greater than x. 
        while (curr_sum > x && start < n) 
        { 
            // Update minimum length if needed 
            if (end - start < min_len) 
                min_len = end - start; 
  
            // remove starting elements 
            curr_sum -= arr[start++]; 
        } 
    } 
    return min_len; 
} 
/* Driver program to test above function */
int main() 
{ 
    int arr1[] = {- 8, 1, 4, 2, -6}; 
    int x = 6; 
    int n1 = sizeof(arr1)/sizeof(arr1[0]); 
    int res1 = smallestSubWithSum(arr1, n1, x); 
    (res1 == n1+1)? cout << "Not possible\n" : 
                    cout << res1 << endl; 
  
    return 0; 
}
