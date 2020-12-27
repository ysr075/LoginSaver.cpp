# include <iostream>
# include <fstream>
using namespace std;

int main() {
    cout << "\nWelcome to my Login Saver project on C++\n\nprogrammed by @ysr075 on GitHub\n";
    cout << "\n=============================================================================\n";
    while(1) {
        string username;
        string password;
        cout << "\nusername: ";
        cin >> username;
        cout << "password: ";
        cin >> password;
        ofstream MyFile("database.txt");
        MyFile << "\nusername: " + username; 
        MyFile << "\npassword: " + password;
        cout << "\n=============================================================================\n";
    }
    return 0;
}
