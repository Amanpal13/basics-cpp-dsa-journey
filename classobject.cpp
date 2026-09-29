#include<iostream>
using namespace std;
//class creation
class student {
    public:
         //properties (data member)
         int age;
         int weight;
         int height;
         string name;

         //constructor
         student (){
            cout << "I am inside no param constructor  " << endl;
            age = 18;
            weight = 70;
            height = 45;
            name = "goglu";
         }

         //parametrised constructor
         student (int myage , int myweight, int myheight , string myname){
            cout << "I am inside param constructor " << endl;
            height = myheight;
            weight = myweight;
            name = myname;
         }

         //behaviour (member function)
         void running() {
           cout <<"I am running " << endl;
         }
         void studying(){
            cout << name << " is studying" << endl;
         }


         ~student(){
            cout << "I am deconstructoe" << endl;
         }
};

int main(){
    cout << sizeof(student)<< endl;



    //object creation

    //static way
    
    // student s1;
    // s1.age = 50;
    // s1.name = "aman";
    // s1.weight = 50;
    // s1.height = 180;

    // s1.running();





    //dynamic way

    // student* s = new student() ;
    // (*s).age = 10;
    // s->age= 10;
    // (*s).weight = 60;
    // (*s).height = 180;
    // s-> name = "aman pal";
    // (*s).running();
    // s->studying();


    // student a;
    // student* b = new student;
    // student* c= new student(); 


    // student x;
    // student y(10,40,90,"aman");

    // student* s = new student (10,20,30,"aman");

    // cout << s->age << endl;
    // cout << s->weight << endl;
    // cout << s->height << endl;
    // cout << s->name << endl;


    student *s = new student();

    delete s;


    return 0;
}