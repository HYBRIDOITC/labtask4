// Lab Assignment
#include <iostream>
using namespace std;

class Sale {
	private :
		double taxRate;
		double itemCost;
	public:
  	Sale();
  	Sale(double,double);
    double getTax() {
		return taxRate*itemCost;
	}
};

Sale::Sale () {
	taxRate = 0.0;
  	itemCost = 0.0;
}

Sale::Sale (double cost, double rate) {
    taxRate = rate;
    itemCost = cost;
}

int main () {
  Sale sale2();
  Sale sale1 (3.0,4.0);
  cout << "Tax 1 Must be 12: " << sale1.getTax()<<endl;
  return 0;
}
