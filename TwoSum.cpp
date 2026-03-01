/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // hold local int nums_length to avoid calling .length function repeatedly
        int nums_length = nums.size();

        // validity check
        if ((2 <= nums_length) && (nums_length <= pow(10,4)))
        {
            // sum i and j and compare with target
            // if sum(i,j) <> target then Inc(j) in the forloop
            // if j end of nums then Inc(i)

           for (int i = 0; i < nums_length; i++)
           {
                int first_num = nums[i];                
                // validity check
                if((-pow(10,9) <= first_num) && (first_num <= pow(10,9)))
                {
                    // compare with all other values in nums
                    for (int j = i + 1; j < nums_length; j++)
                    {
                        int second_num = nums[j];
                        // ensure we aren't using the same element twice and second_num is in the valid range
                        if ((i != j) && (-pow(10,9) <= second_num) && (second_num <= pow(10,9))) 
                        {                            
                           if (target == (first_num + second_num))
                           {
                              // return the indices of the two values that produce the target sum
                              return {i, j};
                           }
                        }
                    }
                }
            }
        }
        return{}; // no valid solution found
    }
};
