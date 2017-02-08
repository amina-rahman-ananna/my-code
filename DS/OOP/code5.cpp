#include<bits/stdc++.h>
using namespace std;

class Student
{
public :
    string name;
    string phn;
    double cgpa;
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
};
int main()
{
    Student object1("hemel","016",0.0),object2("shovon","015",0.0);
     object1.phn=("0258");
      object2.cgpa=2.58;


    cout <<object1.phn<<' '<<object2.cgpa<< endl ;
    return 0;
}
