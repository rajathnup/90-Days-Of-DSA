Problem link:https://practice.geeksforgeeks.org/problems/quick-left-rotation3806/1#

class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	    k=k%n;
	   reverse(arr,0,k-1);
	   
	   reverse(arr,k,n-1);

	   reverse(arr,0,n-1);

	} 
	
	void reverse(int arr[],int l,int h)
	{
	    while(l<h)
	    {
	        swap(arr[h],arr[l]);
	        h--;
	        l++;
	    }
	}

};
