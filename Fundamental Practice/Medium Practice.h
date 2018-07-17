
//  Medium Practice.h
//
//  Created by Li Cheng-En on 2018.
//  Copyright © 2018 Li Cheng-En. All rights reserved.
//
//  ---------------------<Outline>---------------------
//  Array of Character                         <Row >
//  Declaration of Pointer                      <Row >
//  Calculation of Pointer                      <Row >
//  Array and Pointer                         <Row >
//  New & Delete & Pointer                       <Row >
//  STL idiom Vector                          <Row >
//  Return                                   <Row >
//  Import An Array                               <Row >

#ifndef Medium_Practice_h
#define Medium_Practice_h



// Array of Character
void practiceHowToUseArrayOfCharacter() {
    char myName[] = "John";
    char yourName[4];
    char hisName[] = " Michelle Cindy";
    
    cout << "\n\n\n" << myName << endl;
    strcpy(yourName, myName);
    cout << yourName << endl;
    strcat(yourName, hisName);
    cout << yourName << endl;
    cout << strlen(yourName) << endl;
}

void getAndCin() {
    char theSentenceYouWantToSayToYourMom[100];
    cout << "Please enter your hometown which need to less than 100 characters: ";
    gets(theSentenceYouWantToSayToYourMom);
    cout << "Mom, " << theSentenceYouWantToSayToYourMom << endl;
    
    char myHometown[100];
    cout << "Please enter your hometown which need to less than 100 characters without space: ";
    cin >> myHometown;
    cout << "Your hometwon is " << myHometown << endl;
    cout << endl;
}
// 1. I need to initialize the character in the beginning, and I could not declare a null character array without length.
// 2. After my complete declaration, I could not edit the character array afterward.
// 3. strcpy() function could be used to copy some characters into another character array, and strcat() function could be used to append/add some characters to the end of another character array.
// 4. strlen() function could be used to fetch the length of a character array.
// 5. cin() and gets() functions could both be used to ask user type data, but the latter one is not safe. Avoid to use it if you did not want to get any warning.



// Declaration of Pointer
void declarePointer() {
    int myGREScore = 321;
    float myAWAScoreOfGRE = 3.5;
    int *pointerVariableOfMyGREScore = &myGREScore;
    
    cout << "\nReal Value: " << myGREScore << endl;
    cout << "Address: " << pointerVariableOfMyGREScore << endl;
    cout << "Real Value: " << myAWAScoreOfGRE << endl;
    cout << "Address: " << &myAWAScoreOfGRE << endl;
    cout << "Extract the real value: " << *pointerVariableOfMyGREScore << endl;
    
    myGREScore = 325;
    cout << "\nExtract the new real value: " << *pointerVariableOfMyGREScore << endl;
    
    const int myTOEFLScore = 95;
    //myTOEFLScore = 100;
    //int *pointerOfMyTOEFLScore = &myTOEFLScore;
    const int *pointerOfMyTOEFLScore = &myTOEFLScore; /* Another constant pointer variable */
    //*pointerOfMyTOEFLScore = 100;
}
// 1. I could use "&" to fetch the address of the variable in the memory.
// 2. I could use "*" to get the real value of an address of the memory.
// 3. "*&variable" equal to "variable".
// 4. During the declaration of variables, when we use "*", it means that the variable we want to declare is a pointer of variable, a kind of variable which could store the address.
// 5. After we finish the declaration of pointer of variable, when we used "*" again, it means that we want to fetch the original value of the variable instead of the address of that variable.
// 6. If we use "const" to declare a variable as a constant variable, it means that we could not change its value anymore. Moreover, we also could not fetch its address, too. In order to solve this problem, we need to declare another constant pointer variable.



// Calculation of Pointer
void CalculationOfPointer() {
    int smallInteger = 1;
    double smallDouble = 0.9487;
    
    cout << "\n" << &smallInteger << endl;
    cout << &smallInteger + 1 << endl;
    cout << &smallInteger - 1 << endl;
    
    cout << "\n" << &smallDouble << endl;
    cout << &smallDouble + 1 << endl;
    cout << &smallDouble - 1 << endl;
}
//  We also could calculate the address of data. However, one unit would equal to different byte in memory. For example, one unit equal to 4 bytes if we do the calculation to an integer; but this result would be changed to 8 bytes if the target of our calculation is a double.



