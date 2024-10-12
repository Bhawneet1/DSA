void normalise(string &str)
    {
        //normalize every string in pattern form
        char start ='a';
        unordered_map<char,char> mapping;
        for(int i=0;i<str.length();i++)
        {
            char stringkaChar=str[i];
            if(mapping.find(stringkaChar) == mapping.end())
            {
                mapping[stringkaChar]=start;
                start++;
            }
        }
        for(int i=0;i<str.length();i++)
        {
            char mappedChar=mapping[str[i]];
            str[i]=mappedChar;
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        //pattern ko normalise
        vector<string> ans;
        normalise(pattern);
        for(int i=0;i<words.size();i++)
        {
            string curr=words[i];
            string currCopy =curr;
            normalise(currCopy);
            if(currCopy.compare(pattern)==0)
            {
                ans.push_back(curr);
            }
        }
        return ans;
    }