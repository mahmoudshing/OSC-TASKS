#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while (word.size() < k) {
            string change = word;
            for (int i = 0; i < word.size(); i++) {
                change[i] = word[i] + 1;
            }
            word = word + change;
        }
        return word[k-1];
    }
};