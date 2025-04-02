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
    Employee() : id(0), age(0), salary(0), attendance(0), bonus(0), increment(0) {}

    void addEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Age: ";
        cin >> age;
        cout << "Enter Employee Department: ";
        cin >> department;
        cout << "Enter Base Salary: ";
        cin >> salary;
        attendance = 0;
        bonus = 0;
        increment = 0;
        cout << "Employee added successfully!" << endl;
    }

    void markAttendance()
    {
        int days;
        cout << "Enter attendance days: ";
        cin >> days;

        if (days < 0)
        {
            cout << "Invalid input! Attendance days cannot be negative." << endl;
            return;
        }

        attendance += days;
        cout << "Attendance marked for " << days << " days." << endl;
    }

    void calculateSalary() const
    {
        float totalSalary = salary + bonus + (attendance * 100);
        cout << "Total Salary: " << totalSalary << endl;
    }

    void applyIncrement()
    {
        float percentage;
        cout << "Enter increment percentage: ";
        cin >> percentage;

        if (percentage < 0)
        {
            cout << "Invalid increment percentage! Must be non-negative." << endl;
            return;
        }

        float incrementAmount = (salary * percentage) / 100;
        salary += incrementAmount;
        increment += incrementAmount;

        cout << "Salary incremented by " << percentage << "%." << endl;
        cout << "New Salary: " << salary << endl;
    }

    void grantBonus()
    {
        float percentage;
        cout << "Enter bonus percentage: ";
        cin >> percentage;

        if (percentage < 0)
        {
            cout << "Invalid bonus percentage! Bonus must be non-negative." << endl;
            return;
        }

        float bonusAmount = (salary * percentage) / 100;
        bonus += bonusAmount;

        cout << "Bonus of " << percentage << "% granted." << endl;
        cout << "New Total Salary After Bonus: " << (salary + bonus + (attendance * 100)) << endl;
    }

    void displayEmployee() const
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Age: " << age << endl;
        cout << "Employee Department: " << department << endl;
        cout << "Base Salary: " << salary << endl;
        cout << "Total Salary: " << (salary + bonus + (attendance * 100)) << endl;
        cout << "Attendance Days: " << attendance << endl;
        cout << "Bonus Received: " << bonus << endl;
        cout << "Salary Increment: " << increment << endl;
    }
};

int main()
{
    int choice;
    Employee emp;

    do
    {
        cout << "============= Employee Management System =============" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Mark Attendance" << endl;
        cout << "3. Calculate Salary" << endl;
        cout << "4. Apply Increment" << endl;
        cout << "5. Grant Bonus" << endl;
        cout << "6. Display Employee" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            emp.addEmployee();
            break;
        case 2:
            emp.markAttendance();
            break;
        case 3:
            emp.calculateSalary();
            break;
        case 4:
            emp.applyIncrement();
            break;
        case 5:
            emp.grantBonus();
            break;
        case 6:
            emp.displayEmployee();
            break;
        case 7:
            cout << "Exiting the system..." << endl;
            break;
        default:
            cout << "Invalid Choice! Try Again." << endl;
        }

        cout << endl;

    } while (choice != 7);

    return 0;
}
