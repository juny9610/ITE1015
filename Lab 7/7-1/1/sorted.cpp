#include "sorted.h"

using namespace std;

SortedArray::SortedArray() {

}

SortedArray::~SortedArray() {
    numbers_.clear();
}

void SortedArray::AddNumber(int num) {
    numbers_.push_back(num);
}

vector<int> SortedArray::GetSortedAscending() {
    vector<int> v = numbers_;
    sort(v.begin(), v.end());
    return v;
}

vector<int> SortedArray::GetSortedDescending() {
    vector<int> v = numbers_;
    sort(v.begin(), v.end(), greater<int>());
    return v;
}

int SortedArray::GetMax() {
    vector<int> v = numbers_;
    sort(v.begin(), v.end());
    return v[v.size()-1];
}

int SortedArray::GetMin() {
    vector<int> v = numbers_;
    sort(v.begin(), v.end());
    return v[0];
}