/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?
*/

# include <string>
# include <iostream>

class Solution {
public:
    bool isPalindrome(int x)
    {
        // if x is negative always return false
        if ((-pow(2,31) <= x) && (x <= (pow(2,31) - 1)))
        {
            string right_left = to_string(x);
            string left_right = "";

            // iterate through string concatinating characters in reverse order
            // index from string length down to 0
            for (int i = right_left.length() - 1; i >= 0; i--)    
            {
                left_right += right_left[i];
            }
            
            //  palindrome match
            if (right_left == left_right)
            {
                return true;
            }
        }
        return false; // invalid x value out of range
    }
};
