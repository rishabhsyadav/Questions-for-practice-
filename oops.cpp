#include<iostream>
#include <string>

using namespace std;

class teacher{
private:
    double salary;
public:
    string name;
    string dept;
    string sub;

void changedept (string newdept) {
    dept = newdept;
}

void setsalary (double s) {
   salary = s;
}

double getsalary() {
return salary;

}
};

int main () {
teacher t1;
t1.name="rishabh ";
t1.dept="it";
t1.sub="maths";
t1.setsalary(30000000);

cout<<t1.name<<endl;
cout<<t1.getsalary() <<endl;

return 0;
}

