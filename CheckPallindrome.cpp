//delete if not giving ans
bool checkpallindrome(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                // if s[i]!=s[j]
                // iss case mai delete karo
                // ya to index i walla 
                // ya to j walla

                bool ansOne=checkpallindrome(s,i+1,j);
                bool ansTwo=checkpallindrome(s,i,j-1);
                bool finalAns=ansOne||ansTwo;
                return finalAns;
            }
        }  
        return true; 
    }