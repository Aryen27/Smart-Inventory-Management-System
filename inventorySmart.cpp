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
    int product_id, quantity;
    char product_name[50];

public:
    // Add Product
    // Remove Product
    // Display Product
};

int main()
{
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Add products here"<<endl;
            break;

        case 2:
            cout << "Display products here"<<endl;
            break;

        default:
            cout << "Enter a valid choice" << endl;
            break;
        }
    }
    return 0;
}