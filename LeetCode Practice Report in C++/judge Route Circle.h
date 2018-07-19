//
//  judge Route Circle.h
//  LeetCode Practice Report in C++
//
//  Created by 李政恩 on 18/07/2018.
//  Copyright © 2018 李政恩. All rights reserved.
//

#ifndef judge_Route_Circle_h
#define judge_Route_Circle_h

class judgeRouteCircle {
public:
    bool judgeCircle(string moves) {
        int verticalValue = 0;
        int horizontalValue = 0;
        
        for (int i = 0; i < moves.size(); i++) {
            switch (moves[i]) {
                case 'U':
                    verticalValue += 1;
                    break;
                    
                case 'D':
                    verticalValue -= 1;
                    break;
                    
                case 'R':
                    horizontalValue += 1;
                    break;
                    
                case 'L':
                    horizontalValue -= 1;
                    break;
                    
                default:
                    break;
            }
        }
        
        if (horizontalValue == 0 && verticalValue == 0) {
            return true;
        } else {
            return false;
        }
        
    }
};
    
#endif /* judge_Route_Circle_h */
