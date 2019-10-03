#include <iostream>
using namespace std;

class Faculty{
public:
    Faculty(); // default constructor
    Faculty(string n, string d, string add, string dob, string deg, double salary, double ssn);
    string name;
    string id;
    string address;
    string DoB;
    string degree;

//getter and setter for salary
    double getSalary() {return salary;}
    void setSalary(double salary);
/* 1) create a getter and setter for each variable in the class*/
    string getName() {return name};
    void setName(string name);

    string getId() {return id;}
    void setId(string id);

    string getAddress() {return address;}
    void setAddress(string address);

    string getDoB() {return DoB};
    void setDoB(string DoB);

    string getDegree() {return degree;}
    void setDegree(string degree);

private:
    double salary;
    double SSN;
};

Faculty::Faculty(string n, string d, string add, string dob, string deg, double salary, double ssn) {
    name = n;
    id = d;
    address = add;
    DoB = dob;
    degree = deg;
    salary = salary;
    SSN = ssn;
}

void Faculty::setSalary(double s){
    salary=s;
}

/* 2) implement each setter and getter */

int main() {
    Faculty prof;

/* 3) use the implemented methods to fill prof' info and print them out */

    return 0;
}
