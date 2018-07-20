
//  main.cpp
//  LeetCode Practice Report in C++
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <memory>

#include "Instruction.h"
#include "jewels and Stones.h"
#include "judge Route Circle.h"
#include "reverse String.h"
#include "add Two Number.h"
#include "two Sum.h"

using namespace std;



int main() {
    freopen("output of LeetCode Practice Report in C++.txt", "w", stdout);
    printOutParagraphOne();
    
    int resultOfNumberOfJewels[3];
    JewelsInStones caseOfJewelsAndStones;
    resultOfNumberOfJewels[0] = caseOfJewelsAndStones.numJewelsInStones("aA", "aAAbbbb");
    resultOfNumberOfJewels[1] = caseOfJewelsAndStones.numJewelsInStones("z", "ZZ");
    resultOfNumberOfJewels[2] = caseOfJewelsAndStones.numJewelsInStones("abdig", "alfkreklnhjksrkerlawk");
    for (int i = 0; i < 3; i++) {
        cout << "The number of the jewels in that set of stones: " << resultOfNumberOfJewels[i] << endl;
    }

    printOutParagraphBetweenQuestionOneAndTwo();
    
    char resultOfBool[3];
    judgeRouteCircle caseOfMoves;
    resultOfBool[0] = caseOfMoves.judgeCircle("UD");
    resultOfBool[1] = caseOfMoves.judgeCircle("LL");
    resultOfBool[2] = caseOfMoves.judgeCircle("LUDRLDULRRURLRLDRLDU");
    for (int i = 0; i < 3; i++) {
        if (resultOfBool[i] == 1) {
            cout << "Whether the robot is on the original position: Yes" << endl;
        } else {
            cout << "Whether the robot is on the original position: No" << endl;
        }
    }
    
    printOutParagraphBetweenQuestionTwoAndThree();
    
    reverseString CaseOfString;
    cout << CaseOfString.functionOfReverseString("hello") << endl;
    cout << CaseOfString.functionOfReverseString("god") << endl;
    cout << CaseOfString.functionOfReverseString("net") << endl;
    
    printOutParagraphBetweenQuestionThreeAndFour();
    
    SumOfTwoNumber caseOfNumber;
    int inputIntegerDigitElementArrayOne[3] = {2, 4, 3};
    int inputIntegerDigitElementArrayTwo[3] = {5, 6, 4};
    for (int i = 2; i >= 0; i--) {
        if (i > 0) {
            cout << (caseOfNumber.addTwoNumbers(inputIntegerDigitElementArrayOne, inputIntegerDigitElementArrayTwo))[i] << " -> ";
        } else {
            cout << (caseOfNumber.addTwoNumbers(inputIntegerDigitElementArrayOne, inputIntegerDigitElementArrayTwo))[i] << endl;
        }
    }
    
    printOutParagraphBetweenQuestionFourAndFive();
    
    vector<int> setOfIntegers;
    setOfIntegers = {2, 7, 11, 15};
    returnTwoNumber caseOfTwoNumber;
    cout << (caseOfTwoNumber.twoSum(setOfIntegers, 9))[0] << ", " << (caseOfTwoNumber.twoSum(setOfIntegers, 9))[1] << endl;
    
    printOutLastParagraph();
    
    return 0;
}
