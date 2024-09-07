string removeOccurrences(string s, string part) {
     while(s.find(part)!=string::npos)//jab tak pattern aa rha hai
     {
        //first argument mai hamne start index diya
        //second mai hamne length to be removed diya
        s.erase(s.find(part),part.length());
     }  
     return s; 
    }