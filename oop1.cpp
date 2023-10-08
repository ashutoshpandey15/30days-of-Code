#include <iostream>
using namespace std;


class cat{
    //properties
    public:
    int age;
    string level;
    bool gender;

};



int  main()
{   

    cat c1;
    c1.age = 10;
    c1.level = 'D';
    c1.gender = true;

    cout<<"Age of cat is : "<<c1.age<<endl;
    cout<<"levl of cat is : "<<c1.level<<endl;
    cout<<"gender of cat is : "<<c1.gender<<endl;
    


    return 0;
}