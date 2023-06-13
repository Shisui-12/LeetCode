class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.length();
        int len2 = word2.length();
        string ans;
        if(len2 > len1)
        {
            for(int i = 0; i < len1; i++)
            {
                ans += word1[i];
                ans += word2[i];
            }
            for(int i = len1; i < len2; i++)
            {
                ans += word2[i];
            }
        }
        else if(len1 > len2)
        {
            for(int i = 0; i < len2; i++)
            {
                ans += word1[i];
                ans += word2[i];
            }
            for(int i = len2; i < len1; i++)
            {
                ans += word1[i];
            }
        }
        else
        {
             for(int i = 0; i < len2; i++)
            {
                ans += word1[i];
                ans += word2[i];
            }
        }
      return ans;
    }
};
