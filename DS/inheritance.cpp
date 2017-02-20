#include<bits/stdc++.h>
using namespace std;

class Info
{
 public:
    string name;
    string phn;
    void setPhn(string phn)
    {
        this->phn=phn;
    }
};

class Teacher : public Info
{
private:
  double salary;
public:
    Teacher(string name,string phn,double salary)
    {
        this-> name= name;
        this->phn=phn;
        this-> salary=salary;
    }
    double getSalary()
    {
     return salary;
    }
};


class Student :public Info
{
private:

    double cgpa;
public:
    Student(string name,string phn,double cgpa)
    {
        this-> name= name;
        this->phn=phn;
        this-> cgpa=cgpa;
    }
    double getCgpa()
    {
    return cgpa;
    }
};
int main()
{
    Teacher objTea ("mosh","0123",50000);
    Student objStu("ananna","0123",3.21);

    cout << objTea.name<< " " << objStu.name << endl;
    return 0;
}
