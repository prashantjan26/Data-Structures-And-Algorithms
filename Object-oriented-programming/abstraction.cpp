#include <bits/stdc++.h>
using namespace std;

// Abstract class
class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
    private:
        string Name;
        string Company;
        int Age;
    public:

        //constructor
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }

        void AskForPromotion() {
            if(Age > 21 )
                cout<< Name << " got promotion."<<endl;
            else
                cout<<"Sorry "<< Name <<", You can't be promoted."<<endl;
        }
};

int main()
{
    Employee employee1 = Employee("Prashant","Cognizant",22);
    Employee employee2 = Employee("Prateek","HashedIn",21);
    
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    return 0;
}
