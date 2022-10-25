//QUESTION:

//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//You can return the answer in any order.

//Answer:

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
    
    vector<int> sum;
    for(int i = 0; i < nums.size(); ++i){
        for(int j = i + 1; j < nums.size(); j++){ 
            if(nums[i] + nums[j] == target){      
                sum.push_back(i); 
                sum.push_back(j);
            }
        }
    }
     return sum;

    }
};

//This is the most simple solution
//It has an O(N^2) runtime

//Essentially this algorithm runs through the nested for loop first, looks for every possible solution
//If the sum of the first pass is equal to the next pass, it pushes the numbers back to the sum vector
//then the algorithm returns the sum

//horrible solution, should only be done in a pinch
