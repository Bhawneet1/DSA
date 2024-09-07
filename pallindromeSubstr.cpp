int expandAroundCenter(string s,int i,int j)
    {
        int count=0;
        while(i>=0 && j<s.length()&& s[i]==s[j])
        {
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int center=0;center<s.length();center++)
        {
            //odd length ki substr count
            int i=center;
            int j=center;
            int oddSubstr=expandAroundCenter(s,i,j);

            //even length ki substr count
            i=center;
            j=center+1;
            int evenSubstr=expandAroundCenter(s,i,j);

            count+=oddSubstr+evenSubstr;
        }
        return count;
    }