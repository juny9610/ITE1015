#include "message.h"

int main(void) {

    MessageBook *MB = new MessageBook();

    while(true) {

        string inputs;
        getline(cin, inputs);

        if(inputs == "quit") break;

        if(inputs == "list") {
            vector<int> v = MB->GetNumbers();
            vector<int>::iterator it;
            for(it = v.begin(); it != v.end(); it++)
                cout << *it << ": " << MB->GetMessage(*it) << endl;
        }

        vector<string> input;
        size_t pos = inputs.find(' ');
        input.push_back(inputs.substr(0,pos));
        inputs.erase(0,pos+1);

        if(input[0] == "add") {
            pos = inputs.find(' ');
            input.push_back(inputs.substr(0,pos));
            inputs.erase(0,pos+1);
            MB->AddMessage(stoi(input[1]),inputs);
        }

        else if(input[0] == "delete") {
            MB->DeleteMessage(stoi(inputs));
        }

        else if(input[0] == "print") {
            cout << MB->GetMessage(stoi(inputs)) << endl << endl;
        }
    }

    delete MB;

    return 0;
}