//link to the problem:https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

class Solution{

public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long res=arr[0];
        long long max_ending=arr[0];
        for(int i=1;i<n;i++)
        {
            max_ending=max(max_ending+arr[i],(long long)arr[i]);
            res=max(res,max_ending);
        }
        
        return res;
    }
