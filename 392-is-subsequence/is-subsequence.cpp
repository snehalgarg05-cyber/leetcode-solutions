class Solution {
public:
    bool isSubsequence(string s, string t) {
        int point1=0,point2=0;
        while(point1<s.size() && point2<t.size()){
            if(s[point1]==t[point2]){
                point1++,point2++;
            }
            else {
                point2++;
            }
        }
        if(point1==s.size()){
            return true;
        }
        return false;
    }
};