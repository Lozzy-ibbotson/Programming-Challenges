/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "". 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings. 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        // initialise default return value
        string common_prefix = "";
        bool matching = true;
        string first_str = strs[0];

        // check strs length
        if ((0 <= strs.size()) && (strs.size() <= 200))
        {
            // iterate through chars in first string comparing with all others until match not found 
            while (matching) 
            {
                // calculate the length of the current prefix for bounds checking
                int prefix_len = common_prefix.length();

                // break if the end of the string has been reached
                if (prefix_len == first_str.length())
                    break; 

                // get the next char from the first string for comparison
                char comparison_char = first_str.at(prefix_len); 

                for (int i = 1; i < strs.size(); i ++)
                {                
                    string current_str = strs[i];

                    // stop if the prefix is the same length as the current string
                    if (prefix_len == current_str.length())
                    {
                        matching = false;
                        break;
                    }

                    if (current_str.at(prefix_len) != comparison_char)
                    {
                        matching = false; 
                        break;
                    }
                }

                if (matching) // another character in the common prefix found
                    common_prefix += comparison_char;
            }
        }
        return common_prefix;
    }
};
