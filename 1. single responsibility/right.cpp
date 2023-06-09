#include <iostream> 
using namespace std;

class marker {
    public : 
        marker(int price, string name): price(price), name(name) {}

        int getprice() {
            return price;
        }
        
    private: 
        int price;
        string name;
};

class invoicePrice {

    public :
        invoicePrice(marker mk, int qu) : mk(mk), qu(qu) {}

        int calTotal() {
            return mk.getprice()*qu;
        }

    private: 
        marker mk;
        int qu; 
};

class invoiceDao {
    public : 
        invoiceDao(invoicePrice inP): inP(inP) {}

        void savetoDB() {}

    private : 
        invoicePrice inP;
};

class invoicePrint {
    public : 
        invoicePrint(invoicePrice inP): inP(inP) {}

        void print() {}

    private : 
        invoicePrice inP;
};

/*
1. calTotal logic can change
2. printing logic can change
3. storing logic can change

*/

int main() {

}

/*
    EVERY CLASS SHOULD HAVE ONLY ONE RESPONSIBILITY
    IT DOES NOT MEAN EACH CLASS WILL HAVE ONLY ONE FUNCTION
*/