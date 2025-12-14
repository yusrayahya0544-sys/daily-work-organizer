#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "=== Smart Daily Task & Priority Manager ===" << endl;
    cout << "Enter number of tasks: ";
    cin >> n;

    cin.ignore(); // clear input buffer

    string taskName[50];
    string priority[50];

    for (int i = 0; i < n; i++) {
        cout << "\nTask " << i + 1 << endl;

        cout << "Enter task name: ";
        getline(cin, taskName[i]);

        cout << "Enter priority (High / Medium / Low): ";
        getline(cin, priority[i]);
    }

    cout << "\n=== Task List ===" << endl;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". Task: " << taskName[i]
             << " | Priority: " << priority[i] << endl;
    }

    cout << "\nProgram finished successfully." << endl;

    return 0;
}
