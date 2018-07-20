
//  reverse String.h
//  LeetCode Practice Report in C++
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
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
