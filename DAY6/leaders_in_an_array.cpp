//problem link:https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1




class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> copy;
        int cur_lead=a[n-1];
        copy.push_back(cur_lead);
        for(int i=n-2;i>=0;i--)
        {
            if(cur_lead<=a[i])
            {
                cur_lead=a[i];
                copy.push_back(cur_lead);
            }
        }
        
        reverse(copy.begin(),copy.end());
        return copy;
    }
};
