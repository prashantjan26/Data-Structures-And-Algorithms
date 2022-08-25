#include <bits/stdc++.h>
using namespace std;

class Employee {
  
    //By default, everything inside a class is private. 
    //So we are declaring class variables inside public to get access outside class
  
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
};

int main()
{
    //Creating object of a class or instance of a class
    Employee employee1;
  
    employee1.Name = "Prashant";
    employee1.Company = "Cognizant";
    employee1.Age = "22"
    employee1.IntroduceYourSelf();

    Employee employee2;
  
    employee2.Name = "Prateek";
    employee2.Company = "HashedIn";
    employee2.Age = "22"
    employee2.IntroduceYourSelf();

    return 0;
}
