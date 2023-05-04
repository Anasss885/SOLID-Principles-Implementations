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
    int salary;
    employee(int salary):salary(salary){} 

    int get_bonus(int hours,string emp_type) {
        if (emp_type == "manager")
            return (((salary / 30) / 8) * hours) * 2;
        else
            return (((salary / 30) / 8) * hours);
    }
};

int main() {
    ANOOS
        employee emp(4000);
    cout<<emp.get_bonus(5, "regular")<<endl;
    cout << emp.get_bonus(5, "manager") << endl;

    return 0;
}

/*CLARIFICATION : in this code if we want to add employee types to calculate a differnt way of getting bonus to every type then we'll modify every time
in empolyee class which Violates Open Closed Principle OCP(the class/block is open for extension and closed for modification) which may cause several problems 
in our system in order to re-test it to fit the new functionalities , so how could we solve this Design problem using OCP ?

*/
