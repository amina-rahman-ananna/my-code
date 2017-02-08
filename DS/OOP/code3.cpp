#include<bits/stdc++.h>
using namespace std;

class student
{
public :
    string name;
    string phn;
    double cgpa;
};
int main()
{
    student object1,object2;
    object1.name="hemel";
    object1.phn="+88-01762771370";
    object1.cgpa=3.25;
    object2.name="arafat";
    object2.phn="+88-01960757452";
    object2.cgpa=3.56;
    cout <<object1.name<<' '<<object2.cgpa<< endl ;
    return 0;
}
