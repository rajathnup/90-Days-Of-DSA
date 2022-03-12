//problem statement: https://www.geeksforgeeks.org/subset-sum-problem-dp-25/


class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here
        if(N==0)
        {
            return (sum==0)?true:false;
        }
        
        if(issafe(sum)==true)
        {
            return isSubsetSum(N-1,arr,sum)+isSubsetSum(N-1,arr,sum-arr[N-1]);
        }
    }
    
    bool issafe(int sum)
    {
        if(sum<0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
