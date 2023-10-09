#include <iostream>
using namespace std;

class Hero {


    //properties
    private:
    int health;
    public:
    char level;


    Hero(){
        cout << "Simple constructor called"<<endl;

    }


    //parametrised constructor 
    Hero(int health,char level){
        this -> health = health;
        this -> level = level;


    }


    //compy constructor 
    Hero (Hero& temp) {
        this -> health = temp.health;
        this -> level = temp.level;

    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

   


};




int main()
{
    

    //cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    // Hero a;

    // cout << a.timeToComplete << endl;


    // Hero b;
    // b.timeToComplete = 10 ;
    // cout  << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;












    // //Static
    // Hero a;

    // //Dynamic
    // Hero *b = new Hero();
    // //manually destructor call
    // delete b;







//     Hero hero1;

//     hero1.setHealth(12);
//     hero1.setLevel('D');
//     char name[7] = "Babbar";
//     hero1.setName(name);

//     //hero1.print();

//     //use default copy constructor

//     Hero hero2(hero1);
//     //hero2.print();
// //    Hero hero2 = hero1;

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();

//     hero1 = hero2;

//     hero1.print();

//     hero2.print();


    



    return 0;
}