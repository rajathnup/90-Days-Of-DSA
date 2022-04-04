//link to the question:https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int lmax[n],rmax[n];
        long long res=0;
        
        lmax[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(lmax[i-1],arr[i]);
        }
        
        rmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rmax[i]=max(rmax[i+1],arr[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            res=res+(min(rmax[i],lmax[i])-arr[i]);
        }
        return res;
    }
};
