#include<iostream>
#include <algorithm> 
#include <vector>
#include<string>
#include <set> 
#include <map> 
#include <cstdlib>
#include <utility>
#include <ctime>
#include <cmath>
using namespace std;
#define ANOOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
//fonding on logical thinking 
class employee {
public:
    string name;
    employee(string name) :name(name) {}
    employee(){}
    virtual int get_bonus(int hours) = 0;
    void print_name(){
      cout << this->name;
    }
};
class manager :public employee {
public:
    int salary;
    manager(int salary) : salary(salary){}
    int get_bonus(int hours) {
        return (((salary / 30) / 8) * hours) * 2;
    }
};
class regular_emp :public employee {
public:
    int salary;
    regular_emp(int salary) : salary(salary) {}
    int get_bonus(int hours) {
        return (((salary / 30) / 8) * hours);
    }
};

int main() {
    ANOOS
        manager m(4000);
    cout << m.get_bonus(4) << endl;
    regular_emp r(4000);
    cout << r.get_bonus(4) << endl;
    return 0;
}

/*This Type of Solution Using OCP is called Open Closed Principle OCP Abstract Class Implementation , as we solve adding new functionalities in a way
that we don't need to modify on existing code , we can add new classes to inherit from the super abstract class (employee) to a new class to add the new 
functionality in a separate block to deal with it separately without causing any issues to a pervious exisitng testable code . 
*/
