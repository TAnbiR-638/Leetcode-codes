//Problem Name: 3536. Maximum Product of Two Digits
//Problem Link: https://leetcode.com/problems/maximum-product-of-two-digits/description/

//Code:

class Solution {
public:
    int maxProduct(int n) {
        
        vector<int>v;
        
        int p=n;
        
        while(p!=0){
            int x=p%10;
            v.push_back(x);

            p=p/10;
        }

        int mx=0;

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(i!=j){
                    mx=max(mx,(v[i]*v[j]));
                }
            }
        }

        return mx;
    }
};
