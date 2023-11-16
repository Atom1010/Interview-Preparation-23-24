#include <vector>

using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int k = 0;
        int carry = 1; 
        
        for (int i = digits.size() - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            result.insert(result.begin(), sum % 10);
            carry = sum / 10;
        }
        if (carry > 0) {
            result.insert(result.begin(), carry);
        }
        return result;
    }
};

//PLUS ONE
// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.
