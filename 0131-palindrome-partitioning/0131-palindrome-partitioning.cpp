class Solution {
public:
vector<vector<string>> result;
bool isPalindrome(const string& str) {
    // Compares the first half of the string to the second half in reverse
    return equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}
void check(string s, int index,  vector<string>curr){
  if(index==s.size()){
    result.push_back(curr);
    return;
  }

    for(int i=index;i<s.size();i++){
      string des = s.substr(index, i-index+1);
      if(isPalindrome(des)){
        curr.push_back(des);
        check(s,i+1,curr);
     if(!curr.empty()){
       curr.pop_back();}
      }   
    }

      
    
}
    vector<vector<string>> partition(string s) {
          vector<string>curr;
     check(s,0,curr);

 return result;   }
};