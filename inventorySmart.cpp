#include <iostream>
#include <string>
using namespace std;

int menu(){
    int choice;
    cout << "------------------------------" << endl;
    cout << "Enter 0 to exit" << endl;
    cout << "Enter 1 to add products" << endl;
    cout << "Enter 2 to display products" << endl;
    cout << "------------------------------" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;
    return choice;
}

class Product{
private:
    int product_id, quantity, price;
    string product_name;

public:
    // Add Product

    // Display Product
    void display(){
        cout << "Product Id:" << product_id << endl;
        cout << "Product Name:" << product_name << endl;
        cout << "Quantity:" << quantity << endl;
        cout << "Price:" << price << endl;
    }
    // Remove Product
};

int main()
{
    int choice;

    Product p1;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Add products here"<<endl;
            break;

        case 2:
            p1.display();
            break;

        default:
            cout << "Enter a valid choice" << endl;
            break;
        }
    }
    return 0;
}