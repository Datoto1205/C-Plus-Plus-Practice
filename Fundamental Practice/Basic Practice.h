
//  Basic Practice.h
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//
//  ---------------------<Outline>---------------------
//  Hello World                                <Row 29>
//  Declaration                                <Row 39>
//  Type of Variables                          <Row 61>
//  % & Change The Type of Variable            <Row 72>
//  Ask User to Type the Data & If             <Row 91>
//  For-loop                                  <Row 125>
//  Switch & True and False                   <Row 143>
//  Array with Single Dimension               <Row 169>
//  Array with Two-dimensions                 <Row 183>
//  Vector (1)                                <Row 220>
//  String                                    <Row 262>
//  Parameters & Overloaded Function          <Row 303>

#ifndef Basic_Practice_h
#define Basic_Practice_h

using namespace std;



// Hello World
void helloWorld() {
    cout << "Hello World!" << endl;
    cout << "Hello World and Change the row! \n" << endl;
}
// 1. I could use "cout" to print things in the console, and I could use "<<" to separate string and the variables.
// 2. If we use "\n" to change the row, some bugs would occur when our codes were more complex. Therefore, I had better use it only in C, and I should use "endl" at the end of each row instead.



// Declaration
void declaration() {
    int numberOfMyHead = 1;
    int numberOfMyShoulder(2);
    const double pi = 3.141592653;
    double e(2.7182818285);
    char firstWordInEnglish = 'A';
    char lastWordInEnglish('Z');
    
    cout << "I had " << numberOfMyHead << " head, but I had " << numberOfMyShoulder << " shoulder!" << endl;
    cout << "The value of pi is around " << pi << " , and that of e is around " << e << "! " << endl;
    cout << "I need to memorize all of the English character from " << firstWordInEnglish << " to " << lastWordInEnglish << " if I want to speak in English very well!" << endl;
    
    numberOfMyHead = 3;
    cout << "Chimera had " << numberOfMyHead << " heads instead!" << endl;
    //pi = 5;   /* Activate this code would occur warning! */
}
// 1. I could use several ways to declare the variables, but the way is similar to that in C.
// 2. If I use "const" during the declaration, it means that I could not change its value afterward.



// Type of Variables
void examineTypeOfVariable() {
    cout << "\nint in the memory account for " << sizeof(int) << " byte!" << endl;
    cout << "double in the memory account for " << sizeof(double) << " byte!" << endl;
    cout << "float in the memory account for " << sizeof(float) << " byte!" << endl;
    cout << "character in the memory account for " << sizeof(char) << " byte! \n" << endl;
}
// sizeof() function could be used to get the size of particular type of variable in the memory.



// % & Change The Type of Variable
void fetchTheRemainderAndChangeTheTypeOfVariable() {
    int originalNumber = 1;
    cout << originalNumber / 3 << endl;
    cout << static_cast<double>(originalNumber) / 3 << endl;
    cout << originalNumber % 3 << endl;
    
    /* Get the Random Number */
    int verySmallNumber = 2147483647;
    int randomNumberBetweenOneAndOneHundred;
    randomNumberBetweenOneAndOneHundred = verySmallNumber % 100;
    cout << randomNumberBetweenOneAndOneHundred << endl;
}
// 1. % could be used to get the remainder.
// 2. "static_cast<target type>(original number)" function could be used to change the type of variable.
// 3. The number could not excess 2147483647, or bugs would occur.



// Ask User to Type the Data & If
void cinAndIf() {
    int age;
    string name;
    cout << "Please type your name: ";
    cin >> name;
    cout << "Please type the number of your age: ";
    cin >> age;
    
    if (age > 2) {
        cout << name << " is " << age << " years old." << endl;
    } else if ( age > 0) {
        cout << name << " is " << age << " year old." << endl;
    } else {
        cout << "Please type your correct age!" << endl;
    }
    
    
    int moneyInYourDepositAccount;
    cout << "Please Type the amount of money in your deposit account: ";
    cin >> moneyInYourDepositAccount;
    
    if (moneyInYourDepositAccount > 3000) {
        cout << "You could buy the nutual funds!" << endl;
    } else if (moneyInYourDepositAccount > 1000) {
        cout << "You could buy the service of robot advisory!" << endl;
    } else {
        cout << "You had better earn more money!" << endl;
    }
}
// "cin >>" could be used to ask users to type some data. Fortunately, I did not need to assign the type of variable anymore.



// For-loop
void ninetyNineMultiplicationTable() {
    for (int i = 1; i < 10; i++) {
        for (int j = 2; j < 11; j++) {
            if (j == 9) {
                cout << j << " * " << i << " = " << i*j << "\t\n" << endl;
            } else if (j == 10) {
                continue;
            }
            else {
                cout << j << " * " << i << " = " << i*j << "\t";
            }
        }
    }
}



// Switch & True and False
void PracticeHowToUseSwitchAndBool() {
    char levelOfMyEnglishAbility = 'A';
    switch (levelOfMyEnglishAbility) {
        case 'A':
            cout << "Great!" << endl;
            break;
            
        case 'B':
            cout << "Good job! " << endl;
            break;
            
        default:
            break;
    }
    
    int numberOfPeopleInMyFamily = 4;
    cout << (numberOfPeopleInMyFamily > 5) << endl;
    cout << (numberOfPeopleInMyFamily > 3) << endl;
    cout << (numberOfPeopleInMyFamily >=4 ? "Boisterous" : "Slient") << endl;
}
// 1. In C++, true would return 1, and false would return 0.
// 2. "(condition ? the result of true : the result of false)" could be used to simplify if-loop.



