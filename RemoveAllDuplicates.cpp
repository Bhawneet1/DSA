string removeDuplicates(string s) {
        string ans="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            if(ans.empty())
            {
                ans.push_back(ch);
            }
            else if(ch==ans.back())
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(ch);
            }
        }
        return ans;
    }