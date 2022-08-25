#include <bits/stdc++.h>
using namespace std;

class Employee {
    private:
        string Name;
        string Company;
        int Age;
    public:

        // Getters and setters
        void SetName(string name) 
        {
            Name = name;
        }
        string GetName()
        {
            return Name;
        }
        void SetCompany(string company) 
        {
            Company = company;
        }
        string GetCompany()
        {
            return Company;
        }
        void SetAge(int age) 
        {
            if(age >= 18)
            Age = age;
        }
        int GetAge()
        {
            return Age;
        }

        void IntroduceYourSelf()
        {
            cout<<"Name: "<<Name<<endl;
            cout<<"Company: "<<Company<<endl;
            cout<<"Age: "<<Age<<endl;
        }

        //constructor
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
  
    employee1.SetAge(11);
    cout<<employee1.GetName()<<" is "<<employee1.GetAge()<<" years old."<<endl;

    employee2.SetAge(21);
    cout<<employee2.GetName()<<" is "<<employee2.GetAge()<<" years old."<<endl;
    return 0;
}
