//
//  Medium Practice.h
//  Fundamental Practice
//
//  Created by 李政恩 on 11/07/2018.
//

#ifndef Medium_Practice_h
#define Medium_Practice_h

using namespace std;



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
// I need to initialize the character in the begining, and I could not declare a null character array without length.
// After my complete declaration, I could not edit the character array afterward.
// strcpy() function could be used to copy some characters into another character array, and strcat() function could be used to append/add some characters to the end of another character array.
// strlen() function could be used to fetch the length of an character array.
// cin() and gets() functions could both be used to ask user type data, but the later one is not safe. Avoid to use it if you did not want to get any warning.





#endif /* Medium_Practice_h */
