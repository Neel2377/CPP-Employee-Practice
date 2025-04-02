#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    int age;
    string department;
    float salary;
    int attendance;
    float bonus;
    float increment;

public:
    void setData()
    {   
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin>>name;
        cout << "Enter Employee Age: ";
        cin >> age;
        cout << "Enter Employee Department: ";
        cin>>department;
        cout << "Enter Employee Salary: ";
        cin >> salary;
        cout << "Enter Employee Attendance: ";
        cin >> attendance;
    }

    void addEmployee()
    {
        setData();
        cout << "Employee added successfully!" << endl;
    }

    void markAttendance(int days)
    {
        attendance += days;
        cout << "Attendance marked for " << days << " days." << endl;
    }
    
    void calculateSalary()
    {
        float totalSalary = salary + (attendance * 100); 
        cout << "Total Salary: " << totalSalary << endl;
    }

    void applyIncrement(float percentage)
    {
        increment = (salary * percentage) / 100;
        salary += increment;
        cout << "Salary incremented by " << percentage << "%." << endl;
    }

    void grantBonus(float amount)
    {
        bonus = amount;
        salary += bonus;
        cout << "Bonus of " << amount << " granted." << endl;

    }

    void displayEmployee()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Age: " << age << endl;
        cout << "Employee Department: " << department << endl;
        cout << "Employee Salary: " << salary << endl;
        cout << "Employee Attendance: " << attendance << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Increment: " << increment << endl;
    }
};

int main()
{
    int choice;
    Employee emp;
    do
    {
        cout << "=============Employee Management System===========" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Mark Attendance" << endl;
        cout << "3. Calculate Salary" << endl;
        cout << "4. Apply Increment" << endl;
        cout << "5. Grant Bonus" << endl;
        cout << "6. Display Employees" << endl;
        cout << "7. Exit......" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
            emp.addEmployee();  
            cout<<endl;
            break;
        case 2:
            emp.markAttendance(6);
            cout<<endl;
            break;
        case 3:
            emp.calculateSalary();
            cout<<endl;
            break;
        case 4:
            emp.applyIncrement(10);
            cout<<endl;
            break;
        case 5:
            emp.grantBonus(3000);
            cout<<endl;
            break;
        case 6:
            emp.displayEmployee();
            cout<<endl;
            break;
        case 7:
            cout << "Exit The System...";
            break;
        default:
            cout << "Invalid Choice! Try Again.";
        }
    } while (choice != 7);

    return 0;
}