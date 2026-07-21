#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int findLongestValidParentheses(const string& inputString) {
    
    if (inputString.empty()) {
        return 0;
    }

    stack<int> indexStack;
    indexStack.push(-1); 

    int longestLength = 0;

    for (int currentIndex = 0; currentIndex < inputString.length(); currentIndex++) {

        if (inputString[currentIndex] == '(') {
            indexStack.push(currentIndex);
        } else {
            indexStack.pop();

            if (indexStack.empty()) {
               
                indexStack.push(currentIndex);
            } else {
                longestLength = max(
                    longestLength,
                    currentIndex - indexStack.top()
                );
            }
        }
    }

    return longestLength;
}

int main() {
    string inputString;

    cout << "Enter the string of parentheses: ";
    getline(cin, inputString);

    int longestLength = findLongestValidParentheses(inputString);

    cout << "The length of the longest valid parentheses substring is: "
         << longestLength << endl;

    return 0;
}