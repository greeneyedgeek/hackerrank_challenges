/**
* Author: greeneyedgeek
* Date: 2018-04-12
*/

#include <iostream>
#include <stack> 
#include <queue>

using namespace std;

class Solution {
    //Write your code here
    
    private: 
        stack<char> s;
        queue<char> q;
    
    public:
        //STACK method that pushes a character onto a stack
        void pushCharacter(char ch) {
            s.push(ch);

        }

        //STACK method that pops and returns the character at the top of the stack instance variable
        char popCharacter() {
            char c = s.top();
            s.pop();
            return c;

        }

        //QUEUE method that enqueues a character in the queue instance variable
        void enqueueCharacter(char ch) {
            q.push(ch);

        }


        //QUEUE method that dequeues and returns the first character in the queue instance variable
        char dequeueCharacter() {
            char c = q.front();
            q.pop();
            return c;

        }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
