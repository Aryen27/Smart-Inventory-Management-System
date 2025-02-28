#include <iostream>
#include <string>
#include <fstream>
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
    cout << "Enter 5 to search product" << endl;
    cout << "------------------------------" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;
    return choice;
}

class Product{
private:
    int product_id, quantity, price;
    string product_name;
    static int generateID;

public:
    Product(): Product("It which must not be named!", 0, 0){} //Constructor Delegation

    Product( string name, int quantity, int price ): product_id(++generateID), quantity(quantity), price(price), product_name(name)
    {}

    // Add Product
    void addProduct(){
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

    void findProduct(int id){
        
    }

    void findProduct(string name){
        
    }
};



int Product::generateID=100;

int main()
{
    int choice, index=20;
    

    Product *prods[40];
    
    // Add sample data

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:{
            if(index < 40){
                prods[index] = new Product();
                prods[index]->addProduct();
                index++;
            }
            break;
        }

        case 2:{
            for (int i = 0; i < index; i++){
                prods[i]->display();
            }
            break;
        }
        case 3:
            // p1.setProductName();
            break;

        case 4:
            // p1.setQuantity();
            break;

        case 5:
            // p1.setPrice();
            break;

        case 6:
            cout << "Search function is coming soon...." << endl;
            break;

        default:
            cout << "Enter a valid choice" << endl;
            break;
        }
    }

    for (int i = 0; i < 40; i++){
        delete prods[i];
        prods[i] = NULL;
    }
        return 0;
}