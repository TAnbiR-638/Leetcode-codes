//3. https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l=s.size();

        map<char,int>mp;

        int ans=0;

        for(int i=0;i<l;i++){

            for(j=i;j<l;j++){

                mp[s[j]]++;

                if(mp[s[j]]>=2){

                    if(j==0){ans=j; break;}
                    else{
                        ans=max(ans,(j-i)); break;
                    }
                }

            }

            mp.clear();
        }

        if(ans==0){
            ans=l;
        }
    }
};