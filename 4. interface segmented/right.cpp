#include <iostream>
using namespace std;

class waiterAbstract {
    public : 
        virtual void serveCustomers () = 0;
        virtual void takeOrders () = 0;
};

class cookAbstract {
    public : 
        virtual void decideMenu() = 0;
        virtual void cookFood() = 0;
};

int main() {}