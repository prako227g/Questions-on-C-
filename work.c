#include<iostream>

void getInfo(float &salary, int &workHoursPerDay) {
    std::cout << "Enter the salary of the employee: ";
    std::cin >> salary;
    std::cout << "Enter the number of hours of work per day of the employee: ";
    std::cin >> workHoursPerDay;
}

void AddSal(float &salary) {
    if (salary < 500) {
        salary += 10;
    }
}

void AddWork(float &salary, int workHoursPerDay) {
    if (workHoursPerDay > 6) {
        salary += 5;
    }
}

void printSalary(float salary) {
    std::cout << "Final Salary: " << salary << std::endl;
}

int main() {
    float salary;
    int workHoursPerDay;

    getInfo(salary, workHoursPerDay);
    AddSal(salary);
    AddWork(salary, workHoursPerDay);
    printSalary(salary);

    return 0;
}
