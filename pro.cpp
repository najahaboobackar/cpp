#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Product {
public:
    string productName;
    double price;

    Product(const string& name = "", double p = 0.0)
        : productName(name), price(p) {}
};

int main() {
    // Create a Product object
    Product product("dumbel", 1000);

    // Write the object to a binary file
    ofstream outFile("product.bin", ios::binary | ios::out);
    if (!outFile) {
        cerr << "Error opening file product.bin" << endl;
        return 1;
    }

    outFile.write((char*)&product, sizeof(product));

    outFile.close();

    // Read the object from the binary file
    Product readProduct;
    ifstream inFile("product.bin", ios::binary | ios::in);
    if (!inFile) {
        cerr << "Error opening file product.bin" << endl;
        return 1;
    }

    inFile.read((char*)&readProduct, sizeof(readProduct));

    inFile.close();

    // Display the object
    cout << "Product Name: " << readProduct.productName << endl;
    cout << "Price: " << readProduct.price << endl;

    return 0;
}
