
//  main.cpp
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <memory>
#include "Basic Practice.h"
#include "Medium Practice.h"
#include "Hard Practice.h"
#include "Value.h"
using namespace std;



int main(int argc, const char * argv[]) {
    
    helloWorld();
    declaration();
    examineTypeOfVariable();
    fetchTheRemainderAndChangeTheTypeOfVariable();
    //cinAndIf();   /* I disable this code because I did not want to type data. Please activate this code if you want to check this code. */
    
    ninetyNineMultiplicationTable();
    PracticeHowToUseSwitchAndBool();
    declarationOfArray();
    declarationOfTwoDimensionArray();
    PracticeHowToUseVector();
    practiceHowToUseString();
    
    practiceHowToUseArrayOfCharacter();
    //getAndCin();   /* I disable this code because I did not want to type data. Please activate this code if you want to check this code. */
    cout << "\n" << volumeOfACuboid(3, 4, 5) << endl;
    cout << volumeOfACuboid(6) << endl;
    declarePointer();
    CalculationOfPointer();
    
    ArrayAndPointer();
    applicationOfNewAndDeleteAndPointer();
    
    /* Class Practice */
    value myDarkKnight;
    myDarkKnight.statsOfCharacter(480, 120);
    //myDarkKnight.valueOfAttack;   /* Private could not be called. */
    cout << "\n" << myDarkKnight.aggregateValue() << endl;
    
    STLVector();
    cout << returnInteger(5) << endl;
    int *pointerOfEraser = returnPointerOfInteger(16);
    cout << pointerOfEraser << endl;
    useTheString();
    importAnArray(createAnArray());
    
    practiceAutoPTR();
    practiceUseTheEnum();
    
    //freopen("Result of Fundamental Practice of C++.txt", "w", stdout);   /* I disable this code to show the compiling result in the console, please activate this code if you want to print the following string into a .txt file. */
    cout << "test" << endl;
    
    return 0;
}
//  I must write "using namespace std" in the beginning of the codes in c++. Someone says that I could write "#include <iostream.h>" to involve the former code, but it did not work in Xcode.



