
#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    string company;
    string gender;
    bool eligible_to_vote;

public:
    int age;

    Employee()
    {
        cout << "Employee created" << endl;
        name = "N/A";
        company = "N/A";
        age = 0;
        gender = "N/A";
        eligible_to_vote = false;
    }

    Employee(string name_, string company_, string gender_, int age_)
    {
        cout << "Employee created" << endl;
        name = name_;
        company = company_;
        age = age_;
        gender = gender_;

        if (age > 18)
        {
            eligible_to_vote = true;
        }
        else
        {
            eligible_to_vote = false;
        }
    }
    void setname(string employeename);

    void setcompany(string companyname)
    {
        company = companyname;
    }
    void setgender(string gendername);

    string getname()
    {
        return name;
    }
    string getcompany()
    {
        return company;
    }
    string getgender()
    {
        return gender;
    }
};

void Employee::setname(string employeename)
{
    name = employeename;
}

void Employee::setgender(string gendername)
{
    gender = gendername;
}

int main()
{
    Employee employee1;
    Employee employee2("Robert", "marconi", "Male", 42);
    string employee_name, employee_company, employee_gender;
    employee_name = employee1.getname();
    employee_company = employee1.getcompany();
    employee_gender = employee1.getgender();
    employee1.age = 21;
    // cout << "employee name is " << employee_name << endl;

    // employee1.setparameters("John");
    cout << "employee name is " << employee_name << endl;

    employee1.setname("John");
    employee1.setcompany("Google");
    employee1.setgender("Male");
    employee_name = employee1.getname();
    employee_company = employee1.getcompany();
    employee_gender = employee1.getgender();
    cout << "employee name is " << employee_name << endl;
    cout << "employee company is " << employee_company << endl;
    cout << "employee gender is " << employee_gender << endl;
    cout << "employee age is " << employee1.age << endl;

    employee_name = employee2.getname();
    employee_company = employee2.getcompany();
    employee_gender = employee2.getgender();
    cout << "employee2 name is " << employee_name << endl;
    cout << "employee2 company is " << employee_company << endl;
    cout << "employee2 gender is " << employee_gender << endl;
    cout << "employee2 age is " << employee2.age << endl;
    // employee1.company = "Google";

    // employee1.gender = "Male";
    // cout << "employee name is " << employee1.name << endl;
    // cout << "employee company is " << employee1.company << endl;

    // cout << "employee age is " << employee1.age << endl;
    // cout << "employee gender is " << employee1.gender << endl;
    return 0;
}