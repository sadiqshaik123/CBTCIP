#include<iostream>
#include<cstring>
#include <iomanip>

using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
    int rollNumber;
    string firstName;
    string lastName;
    float avgCgpa;
    char grade;
    long long mobileNo;
    char address[100];
    int yearOfGraduation;
};

void inputData(Student students[], int& count) {
    cout << "Enter Student Data:" << endl;
    cout << "Roll Number: ";
    cin >> students[count].rollNumber;
    cout << "First Name: ";
    cin >> students[count].firstName;
    cout << "Last Name: ";
    cin >> students[count].lastName;
    cout << "Average CGPA: ";
    cin >> students[count].avgCgpa;
    cout << "Grade: ";
    cin >> students[count].grade;
    cout << "Mobile Number: ";
    cin >> students[count].mobileNo;
    cout << "Address: ";
    cin.ignore();
    cin.getline(students[count].address, 100);
    cout << "Year of Graduation: ";
    cin >> students[count].yearOfGraduation;

    count++;
}

void showData(const Student students[], int count) {
    cout << "Student Data:" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << setw(14) << "Roll Number" << " | " << setw(19) << "Name" << " | " << setw(14) << "Average CGPA" << " | "
        << setw(9) << "Grade" << " | " << setw(14) << "Mobile Number" << " | " << setw(29) << "Address" << " | "
        << setw(19) << "Year of Graduation" << " |" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < count; i++) {
        cout << "| " << setw(14) << students[i].rollNumber
            << " | " << setw(19) << students[i].firstName + " " + students[i].lastName
            << " | " << setw(14) << students[i].avgCgpa
            << " | " << setw(9) << students[i].grade
            << " | " << setw(14) << students[i].mobileNo
            << " | " << setw(29) << students[i].address
            << " | " << setw(19) << students[i].yearOfGraduation << " |" << endl;
        cout << "--------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    }
}
int findStudentIndex(const Student students[], int count, int rollNumber) {
    for (int i = 0; i < count; i++) {
        if (students[i].rollNumber == rollNumber) {
            return i;
        }
    }
    return -1;
}

void updateData(Student students[], int count) {
    int rollNumber;
    cout << "Enter Roll Number to Update: ";
    cin >> rollNumber;

    int index = findStudentIndex(students, count, rollNumber);

    if (index != -1) {
        cout << "Enter Updated Data:" << endl;
        cout << "Average CGPA: ";
        cin >> students[index].avgCgpa;
        cout << "Grade: ";
        cin >> students[index].grade;
        cout << "Mobile Number: ";
        cin >> students[index].mobileNo;
        cout << "Address: ";
        cin.ignore();
        cin.getline(students[index].address, 100);
        cout << "Year of Graduation: ";
        cin >> students[index].yearOfGraduation;

        cout << "Data Updated Successfully!" << endl;
    }
    else {
        cout << "Student with Roll Number " << rollNumber << " not found." << endl;
    }
}

void deleteData(Student students[], int& count) {
    int rollNumber;
    cout << "Enter Roll Number to Delete: ";
    cin >> rollNumber;

    int index = findStudentIndex(students, count, rollNumber);

    if (index != -1) {
        for (int i = index; i < count - 1; i++) {
            students[i] = students[i + 1];
        }
        count--;
        cout << "Data Deleted Successfully!" << endl;
    }
    else {
        cout << "Student with Roll Number " << rollNumber << " not found." << endl;
    }
}

void searchData(const Student students[], int count) {
    int rollNumber;
    cout << "Enter Roll Number to Search: ";
    cin >> rollNumber;

    int index = findStudentIndex(students, count, rollNumber);

    if (index != -1) {
        cout << "Student Data:" << endl;
        cout << "Roll Number: " << students[index].rollNumber << endl;
        cout << "Name: " << students[index].firstName << " " << students[index].lastName << endl;
        cout << "Average CGPA: " << students[index].avgCgpa << endl;
        cout << "Grade: " << students[index].grade << endl;
        cout << "Mobile Number: " << students[index].mobileNo << endl;
        cout << "Address: " << students[index].address << endl;
        cout << "Year of Graduation: " << students[index].yearOfGraduation << endl;
    }
    else {
        cout << "Student with Roll Number " << rollNumber << " not found." << endl;
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        cout << "================================" << endl;
        cout << "Student Record Management System" << endl;
        cout << "================================" << endl;
        cout << "1. Enter Data" << endl;
        cout << "2. Show Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Delete Data" << endl;
        cout << "5. Search Data" << endl;
        cout << "6. Exit" << endl;
        cout << "================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "================================" << endl;

        switch (choice) {
        case 1:
            inputData(students, count);
            break;
        case 2:
            showData(students, count);
            break;
        case 3:
            updateData(students, count);
            break;
        case 4:
            deleteData(students, count);
            break;
        case 5:
            searchData(students, count);
            break;
        case 6:
            cout << "Exiting Program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid Choice. Please enter a valid option." << endl;
        }

    } while (choice != 6);

    return 0;
}
