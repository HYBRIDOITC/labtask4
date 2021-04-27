// Lab Assignment
#include <iostream>
using namespace std;

class Sale {
private :
		double taxRate;
		double itemCost;
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
  
  return 0;
}
