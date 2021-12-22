#include <iostream>
#include <vector>
#include <string>

class Employee {
private:
    std::string name;
    int id;
    double pay, hours;

public:
    Employee() {
        name = "John Doe";
        id = 111111;
        pay = 7.25;
        hours = 40;
    }
    Employee(std::string name, int id) {
        this->name = name;
        this->id = id;
        pay = 7.25;
        hours = 40;
    }

    std::string getName() {return name;}
    void setName(std::string name) {this->name = name;}

    int getID() {return id;}
    void setID(int id) {this->id = id;}

    double getHours() {return hours;}
    void setHours(double hours) {this->hours = hours;}

    double getPay() {return pay;}
    void setPay(double pay) {this->pay = pay;}

    double grossPay() {
        return pay*hours;
    }

};

int main() {
    Employee john;
    Employee zack("Zack",511552);
    Employee mark("Mark",765901);
    
    std::vector<Employee> employees = {};
    
    employees.push_back(john);
    employees.push_back(zack);
    employees.push_back(mark);

    double* money = new double{zack.grossPay()};

    std::cout << "Money: " << *money << "\n";

    return 0;
}