#include <iostream>
using namespace std;

class animal{
 //Access Modifier
 public: 
   //Making Data variables
     string name = "";
     int age = 0;
   //Making Functions or Methods
     void eat() {
       cout << "The animal " << name << " is eating. " << endl;
     }
     void sleep() {
       cout << "The animal " << name << " is not sleeping. " << endl;
     }
 //2nd Access Modifier for Private Getter and Setter
 private:
   //Making only Data variables
   int weight;
 public:
   //Making Gatter and Setter
   void setweight(int weight) {
     //Here this-> represents the variable weight made above 
     //The 2nd weight represents the weight taken in the function
     this-> weight = weight;
   }
   int getweight() {
     return weight;
   } 
};

int main() {

  //Making an Object
  animal dog ;

  //Changing values of the public members
  dog.name = "Dog";
  dog.age = 15;

  //Printing the values of Data members of object dog
  cout << "Name of the animal is : " << dog.name << endl;
  cout << "Age of the animal is : " << dog.age << endl;

  //Calling the Functions made in object dog
  dog.eat();
  dog.sleep();

  //Using Setter and Getter for weight variable
  dog.setweight(20);
  cout << "Weight of the animal is : " << dog.getweight() << "kg" << endl;

}