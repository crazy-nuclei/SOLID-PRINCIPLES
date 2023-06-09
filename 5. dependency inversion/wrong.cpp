#include <iostream>
using namespace std;

class keyboard {

};

class wiredKeyboard : public keyboard {

};

class wirelessKeyboard : public keyboard {

};

class macbook {
    public :

    private : 
        wiredKeyboard* k;
};

/* Instead of having this wiredkeyboard we should have the interface keyboard here */

int main() {}

/*
 classes should depend on interfaces rather than concrete classes 
*/