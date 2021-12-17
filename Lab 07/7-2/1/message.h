#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cctype>

using namespace std;

class MessageBook {
public:
    MessageBook();
    ~MessageBook();

    void AddMessage(int number, const string& message);
    void DeleteMessage(int number);

    vector<int> GetNumbers();
    const string& GetMessage(int number);

private:
    map<int, string> messages_;
};