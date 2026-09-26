#include <iostream>                    // Provides input/output functions
#include <string>                      // Provides string support
#include <utility>                     // Provides std::move

class Employee {
protected:
    int employeeId;                    // Stores employee ID
    std::string name;                  // Stores employee name

public:
    Employee(int id, std::string employeeName)
        : employeeId(id), name(std::move(employeeName)) {} // Initializes employee details

    virtual double calculateSalary() const = 0; // Pure virtual salary calculation function

    void displayBasicDetails() const {         // Displays employee basic details
        std::cout << "Employee ID: " << employeeId << '\n'; // Displays employee ID
        std::cout << "Name: " << name << '\n';              // Displays employee name
    }

    virtual ~Employee() = default;              // Virtual destructor
};

class PermanentEmployee : public Employee {
private:
    double basicSalary;                         // Stores basic salary
    double allowance;                           // Stores allowance

public:
    PermanentEmployee(int id, std::string employeeName,
                      double basic, double extra)
        : Employee(id, std::move(employeeName)),
          basicSalary(basic), allowance(extra) {} // Initializes employee details

    double calculateSalary() const override {    // Calculates permanent employee salary
        return basicSalary + allowance;          // Returns salary with allowance
    }
};

class ContractEmployee : public Employee {
private:
    double hourlyRate;                           // Stores hourly payment rate
    int hoursWorked;                             // Stores hours worked

public:
    ContractEmployee(int id, std::string employeeName,
                     double rate, int hours)
        : Employee(id, std::move(employeeName)),
          hourlyRate(rate), hoursWorked(hours) {} // Initializes contract details

    double calculateSalary() const override {     // Calculates contract salary
        return hourlyRate * hoursWorked;          // Returns rate multiplied by hours
    }
};

void printPaySlip(const Employee& employee) {    // Accepts any Employee by reference
    employee.displayBasicDetails();              // Displays employee information
    std::cout << "Salary: Rs. "
              << employee.calculateSalary() << "\n\n"; // Displays calculated salary
}

int main() {
    PermanentEmployee permanentEmployee(
        101, "Asha", 40000.0, 8000.0);            // Creates permanent employee

    ContractEmployee contractEmployee(
        102, "Vikas", 500.0, 80);                 // Creates contract employee

    printPaySlip(permanentEmployee);              // Displays permanent employee payslip
    printPaySlip(contractEmployee);               // Displays contract employee payslip

    return 0;                                     // Ends the program successfully
}
