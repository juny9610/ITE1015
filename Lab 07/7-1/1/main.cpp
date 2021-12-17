#include "sorted.h"

int main(void) {

    SortedArray *SA = new SortedArray();

    string input;
    getline(cin, input);

    while(input.find(" ") != string::npos) {
        size_t index = input.find(" ");
        int num = stoi(input.substr(0,index));
        SA->AddNumber(num);
        input.erase(0,index+1);
    }

    size_t index = input.find(" ");
    int num = stoi(input.substr(0,index));
    SA->AddNumber(num);
    input.erase(0,index+1);

    while(true) {

        getline(cin, input);

        if(input == "quit") break;

        vector<int> v;

        if(input == "ascend") {
            v = SA->GetSortedAscending();
            for(int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        }

        else if(input == "descend") {
            v = SA->GetSortedDescending();
            for(int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        }

        else if(input == "max") {
            cout << SA->GetMax() << endl;
        }

        else if(input == "min") {
            cout << SA->GetMin() << endl;
        }

        else {
            while(input.find(" ") != string::npos) {
                size_t index = input.find(" ");
                int num = stoi(input.substr(0,index));
                SA->AddNumber(num);
                input.erase(0,index+1);
            }
            size_t index = input.find(" ");
            int num = stoi(input.substr(0,index));
            SA->AddNumber(num);
            input.erase(0,index+1);
        }

    }


    return 0;
}