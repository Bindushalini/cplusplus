#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include<string>

class Animal{
    protected:  string a_name;
    public:
        Animal(string param):a_name(param){}
        virtual void makeSound() = 0;

};
class Dog : public Animal{
    public:
        Dog(string param):Animal(param){}
        void makeSound(){
            cout<<"Dog "<<a_name<<" says Woof"<<endl;
        } 
    };
class Cat: public Animal{
    public:
        Cat(string param):Animal(param){}
        void makeSound(){
            cout<<"Cat "<<a_name<<" says Meow"<<endl;
        }
};

int main(){
    Animal *a1 = new Dog("jackie");
    a1->makeSound();
    Animal *a2 = new Cat("Hopkins");
    a2->makeSound();
  return 0;
}