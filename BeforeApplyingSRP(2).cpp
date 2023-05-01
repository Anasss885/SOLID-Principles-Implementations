class FileManager 
public:
    void saveToFile(string filename, string data) {
        ofstream file(filename);
        file << data;
        file.close();
    }
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
/* so this fileManager class have 2 jobs now one for adding data to the file and other job to retrive a data from this file , 
so if we do have more than one reason to make a change to this file , this violtes our SRP , how can we solve this ?
*/
