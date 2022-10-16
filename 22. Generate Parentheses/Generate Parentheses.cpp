#include<bits/stdc++.h>
using namespace std;

void parenthesis(int first, int last, string output, vector<string>& ans){
    if(first == 0 && last == 0){
        ans.push_back(output);
        return;
    }
    if(first == last && first != 0 && last != 0){
        output.push_back('(');
        parenthesis(first - 1, last, output, ans);
    }
    if(first == 0){
        output.push_back(')');
        parenthesis(first, last - 1,output, ans);
        return;
    }
    if(first < last){
        string output1 = output;
        string output2 = output;
        output1.push_back('(');
        parenthesis(first - 1, last,output1, ans);
        output2.push_back(')');
        parenthesis(first, last - 1,output2, ans);
        }
}
vector<string> generateParenthesis(int n) {
    string output = "";
    vector<string> ans;
    parenthesis(n, n, output, ans);
    return ans;
}

int main(){
    int n = 3;
    vector<string> s = generateParenthesis(n);
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    return 0;
}