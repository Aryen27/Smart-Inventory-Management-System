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



void addData(Product **p){
    p[0] = new Product("Football",5, 699);
    p[1] =new Product("Basketball", 3, 799);
    p[2] =new Product("Tennis Racket", 8, 1200);
    p[3] =new Product("Baseball Bat", 6, 950);
    p[4] =new Product("Soccer Ball", 10, 499);
    p[5] =new Product("Hockey Stick", 4, 1500);
    p[6] =new Product("Swimming Goggles", 12, 350);
    p[7] =new Product("Dumbbells", 15, 1299);
    p[8] =new Product("Yoga Mat", 20, 799);
    p[9] =new Product("Resistance Bands", 25, 299);
    p[10] =new Product("Skipping Rope", 30, 199);
    p[11] =new Product("Running Shoes", 7, 2499);
    p[12] =new Product("Fitness Tracker", 5, 3500);
    p[13] =new Product("Pilates Ring", 14, 899);
    p[14] =new Product("Kettlebells", 9, 1799);
    p[15] =new Product("Balance Ball", 16, 699);
    p[16] =new Product("Ski Poles", 3, 2499);
    p[17] =new Product("Snowboard", 2, 12999);
    p[18] =new Product("Inline Skates", 4, 3500);
    p[19] =new Product("Skateboard", 11, 899);
}


int main()
{
    int choice, index=20;
    
    
    Product *prods[40];
    addData(prods);
    
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