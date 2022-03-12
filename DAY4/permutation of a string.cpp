
//link to the probelm statement: https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1/


class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>res;
		    int e=S.length()-1;
		    int s=0;
		    permutation(S,res,s,e);
		    sort(res.begin(),res.end());
		    return res;
		}
		
		void permutation(string &S,vector<string>&res,int s,int e)
		{
		    if(s==e)
		    {
		        res.push_back(S);
		    }
		    else
		    {
		        for(int i=s;i<=e;i++)
		        {
		            swap(S[s],S[i]);
		            permutation(S,res,s+1,e);
		            swap(S[s],S[i]);
		        }
		    }
		    
		}
};
