#include<iostream>
#include<vector>
#include<cstring>
void solve(string str, int index, vector<string> &ans, string output) {
  if (index >= str.length()) {
    if (output.length()) {
      ans.push_back(output);
    }
    return;
  }
  //   exclude
  solve(str, index + 1, ans, output);

  // include
  char element = str[index];
  output.push_back(element);
  solve(str, index + 1, ans, output);
}
vector<string> subsequences(string str) {
  vector<string> ans;
  int index = 0;
  string output = "";
  solve(str, index, ans, output);

  return ans;
}

int main(){
    int str="Mukunda";
    cout<<subsequences(str);
    return 0;
}
