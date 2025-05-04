#include<iostream>
#include<string>
#include<typeinfo>
using std::cout;
using std::cin;
using std::endl;

class Employee{
    private:
        std::string emp_name;
        int employee_id;
        double salary;
    public:
        Employee(std::string name, int id, double sal): emp_name(name), employee_id(id), salary(sal){
            if(salary < 0){
                cout<<"Invalid salary"<<endl;
                salary = double(0);
            }
            cout<<"Inside param constructor"<<endl;
        }
        void setSalary(double amount){
            if(amount < 0){
                cout<<"Invalid salary"<<endl;
                salary = double(0);
            } else {
                salary = amount;
            }
        }
        double getSalary(){
            return salary;
        }
        void displayEmployeeDetails(){
           
            cout<<"Name: "<<emp_name<<endl;
            cout<<"Employee ID: "<<employee_id<<endl;
            
            cout<<"Salary: "<<salary<<endl;
        }
};
int main(){
    std::string name;
    int e_id;
    double old_sal , new_sal = 0.0;
    cin>>name>>e_id>>old_sal>>new_sal;
    Employee* object = new Employee(name,e_id,old_sal);
    cout<<"salary:"<<object->getSalary()<<endl;
    object->setSalary(new_sal);
    object->displayEmployeeDetails();
}