//Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

// A shift on s consists of moving the leftmost character of s to the rightmost position.

// For example, if s = "abcde", then it will be "bcdea" after one shift.
 

// Example 1:

// Input: s = "abcde", goal = "cdeab"
// Output: true
// Example 2:

// Input: s = "abcde", goal = "abced"
// Output: false
 

// Constraints:

// 1 <= s.length, goal.length <= 100
// s and goal consist of lowercase English letters.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s, goal;
    
    s = "abcde";
    goal = "cdeab";

    if(s.length() != goal.length()){
        cout << "false";
        return 0;
    }

    int n = s.length();

    for(int i = 0; i < n; i++){
        char temp = s[0];
        s.push_back(temp);
        s.erase(0,1);

        if(s == goal){
            cout << "true";
            return 0;
        }
    }

    cout << "false";
    return 0;
}