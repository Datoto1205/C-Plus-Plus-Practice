
//  add Two Number.h
//  LeetCode Practice Report in C++
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#ifndef add_Two_Number_h
#define add_Two_Number_h



class SumOfTwoNumber {
public:
    
    char* addTwoNumbers(int l1[3], int l2[3]) {
        
        int ValueOfFirstNode = l1[2] * 100 + l1[1] * 10 + l1[0];
        int ValueOfSecondNode = l2[2] * 100 + l2[1] * 10 + l2[0];
        int valueOfSum = ValueOfFirstNode + ValueOfSecondNode;
        
        char resultNumberWithCharacterType[3];
        for (int i = 0; i < 3; i++) {
            resultNumberWithCharacterType[i] = ((to_string(valueOfSum)).c_str())[i];
        }
        
        return resultNumberWithCharacterType;
    }
};



#endif /* add_Two_Number_h */
