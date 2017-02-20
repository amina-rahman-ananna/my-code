#include<bits/stdc++.h>
using namespace std;

class Info
{
 protected:
    string name;
    string phn;
 public:
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
    string get()
    {
        return name;
    }
    string get(int x)   //method overloading
    {
        return phn;
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
    Teacher objTea ("kmh","0123",50000);
    Student objStu("ananna","0123",3.21);

    cout << objTea.get()<< " " << objTea.get(15) << endl;
    return 0;
}
