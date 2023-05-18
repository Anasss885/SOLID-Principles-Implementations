class Database {
public:
    void saveData(const std::string& data) {
        // save data to database
    }
};

class User {
public:
    void saveUserData(const std::string& data) {
        Database db;
        db.saveData(data);
    }
};
/*
he User class depends directly on the Database class. 
This creates a tight coupling between the two classes, which makes it difficult to modify or extend the code in the future.
so this violates Dependency Inversion Principle DIP
*/
