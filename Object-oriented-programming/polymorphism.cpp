// Polymorphism describes the ability of object or method to have many forms.

#include <bits/stdc++.h>
using namespace std;

// Abstract class
class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

// Base class
class Employee:AbstractEmployee {
    private:
        string Company;
        int Age;
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

        void AskForPromotion() {
            if(Age > 21 )
                cout<< Name << " got promotion."<<endl;
            else
                cout<<"Sorry "<< Name <<", You can't be promoted."<<endl;
        }

//...........................................................................................
        // A function appended with 'virtual' keyword is known as "virtual function".
        // When a virtual function is invoked, it checks whether there is implementation
        // of this function in derived classes. If so, then the derived class function is
        // executed. If not, then the virtual function is executed directly.
//...........................................................................................
  
        virtual void Work() {
            cout<< Name << " is checking emails, task backlogs and performing tasks."<<endl;
        }
};

// This inheritance is private by default
// So in order to access all the members of base class, we need to make it public.

// Derived class
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

        void Work() {
            cout<< Name << " is writing "<< FavProgrammingLang << " code."<<endl;
        }
};

// Derived class
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

        void Work() {
            cout<< Name << " is teaching "<< Subject <<" lesson."<<endl;
        }
};

int main()
{
    Developer d = Developer("Prashant", "Cognizant", 22, "C++");
    Teacher t = Teacher("Priyanka", "St. Peter's School", 35, "Maths");
    
    // The most common use of polymorphism is when a parent class 
    // refernece is used to refer a child class object.

    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();

    return 0;
}
