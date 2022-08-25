#include <bits/stdc++.h>
using namespace std;

class Employee {
  
    public:
        string Name;
        string Company;
        int Age;

        void IntroduceYourSelf()
        {
            cout<<"Name: "<<Name<<endl;
            cout<<"Company: "<<Company<<endl;
            cout<<"Age: "<<Age<<endl;
        }

        // Constructor
  
        // Construtor is a special type of method that is invoked each time when an object of a class is created.
        // In case, you don't create a constructor, your compiler will automatically create a default constructor.
        // Constructor doesn't have return type and it has same name as that of class name.
  
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }

};

int main()
{
    Employee employee1 = Employee("Prashant","Cognizant",22);
    employee1.IntroduceYourSelf();

    Employee employee2 = Employee("Prateek","HashedIn",22);
    employee2.IntroduceYourSelf();

    return 0;
}