// Array and Pointer
void ArrayAndPointer() {
    int specialArray[5] = {100, 200, 300, 400, 500};
    
    cout << "\nThe address of array is: " << specialArray << endl;
    for (int i = 0; i < 5; i++) {
        cout << "The address of no." << i << " element is: " << &specialArray[i] << "\t";
        cout << "The address of no." << i << " element is: " << &specialArray[0] + i << endl;
    }
    
    int *pointerOfSpecialArray = specialArray;
    for (int i = 0; i < 5; i++) {
        cout << *(pointerOfSpecialArray + i) << "\t";
        cout << pointerOfSpecialArray[i] << "\t";
        cout << *(specialArray + i) << "\t";
        cout << specialArray[i] << endl;
    }
}
// 1. We not only could use "&arrayName[i]" to fetch the address of each element, but we also could use the idea of calculation of pointer to get the address of each element in the array.
// 2. We not only could apply the idea of array to get the value of each element in the array, but we also could apply the idea of pointer to do the same thing.



// New & Delete & Pointer
void applicationOfNewAndDeleteAndPointer() {
    int *pointer = new int;
    cout << "The address of this new area with int type is: " << pointer << endl;
    *pointer = 100;
    cout << "The value of the data which was stored in this area is: " << *pointer << endl;
    delete pointer;
    
    int *innovativeArray = new int[10];
    for (int j = 0; j < 10; j++) {
        *(innovativeArray + j) = j * 100 + 50;
        cout << *(innovativeArray + j) << "\t";
    }
    cout << endl;
    delete [] innovativeArray;
}
// 1. I could use "new typeOfData" to create an area with a specific type of data in the memory. The type of this area is an address. For now, the value of this area is 0. Afterward, I could assign a new value to this area.
// 2. Use "*" on pointer could extract its value.
// 3. After we used a variable, and if we did not need it anymore, we should use "delete nameOfPointer" to delete this variable and release more area in the memory.
// 4. We not only could apply the idea of new & delete on the general variable, but we also could do it on the array.



// STL idiom Vector
void STLVector() {
    vector<int> STLVector;
    
    for (int i = 0; i < 10; i++) {
        STLVector.push_back(i * 10 + 1);
    }
    
    cout << "\n\nThe result of the vector through the idea of object-oriented: ";
    for (vector<int>::iterator it = STLVector.begin(); it != STLVector.end(); it++) {
        cout << *it << "\t";
    }   /* The code I could use to show each element in the vector. */
    
    
    
    vector<int> anotherVector = {18, 15, 1, 7, 28, 13, 8, 6, 14, 5, 2, 22};
    sort(anotherVector.begin(), anotherVector.end());
    cout << "\nThe result of anotherVector is: ";
    for (int f = 0; f < anotherVector.size(); f++) {
        cout << anotherVector[f] << "\t";
    }
    cout << endl;
    
    reverse(anotherVector.begin(), anotherVector.end());
    cout << "The reverse result of anotherVector is: ";
    for (int f = 0; f < anotherVector.size(); f++) {
        cout << anotherVector[f] << "\t";
    }
    cout << endl;
}
// 1. I need to type "#include <algorithm>" first.
// 2. I not only could use the idea of array to assign elements into the vector, but I aslo could apply the idea of object-oriented to do the same thing.
// 3. I could use ".push_back(theValueOfAnElement)" to add element into vector.
// 4. I could use sort(.begin(); .end()) function to sort the elements in the vector.
// 5. I could use reverse (.begin(); .end()) function to reverse the order of the elements in the vector.
    


// Return
int returnInteger(int theNumberOfPencilYouHave) {
    return theNumberOfPencilYouHave + 1;
}

int *returnPointerOfInteger(int theNumberOfEraserYouHave) {
    cout << &theNumberOfEraserYouHave;
    int *thePointerOftheNumberOfEraserYouHave = &theNumberOfEraserYouHave + 1;
    
    return thePointerOftheNumberOfEraserYouHave;
}

string createAString() {
    string newString = "I Like You!";
    cout << "\nThe address of original string is: " << &newString;
    return newString;
}

void useTheString() {
    string fetchTheString;
    fetchTheString = createAString();
    
    cout << "\nThe address of this new string is: " << &fetchTheString;
}
// 1. A function could not only return general variable, but it also could return a pointer, the prerequisite is that I need to use "*" to declare this function as a pointer function.
// 2. When we use a variable in the function after another function returns a variable, the address of the variable would be changed.



// Import An Array
int* createAnArray() {
    int *soGaArray = new int[5];
    
    for (int i = 0; i < 5; i++) {
        soGaArray[i] = i * 10;
    }
    
    return soGaArray;
}

void importAnArray(int* parameterArray) {
    cout << endl;
    for (int i = 0; i < 5; i++) {
    cout << parameterArray[i] << "\t";
    }
    cout << endl;
}
// If I want to import an array into my function, the first thing I need to do is to use pointer to create an array. Afterward, I also need to use pointer as the parameter of the function which I want to import an array into.



#endif /* Medium_Practice_h */
