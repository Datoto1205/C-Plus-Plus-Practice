//
//  Value.h
//  Fundamental Practice
//
//  Created by 李政恩 on 12/07/2018.
//

#ifndef Value_h
#define Value_h

class value {
public:
    void statsOfCharacter(int mainProperty, int subProperty);
    int aggregateValue();
    
    int remainsNewsOfCharacter;
    
private:
    int valueOfAttack;
};


void value::statsOfCharacter(int mainProperty, int subProperty) {
    valueOfAttack = (4 * mainProperty + subProperty);
}


int value::aggregateValue() {
    remainsNewsOfCharacter = valueOfAttack * 1.5;
    return remainsNewsOfCharacter;
}
// 1. I could use "class" to create an object. Any variable which was declared in it would be called the property of this object.
// 2. I could declare function in the class, too.
// 3. I could divide the things in the class into two parts, which included public part and private part. The things in the former part could be called outside the class, but the things in the later part could not. This procedure is called encapsulation.
// 4. I need to form the function which was declared in the class outside the class, and remember that I need to type "className::functionName" to link the function.
// 5. Actually, even though class could inherit from another class, however we only use it to convey the function instead of value. If we want to convey the value between different classes, we need to use signal / slot.
// 6. Inheritance was sometimes used by sophiscated programmer, so this part was not involved in this file.
// Tutorials I referred to: https://pydoing.blogspot.com/2012/10/cpp-class.html

#endif /* Value_h */