// Array with Single Dimension
void declarationOfArray() {
    int integerArray[] = {0};
    double doubleArray[] = {0.0, 0.1, 0.3, 0.5, 0.88, 0.973};
    char charArray[] = {'\0'};
    bool boolArray[] = {false};
    
    integerArray[0] = 12;
    cout << integerArray[0] << endl;
    cout << sizeof(doubleArray) / sizeof(doubleArray[0]) << endl; /* If we did not declare the number of array in the beginning, we could use this way to calculate the number of elements in an array. */
}



// Array with Two-dimensions
void declarationOfTwoDimensionArray() {
    int numberOfRow = 3;
    int numberOfColumn = 4;
    int integerArrayWithTwoDimension[numberOfRow][numberOfColumn];
    cout << endl;
    for (int i = 0; i < numberOfRow; i++) {
        for (int j = 0; j < numberOfColumn; j++) {
            integerArrayWithTwoDimension[i][j] = (i + 1)*(j + 1);
            if (j == numberOfColumn - 1) {
                cout << integerArrayWithTwoDimension[i][j] << "\t" << endl;
            } else {
                cout << integerArrayWithTwoDimension[i][j] << "\t";
            }
        }
    }
    cout << endl;
    
    
    int anotherArray[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2) {
                cout << anotherArray[i][j] << endl;
            } else {
                cout << anotherArray[i][j] << "\t";
            }
        }
    }
}



// Vector (1)
void PracticeHowToUseVector() {
    vector<int> firstVectorIDeclare(10);
    vector<int> secondVectorIDeclare(10, 6);
    int lenthOfVector;
    
    lenthOfVector = firstVectorIDeclare.size();
    cout << "\n" << lenthOfVector << "\n" << endl;
    
    for (int i = 0; i < lenthOfVector; i++) {
        firstVectorIDeclare[i] = i * 10 + 1;
        cout << firstVectorIDeclare[i] << "\t";
    }
    
    cout << endl;
    for (int j = 0; j < secondVectorIDeclare.size(); j++) {
        cout << secondVectorIDeclare[j] << "\t";
    }
    
    
    
    int JohnIntegerArray[] ={1, 2, 3, 4, 5};
    vector<int> JohnIntegerVector(JohnIntegerArray+1, JohnIntegerArray+5);   /* Assign the elements of vector from an array. */
    vector<int> CindyIntegerVector;   /* Declare a null vector. */
    CindyIntegerVector = JohnIntegerVector;   /* Assign the elements of vector from another vector. */
    cout << "\n" << endl;
    
    for (int m = 0; m <= JohnIntegerVector.size(); m++) {
        cout << JohnIntegerArray[m] << "\t";
    }
    cout << "\n" << endl;
    for (int n = 0; n <= JohnIntegerVector.size(); n++) {
        cout << JohnIntegerArray[n] << "\t";
    }
}
// 1. I need to type "#include <vector>" first.
// 2. I coule type "vector<type> nameOfVector(numberOfElements, eachInitialElement)" to declare a vector, "eachInitialElement" is optional.
// 3. I could use ".size()" function to fetch the length of vector.
// 4. I could assign the elements of vector from an array & declare a null vector & assign the elements of vector from another vector in C++.



// String
void practiceHowToUseString() {
    string firstString;
    string secondString("Hello World");
    firstString = secondString;
    
    cout << "\n\n\nThe content of secondString is \"" << secondString << "\", and its length is " << secondString.size() << "." << endl;
    cout << "The content of firstString is \"" << firstString << "\", too." << endl;
    
    char characterArray[] = "Tina";
    firstString = characterArray;
    cout << "The content of firstString is \"" << firstString << "\"." << endl;
    //characterArray = secondString;   /* Prohibition! */
    cout << firstString + " " + secondString << endl;
    
    string tellHerMyThinking("I Love Her");
    cout << endl;
    for (int i = 0; i <= tellHerMyThinking.length(); i++) {
        cout << tellHerMyThinking[i] << endl;
    }
    
    firstString = firstString.assign(secondString, 0, 7);
    cout << firstString << endl;
    firstString = firstString.append(tellHerMyThinking, 0, 5);
    cout << firstString << endl;
    cout << firstString.find("I", 0) << endl;
    cout << firstString.insert(7, "indy, ") << endl;
    cout << firstString.insert(18, "e another girl! ") << endl;
}
// 1. I need to type "#include <string>" first.
// 2. String is a different kind of type of data in C++, it could be used to store several words.
// 3. String could be assigned new value & string directly, and we also could assign some characters from the array of character to a string. However, we could not assign new data from string to the array of character. Therefore, I had better use string instead of char[].
// 4. We also could declare a null string.
// 5. We could use "stringName[i]" to extract the particular character from the string.
// 6. .assign() function could be used to create string from another string.
// 7. .append() function could be used to append/add new string in the end of original string.
// 8. .find() function could be used to find a particular character in the original string, and it would return the order which the function found.
// 9. .insert() function could be used to append/add new string in the particular place of original string.



// Parameters & Overloaded Function
int volumeOfACuboid(int length, int width, int height) {
    return length*width*height;
}

int volumeOfACuboid(int lendOfOneSide) {
    return lendOfOneSide*lendOfOneSide*lendOfOneSide;
}
// We could declare two functions with the same name. However, the parameters of functions should be different so that the system could distinguish which function should it use. This mechanism is called "overloaded function".



#endif /* Basic_Practice_h */
