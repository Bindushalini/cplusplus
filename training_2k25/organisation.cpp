#include<iostream>
#include<string>
using std::cout; 
using std::endl; 

class Employee{
    private:
        std::string name;
        int id;
    public:
        Employee(std::string emp_name,int id_no):name(emp_name),id(id_no){}
        virtual void displayDetails(){
            cout<<"Name: " <<name<<endl;
            cout<<"id: " <<id<<endl;
        }   
};
class Manager: public Employee{
    private: 
        int teamSize;
    public:
        Manager(std::string emp_name,int id_no,int size_val):Employee(emp_name,id_no),teamSize(size_val){
        }
        void displayDetails(){
            Employee::displayDetails();
            cout<<"Team size: "<<teamSize<<endl;
        }  

};
class Engineer: public Employee{
    private: 
        std::string speciali;
    public:
        Engineer(std::string emp_name,int id_no,std::string subject):Employee(emp_name,id_no),speciali(subject){
        }
        void displayDetails(){
            Employee::displayDetails();
            cout<<"Specialization: "<<speciali<<endl;
        }
};
int main(){
    Employee *m1 = new Manager("ramesh",34,20);
    cout<<"Manager details:"<<endl;
    m1->displayDetails();

    Engineer *e1 = new Engineer("Rahul", 35, "Backend");
    cout<<"Engineer details:"<<endl;
    e1->displayDetails();

}