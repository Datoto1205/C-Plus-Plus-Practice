
//  two Sum.h
//  LeetCode Practice Report in C++
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#ifndef two_Sum_h
#define two_Sum_h



class returnTwoNumber {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resultVector(2);
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    resultVector[0] = i;
                    resultVector[1] = j;
                }
            }
        }
        
        return resultVector;
    }
};



#endif /* two_Sum_h */
