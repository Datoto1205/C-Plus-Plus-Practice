//
//  Instruction.h
//  LeetCode Practice Report in C++
//
//  Created by 李政恩 on 17/07/2018.
//  Copyright © 2018 李政恩. All rights reserved.
//

#ifndef Instruction_h
#define Instruction_h

using namespace std;


void printOutParagraphOne() {
    int space = 118;
    string title = "LeetCode Practice Report in C++";
    cout << setw(space / 2) << title << endl;
    
    cout << "\n\tThis report, which reflect the result of the codes I wrote, was produced by the “main.c” file which located in “LeetCode Practice Report in C++” folder automatically.\n\n1. The language of the codes is C++, and the compiler I used is Xcode.\n2. The question I practiced here were found in LeetCode, a popular website of coding questions set in the US.\n\n\n\n<Question 1> (no. 771): Jewels and Stones\n(The details of this question is on the website at https://leetcode.com/problems/jewels-and-stones/description/ )\n\nComplier result: " << endl;
}

void printOutParagraphBetweenQuestionOneAndTwo() {
    cout << "\n\n<Question 2> (no. 657): Judge Route Circle\n(The details of this question is on the website at https://leetcode.com/problems/judge-route-circle/description/ )\n\nComplier result: \n" << endl;
}

void printOutParagraphBetweenQuestionTwoAndThree() {
    cout << "\n\n<Question 3> (no. 344): Reverse String\n(The details of this question is on the website at https://leetcode.com/problems/reverse-string/description/ )\n\nComplier result:  \n" << endl;
}

void printOutParagraphBetweenQuestionThreeAndFour() {
    cout << "\n\n<Question 4> (no. 2): Add Two Numbers\n(The details of this question is on the website at https://leetcode.com/problems/add-two-numbers/description/ )\n(Notice: You only could type three numbers in each number series, and you could only type single number each time, or the code would crash!)\n\nComplier result:\n" << endl;
}

void printOutParagraphBetweenQuestionFourAndFive() {
    cout << "\n\n\n<Question 5> (no. 1): Two Sum\n(The details of this question is on the website at https://leetcode.com/problems/two-sum/description/ )\n(Notice: If the target you type could not be satisfied, then the output would be the array [0, 0]!)\n\nComplier result:\n " << endl;
}

#endif /* Instruction_h */
