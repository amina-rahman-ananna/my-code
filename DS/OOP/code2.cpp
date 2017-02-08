//objectorientedprogramming
#include<bits/stdc++.h>
using namespace std;

class Student
{
    private :
    double cgpa;
public :
    string name;
    string phn;
    Student(string name,string phn,double cgpa)
    {
         this->name=name;
          this->phn=phn;
           this->cgpa=cgpa;
    }
    void setPhn(string phn)
    {
        this->phn=phn;
    }
    double getCgpa()
    {
        return cgpa;
    }
};
int main()
{
    Student object1("hemel","016",0.0),object2("shovon","015",0.0);
     object1.setPhn=("0258");

    cout <<object1.getCgpa()<< endl ;
    return 0;
}
