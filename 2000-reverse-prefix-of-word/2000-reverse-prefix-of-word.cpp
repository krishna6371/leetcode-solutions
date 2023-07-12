class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count=0;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                count=i;
                break;
            }
        }
     reverse(word.begin(),word.begin()+count+1);
        return word;
        
    }
};