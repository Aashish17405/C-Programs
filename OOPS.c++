#include <iostream>
using namespace std;

class Pen {
public:
  // class data
  string color;
  string brand;
  int price;
  Pen(string brand, string color, int price) {
      brand = "camlin";
      color = "red";
      price = 20;
  }

  void write() {
      cout << "Writing with the " << color << " " << brand << " pen." << endl;
  }
  void showDetails() {
      cout << "Brand: " << brand << endl;
      cout << "Color: " << color << endl;
      cout << "Price: " << price << " rupees" << endl;
  }
};

int main() {
  Pen pen1;
  pen1.write()
  return 0; 
}
