// Payroll system

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Pay {
public:
    double salary(double hours);
};

double Pay::salary(double hours) {
    double salary = hours * 108.33;
    if (hours <= 40) {
        salary = hours * 108.33;
    } else {
        salary = 40 * 103.33 + (hours - 40) * (103.33 * 1.5);
    }
    return salary;
}


class Deductions {
public:
    double sss(double);
    double philhealth(double);
    double pagibig(double);
    double tax(double);
};

double Deductions::sss(double salary) {
    double sss = salary * 0.0572;
    return sss;
}

double Deductions::philhealth(double salary) {
    double philhealth = salary * 0.082;
    return philhealth;
}

double Deductions::pagibig(double salary) {
    double pagibig = salary * 0.0750;
    return pagibig;
}

double Deductions::tax(double salary) {
    double tax = salary * 0.12;
    return tax;
}

int main() {
    Pay pay;
    Deductions deductions;
    double hours, salary, sss, philhealth, pagibig, tax, totalDeductions;
    string employee;
    cout << "Enter Employee Name: ";
    cin >> employee;
    cout << "Enter Hours Worked: ";
    cin >> hours;

    salary = pay.salary(hours);
    sss = deductions.sss(salary);
    philhealth = deductions.philhealth(salary);
    pagibig = deductions.pagibig(salary);
    tax = deductions.tax(salary);

    totalDeductions = sss + philhealth + pagibig + tax;
    
    // file handling for create, write, and open file 
    ofstream file;
    file.open("payroll.txt");
    if (hours <= 40) {
        file << "Employee Name: " << employee << endl;
        file << "No. of hours worked: " << hours << endl;
        file << "Net Income: " << salary << endl;
        file << "SSS: " << sss << endl;
        file << "P.H.: " << philhealth << endl;
        file << "P.I.: " << pagibig << endl;
        file << "TAX: " << tax << endl;
        file << "Total Deduction: " << totalDeductions << endl;
        file << "NET PAY: " << salary - totalDeductions << endl;
    } else {
        file << "Employee Name: " << employee << endl;
        file << "No. of hours worked: " << hours << endl;
        file << "Net Income: " << salary << endl;
        file << "Overtime hour/s: " << hours - 40 << endl;
        file << "Overtime Fee/s: " << (hours - 40) * (108.33 * 1.5) << endl;
        file << "SSS: " << sss << endl;
        file << "P.H.: " << philhealth << endl;
        file << "P.I.: " << pagibig << endl;
        file << "TAX: " << tax << endl;
        file << "Total Deduction: " << totalDeductions << endl;
        file << "NET PAY: " << salary - totalDeductions << endl;
    }
    file.close();

    // file handling for read file
    ifstream file2;
    file2.open("payroll.txt");
    if (file2.is_open()) {
        while (getline(file2, employee)) {
            cout << employee << endl;
        }
    } else {
        cout << "Unable to open file";
    }

    // display if file is created or note
    if (file2.is_open()) {
        cout << "File is created" << endl;
    } else {
        cout << "File is not created" << endl;
    }
    return 0;

}

/**

    if (hours <= 40) {
        cout << "Employee Name: " << employee << endl;
        cout << "No. of hours worked: " << hours << endl;
        cout << "Net Income: " << salary << endl;
        cout << "SSS: " << sss << endl;
        cout << "P.H.: " << philhealth << endl;
        cout << "P.I.: " << pagibig << endl;
        cout << "TAX: " << tax << endl;
        cout << "Total Deduction: " << totalDeductions << endl;
        cout << "NET PAY: " << salary - totalDeductions << endl;
    } else {
        cout << "Employee Name: " << employee << endl;
        cout << "No. of hours worked: " << hours << endl;
        cout << "Net Income: " << salary << endl;
        cout << "Overtime hour/s: " << hours - 40 << endl;
        cout << "Overtime Fee/s: " << (hours - 40) * (108.33 * 1.5) << endl;
        cout << "SSS: " << sss << endl;
        cout << "P.H.: " << philhealth << endl;
        cout << "P.I.: " << pagibig << endl;
        cout << "TAX: " << tax << endl;
        cout << "Total Deduction: " << totalDeductions << endl;
        cout << "NET PAY: " << salary - totalDeductions << endl;
    }
  
**/