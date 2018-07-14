//
//  Hard Practice.h
//  Fundamental Practice
//
//  Created by 李政恩 on 14/07/2018.
//

#ifndef Hard_Practice_h
#define Hard_Practice_h

// Auto PTR
void practiceAutoPTR() {
    auto_ptr<int> PTRInteger (new int(50));
    auto_ptr<string> PTRString (new string("My age is: "));
    
    cout << "\n" << *PTRString << *PTRInteger << endl;
    
    auto_ptr<double> PTRDouble;
    cout << PTRDouble.get() << endl;
    PTRDouble.reset(new double(3.14));
    cout << *PTRDouble << endl;
    cout << PTRDouble.release() << endl;
}
// 1. We always forget to add "delete" when we use "new" to declare the variables. As a result, we could use "auto_ptr<typeOfVariable> nameOfVariable (new typeOfVariable(valueOfVariable))" to declare a new variable. If we use this way, we did not need to add "delete" anymore. However, we need to add "*" here if we want to extract the value of the variable.
// 2. After we declared a null new variable through the way of auto_ptr, we could use .get() function to fetch its value. We not only could use .reset() function to assign a new value to it, but we also could use .release() function to delete its value.



// Enumeration
void practiceUseTheEnum() {
    enum body{head = 2, hand = 5, leg = 10};
    
    body theMostImportantPartOfMyBody = head;
    cout << theMostImportantPartOfMyBody << endl;;
    body theOrganICouldUseToMoveTheObject = hand;
    cout << theOrganICouldUseToMoveTheObject << endl;;
    body theOrganICouldUseToMoveMyBody = leg;
    cout << theOrganICouldUseToMoveMyBody + 2 << "\n" << endl;;
}
// 1. We could use enum to declare several variables beforehand.
// 2. After we declared the enum, we could use "nameOfEnum newName = elementInTheEnum" to fetch the element in the enum.

#endif /* Hard_Practice_h */
