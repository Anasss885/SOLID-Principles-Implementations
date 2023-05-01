class User { 
    /*This class violates Single Responsiblity principle as it have 2 reasons to change
    one for Authentication (Login,Logout) and other for Printing user info 
*/
public:
    void login() {
        cout << "User logged in" << endl;
    }
    void logout() {
        cout << "User logged out" << endl;
    }
    void printUserInfo(string username) {
        cout << "Username: " << username << endl;
    }
};
