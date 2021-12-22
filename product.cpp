#include <iostream>

class Product {
protected:
    //Fields
    std::string name;
    int sku;
    int inventory;
    double price;

public:
    //Constructor
    Product(std::string name, int sku, int inventory, double price) 
    {
        this->name = name;
        this->sku = sku;
        this->inventory = inventory;
        this->price = price;
    }
    //Getters/Setters
    std::string getName() const {return name;}
    void setName(std::string name) {this->name = name;}
    
    int getSku() const {return sku;}
    void setSku(int sku) {this->sku = sku;}

    int getInventory() const {return inventory;}
    void setInventory(int inventory) {this->inventory = inventory;}

    double getPrice() const {return price;}
    void setPrice(double price) {this->price = price;}

    //toString
    void toString() 
    {
        std::cout << "Product: " << name << "\nProduct SKU: " << sku << "\nProduct inventory: " << inventory << "\nProduct price: $" <<  price << "\n\n";
    }

    //General methods
    void buyProduct(double x) {
    if(inventory >= 1) {
        inventory--;
        x += price;
    }
    else
        std::cout << "Product is out of stock.\n";
    }

    void returnProduct(double x) {
    inventory++;
    x -= price;
    }

};

//Product, but has specific features of a TV
class TV : public Product {
private:
    int screenSize;
public:
    TV(std::string name, int sku, int inventory, double price, int screenSize) : Product(name, sku, inventory, price) {
        this->name = name;
        this->sku = sku;
        this->inventory = inventory;
        this->price = price;
        this-> screenSize = screenSize;
    }

    int getScreenSize() const { return screenSize; }
    void setScreenSize(int screenSize) { this->screenSize = screenSize; }

    void toString() {
        std::cout << "Product: " << name << "\nProduct SKU: " << sku << "\nProduct inventory: " << inventory << "\nProduct price: $" <<  price << "\nScreen Size: " << screenSize << " inches\n\n";
    }
};

class Laptop : public Product {
private:
    double screenSize;
    int ram;
public:
    Laptop(std::string name, int sku, int inventory, double price, int screenSize, int ram) : Product(name, sku, inventory, price) {
        this->name = name;
        this->sku = sku;
        this->inventory = inventory;
        this->price = price;
        this-> screenSize = screenSize;
        this->ram = ram;
    }

    int getScreenSize() const { return screenSize; }
    void setScreenSize(int screenSize) { this->screenSize = screenSize; }

    int getRam() const { return ram; }
    void setRam(int ram) { this->ram = ram; }

    void toString() {
        std::cout << "Product: " << name << "\nProduct SKU: " << sku << "\nProduct inventory: " << inventory << "\nProduct price: $" <<  price << "Screen Size: " << screenSize << " inches\nRam: " << ram << "\n\n";
    }
};

int main() 
{
    //Store wallet
    double wallet = 0;
    
    //Make some products
    Product mouse("Mouse", 3320912, 5, 20);
    TV tu7000("Samsung 7 series TU7000", 6439014, 20, 1000, 70);
    Laptop inspirion("Dell Inspirion", 7612279, 5, 500, 14, 4);

    
    
    return 0;
}