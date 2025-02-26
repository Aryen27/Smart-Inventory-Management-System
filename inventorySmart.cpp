#include <iostream>
#include <string>
using namespace std;

int menu(){
    int choice;
    cout << "------------------------------" << endl;
    cout << "Enter 0 to exit" << endl;
    cout << "Enter 1 to add products" << endl;
    cout << "Enter 2 to display products" << endl;
    cout << "Enter 3 to update product name" << endl;
    cout << "Enter 4 to update product quantity" << endl;
    cout << "Enter 5 to update product price" << endl;
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
    Product(): product_id(0), quantity(0), price(0), product_name("It which must not be named!")
    {}

    // Add Product
    void addProduct(){
        cout << "Enter Product Id:" <<  endl;
        cin>>product_id;
        cout << "Enter Product Name:"<< endl;
        cin.ignore();
        getline(cin, product_name);
        cout << "Enter Quantity:" << endl;
        cin >> quantity;
        cout << "Enter Price:" << endl;
        cin >> price;
        cout << "Product Added!" << endl;
    }

    // Display Product
    void display(){
        cout << "Product Id:" << product_id << endl;
        cout << "Product Name:" << product_name << endl;
        cout << "Quantity:" << quantity << endl;
        cout << "Price:" << price << endl;
    }
    // Update Product detail
    void setProductName(){
        cout << "Enter the new name of the product:" << endl;
        cin.ignore();
        getline(cin, this->product_name);
    }
    
    void setQuantity(){
        cout << "Enter the updated quantity:" << endl;
        cin >> quantity;
    }

    void setPrice(){
        cout << "Enter the updated price:" << endl;
        cin >> price;
    }
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
            p1.addProduct();
            break;

        case 2:
            p1.display();
            break;

        case 3:
            p1.setProductName();
            break;

        case 4:
            p1.setQuantity();
            break;

        case 5:
            p1.setPrice();
            break;

        default:
            cout << "Enter a valid choice" << endl;
            break;
        }
    }
    return 0;
}