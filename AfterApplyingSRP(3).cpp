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
};

class InputManager {
public:
    std::string getMessageFromUser() const {
        std::string message;
        std::getline(std::cin, message);
        return message;
    }
};

//Distrbuting the 2 responsibilites on the 2 classes to be more specific/straightforward and ease with future adjustments.

int main() {
    InputManager inputManager;
    MessagePrinter printer;
    
    std::cout << "Please enter a message: ";
    std::string message = inputManager.getMessageFromUser();
    
    printer.printMessage(message);
    
    return 0;
}
