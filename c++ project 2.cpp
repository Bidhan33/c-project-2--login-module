#include <iostream>
#include <string>

using namespace std;

void changePassword(string& password) {
    string new_password;

    cout << "Enter a new password: ";
    cin >> new_password;

    password = new_password;

    cout << "Password changed successfully." << endl;
}

int main() {
    string username, password;
    int choice;

    cout << "*************************************************" << endl;
    cout << "*                                               *" << endl;
    cout << "*                LOGIN PAGE                     *" << endl;
    cout << "*                                               *" << endl;
    cout << "*************************************************" << endl;
    cout << endl;

    cout << "Please enter your username: ";
    cin >> username;

    cout << "Please enter your password: ";
    cin >> password;

    if (username == "myusername" && password == "mypassword") {
        cout << "Welcome, " << username << "!" << endl;

        while (true) {
            cout << "Please select an option:" << endl;
            cout << "1. Learn about Albert Einstein's college life" << endl;
            cout << "2. Learn about Albert Einstein's work" << endl;
            cout << "3. Change password" << endl;
            cout << "4. Exit" << endl;
            cin >> choice;

            if (choice == 1) {
                cout << "Albert Einstein studied at the Swiss Federal Polytechnic School and earned a diploma in mathematics and physics in 1900." << endl;
            }
            else if (choice == 2) {
                cout << "Albert Einstein is known for developing the theories of special and general relativity, making significant contributions to quantum mechanics and the development of the atomic bomb, while also being an advocate for pacifism, civil rights, and a 'cosmic religion'." << endl;
            }
            else if (choice == 3) {
                changePassword(password);
            }
            else if (choice == 4) {
                break;
            }
            else {
                cout << "Invalid choice. Please try again." << endl;
            }
        }

        cout << "Thank you for using the program. Do you have any feedback? (Y/N)" << endl;
        char feedback;
        cin >> feedback;
        if (feedback == 'Y' || feedback == 'y') {
            cout << "Please enter your feedback: ";
            string feedback_text;
            cin.ignore();
            getline(cin, feedback_text);

            cout << "Thank you for your feedback. Press 'S' to send it." << endl;
            char send_option;
            cin >> send_option;
            if (send_option == 'S' || send_option == 's') {
                cout << "Feedback sent. Goodbye!" << endl;
            }
            else {
                cout << "Feedback not sent. Goodbye!" << endl;
            }
        }
        else {
            cout << "Feedback not provided. Goodbye!" << endl;
        }
    }
    else {
        cout << "Incorrect username or password. Please try again." << endl;
    }

    return 0;
}

