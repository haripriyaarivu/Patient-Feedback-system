#include <iostream>
using namespace std;

int main() {

    int choice;

    while (true) {

        cout << "\n===== ABCD HOSPITAL SYSTEM =====\n";
        cout << "1. Patient Login\n";
        cout << "2. Doctor Login\n";
        cout << "3. Admin Login\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1) {

            string email, password;

            cout << "\n--- Patient Login ---\n";
            cout << "Enter Email: ";
            cin >> email;

            cout << "Enter Password: ";
            cin >> password;

            int patientChoice;

            cout << "\nWelcome Patient\n";
            cout << "1. Book Appointment\n";
            cout << "2. Give Feedback\n";
            cout << "3. Logout\n";
            cout << "Enter Choice: ";
            cin >> patientChoice;

            if (patientChoice == 1) {

                int doctor, time;
                string date;

                cout << "\n--- Book Appointment ---\n";

                cout << "Select Doctor\n";
                cout << "1. Dr. Ravi\n";
                cout << "2. Dr. Kumar\n";
                cout << "Enter Choice: ";
                cin >> doctor;

                cout << "Enter Date: ";
                cin >> date;

                cout << "Select Time\n";
                cout << "1. 09:00 AM\n";
                cout << "2. 10:00 AM\n";
                cout << "Enter Choice: ";
                cin >> time;

                cout << "\nAppointment Booked Successfully!\n";
            }

            else if (patientChoice == 2) {

                string patientName, doctorName, feedback;
                int rating;

                cout << "\n--- Give Feedback ---\n";

                cin.ignore();

                cout << "Enter Patient Name: ";
                getline(cin, patientName);

                cout << "Enter Doctor Name: ";
                getline(cin, doctorName);

                cout << "Enter Rating (1-5): ";
                cin >> rating;

                cin.ignore();

                cout << "Enter Feedback: ";
                getline(cin, feedback);

                cout << "\nFeedback Submitted Successfully!\n";
            }
        }

        else if (choice == 2) {

            string doctorName;

            cout << "\n--- Doctor Login ---\n";

            cin.ignore();

            cout << "Enter Doctor Name: ";
            getline(cin, doctorName);

            cout << "\nWelcome Dr. " << doctorName << endl;
            cout << "Viewing Patient Appointments...\n";
        }

        else if (choice == 3) {

            string username, password;

            cout << "\n--- Admin Login ---\n";

            cout << "Enter Username: ";
            cin >> username;

            cout << "Enter Password: ";
            cin >> password;

            if (username == "admin" && password == "admin123") {

                cout << "\nWelcome Admin\n";

                cout << "1. View Patients\n";
                cout << "2. View Doctors\n";
                cout << "3. View Appointments\n";
                cout << "4. View Feedback\n";
            }

            else {

                cout << "\nInvalid Login\n";
            }
        }

        else if (choice == 4) {

            cout << "\nThank You!\n";
            break;
        }

        else {

            cout << "\nInvalid Choice\n";
        }
    }

    return 0;
}
