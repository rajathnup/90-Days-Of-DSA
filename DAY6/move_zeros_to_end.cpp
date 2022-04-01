//problem link:https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1/


class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        {
	            swap(arr[i],arr[count]);
	            count++;
	        }
	    }
	}
};
