class DatabaseInterface {
public:
    virtual ~DatabaseInterface() {}
    virtual void saveData(const std::string& data) = 0;
};

class Database : public DatabaseInterface {
public:
    void saveData(const std::string& data) override {
        // save data to database
    }
};

class User {
public:
    User(DatabaseInterface* db) : db_(db) {}

    void saveUserData(const std::string& data) {
        db_->saveData(data);
    }

private:
    DatabaseInterface* db_;
};
