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

class invoice {

    public :
        invoice(marker mk, int qu) : mk(mk), qu(qu) {}

        int calTotal() {
            return mk.getprice()*qu;
        }

        void printInvoice() {}

        void savetoDB() {}

    private: 
        marker mk;
        int qu; 
};

/*
1. calTotal logic can change
2. printing logic can change
3. storing logic can change

*/

int main() {

}