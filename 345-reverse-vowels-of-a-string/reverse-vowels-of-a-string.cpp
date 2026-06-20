class Solution {
public:
    bool isVowel(char c){
        string Vowels="aeiouAEIOU";
        return Vowels.find(c) != string::npos;
    }


    string reverseVowels(string s) {
      int n = s.size();
      int start=0,end=n-1;
      while(start<=end){
        if(isVowel(s[start]) && isVowel(s[end])){
            swap(s[start],s[end]);
            start++,end--;
        }
        else if(!isVowel(s[start])){
            start++;
        }
        else if(!isVowel(s[end])){
            end--;
        }
      }
      return s;
    }
};