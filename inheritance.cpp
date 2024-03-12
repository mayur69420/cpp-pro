#include<iostream>

using namespace std;

class animal{

public: 
 
 bool alive=true;
  
  void eat(){
  
  cout<<"um umu um"<<endl;

  }
};

class Dog: public animal{
  
public:

void bark(){
    cout<< "woof!"<<"\n";
}

};
int main(){

Dog dog;
 dog.eat();

dog.bark();

}
