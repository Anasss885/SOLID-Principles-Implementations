#include <iostream>
#include <string>

class MessagePrinter {
public:
    void printMessage(const std::string& message) const {
        if (message.length() > 10) {
            std::cerr << "Error: Message too long" << std::endl;
            return;
        }
        
        std::cout << "Message: " << message << std::endl;
    }
    
    std::string getMessageFromUser() const {
        std::string message;
        std::getline(std::cin, message);
        return message;
    }
};
//This class has 2 responsibilites , one for printing and other for getting an input from the user , as both of them not relatable so they violtes SRP

int main() {
    MessagePrinter printer;
    
    std::cout << "Please enter a message: ";
    std::string message = printer.getMessageFromUser();
    
    printer.printMessage(message);
    
    return 0;
}
