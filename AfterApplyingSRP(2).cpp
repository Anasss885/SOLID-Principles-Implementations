class FileWriter 
public:
    void saveToFile(string filename, string data) {
        ofstream file(filename);
        file << data;
        file.close();
    }
};

class FileReader {
public:
    vector<string> readFromFile(string filename) {
        vector<string> data;
        string line;
        ifstream file(filename);
        while (getline(file, line)) {
            data.push_back(line);
        }
        file.close();
        return data;
    }
};
/* by this solving way we make a modular program that have a single job oriented classes , so we can deal with each class in a separate way 
or we can make a third class called file that extends/inherits both of these classes and make an instance from it to deal with them
*/
