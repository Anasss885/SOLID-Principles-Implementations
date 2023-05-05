class Account {

  public:
    Account(double balance, int type_of_account) : balance(balance), type_of_account(type_of_account) {}

    void deposit(double amount) {
      balance += amount;
    }
  
    void withdraw(double amount) {
      balance -= amount;
    }

    double getBalance() const {
      return balance;
    }

    double calculateInterest() const {
      if (type_of_account == 1) {

      } else if (type_of_account == 2) {

      } .....
      // LOGIC based on type of account
    }
  private:
    double balance;
    int type_of_account;
};
// you can see that if we want to calculate interest to different types of accounts we must modify on existing code in account class , which violates OCP 
