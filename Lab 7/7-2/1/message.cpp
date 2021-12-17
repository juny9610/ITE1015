#include "message.h"

MessageBook::MessageBook() {
}

MessageBook::~MessageBook() {
    messages_.clear();
}

void MessageBook::AddMessage(int number, const string& message) {
    messages_.insert(make_pair(number, message));
}

void MessageBook::DeleteMessage(int number) {
    messages_.erase(number);
}

vector<int> MessageBook::GetNumbers() {
    vector<int> v;
    map<int,string>::iterator it;
    for(it = messages_.begin(); it != messages_.end(); it++) 
        v.push_back(it->first);

    return v;
}
const string& MessageBook::GetMessage(int number) {
    map<int,string>::iterator it;
    it = messages_.find(number);

    return it->second;
}