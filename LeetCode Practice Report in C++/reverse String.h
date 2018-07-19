//
//  reverse String.h
//  LeetCode Practice Report in C++
//
//  Created by 李政恩 on 18/07/2018.
//  Copyright © 2018 李政恩. All rights reserved.
//

#ifndef reverse_String_h
#define reverse_String_h

using namespace std;

class reverseString {
public:
    string functionOfReverseString(string originalString);
};

string reverseString::functionOfReverseString(string originalString) {
    string resultString;
    int lengthOfOriginalString = originalString.size();
    
    for (int i = lengthOfOriginalString; i >= 0; i--) {
    resultString += originalString[i];
    }
    
    return resultString;
}

#endif /* reverse_String_h */
