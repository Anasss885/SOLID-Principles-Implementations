class Authentication { // have only one responsiblity for Authentication
public:
    void login() {
        cout << "User logged in" << endl;
    }
    void logout() {
        cout << "User logged out" << endl;
    }
};
class user_info {// have only one responsiblity for Printing User Information 
public:
    void printUserInfo(string username) {
        cout << "Username: " << username << endl;
    }
};
class User : public Authentication, public user_info {
};

int main() {
    User user;
    user.login();
    user.printUserInfo("Anas Alaa");
    user.logout();
    return 0;
}
/*The Aim that to have a modulartiy aspect in our code , as every class have a single specific job so if we want to change it , we have only one reason/motive 
without any effect on other classes

*/
