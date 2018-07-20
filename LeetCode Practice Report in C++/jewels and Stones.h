
//  jewels and Stones.h
//  LeetCode Practice Report in C++
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#ifndef jewels_and_Stones_h
#define jewels_and_Stones_h



class JewelsInStones {
public:
    int numJewelsInStones(string J, string S) {
        int numberOfJewels = 0;
        
        for (int i = 0; i < J.size(); i++) {
            for (int m = 0; m < S.size(); m++) {
                if (J[i] == S[m]) {
                    numberOfJewels += 1;
                }
            }
        }
        
        return numberOfJewels;
    }
};



#endif /* jewels_and_Stones_h */
