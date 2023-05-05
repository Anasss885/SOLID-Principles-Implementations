/*We can make a Abstract class(Interface) of Account class and make a separate classes for each type of Account that will implement our base abstract class.*/
class Account { //Abstract class with a pure virtual functions 
    public:
        virtual void deposit(double balance) = 0;
        virtual void withdraw(double balance) = 0;
        virtual double getBalance() = 0;
        virtual double calculateInterest() = 0;
}; 

class SavingsAccount : public Account {
    
    public :
        SavingsAccount(double balance) : balance(balance) {}
        
        void deposit(double amount) override {
            balance += amount;
        }
        
        void withdraw(double amount) override {
            balance -= amount;
        }
        
        double getBalance() override {
            return balance;
        }
        
        double calculateInterest() override {
            return balance * 0.04; // 4% interest rate 
        }
    private:
        double balance; 
};

class FixedDepositAccount : public Account {
    
    public :
        FixedDepositAccount(double balance, int time) : balance(balance) {}
        
        void deposit(double amount) override {
            balance += amount;
        }
        
        void withdraw(double amount) override {
            // Logic to withdraw after certain time
            balance -= amount;
        }
        
        double getBalance() override {
            return balance;
        }
        
        double calculateInterest() override {
            return balance * 0.08; // 8% interest rate 
        }
    private:
        double balance; 
        int time;
};

class CreditCardAccount : public Account {
public:
    CreditCardAccount(double balance, double limit) : balance(balance), limit(limit) {}
    void deposit(double amount) override {
        balance -= amount;
    }
    void withdraw(double amount) override {
        balance += amount; // credit card withdrawal
    }
    double getBalance() override {
        return balance;
    }
    double calculateInterest() override {
        return balance * 0.18; // 18% interest rate
    }

    void increaseLimit(double addon) {
        limit += addon;
    }
private:
    double balance;
    double limit;
};

/* so, u can see that we have 3 different classes with accounts types that implements interface behavior(Account Class) as if we want to add a new type 
of accounts we will make another new separate class to implement a specific behavior without any need to modify existing code . 
*/
