string orderCopy;
class Solution {
public:
//global var
    static bool cmp(char a,char b){
        //order walli string mai dekho ki konsa char pehle anna chahiye aur konsa baad mai
        //true-> A before B
        //false->B before A

        return (orderCopy.find(a)< orderCopy.find(b));
    }
    string customSortString(string order, string s) {
        orderCopy=order;
        sort(s.begin(),s.end(),cmp);
        return s;
    }
};