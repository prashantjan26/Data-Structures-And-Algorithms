#include <bits/stdc++.h>
using namespace std;

// Abstract class
class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {
    private:
        string Company;
        int Age;
    
    // protected variables and methods are accessible from derived classes
    protected:
        string Name;
        
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

// This inheritance is private by default
// So in order to access all the members of base class, we need to make it public
class Developer : public Employee {
    public:
        string FavProgrammingLang;
        Developer(string name, string company, int age, string favProgrammingLang) : Employee(name, company, age)
        {
            FavProgrammingLang = favProgrammingLang;
        }
        void FixBug() {
            cout<< Name << " fixed bug using "<< FavProgrammingLang<<endl;
        }
};

class Teacher: public Employee {
    public:
        string Subject;
        void PrepareLesson()
        {
            cout<< Name << " is preparing "<< Subject<<" lesson."<<endl;
        }
        Teacher(string name, string company, int age, string subject) : Employee(name, company, age) {
            Subject = subject;
        }
};

// Developer and Teacher are inherited class also known as sub class or child class

int main()
{
    Developer d = Developer("Prashant", "Cognizant", 22, "C++");
    Teacher t = Teacher("Priyanka", "St. Peter's School", 35, "Maths");
    d.FixBug();
    t.PrepareLesson();
    t.AskForPromotion();
    return 0;
}
