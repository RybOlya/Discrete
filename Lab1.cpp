#include <iostream>
#include <vector>

using namespace std;
void dopovn(vector<int> U, vector<int> A)
{
    vector<int> res;
    int i = 0, j = 0;
    while (i < A.size() && j < U.size()) {
        if (A[i] < U[j]) {
            res.push_back(A[i]);
            i++;
        }
        else if (A[i] > U[j]) {
            j++;
        }
        else if (A[i] == U[j]) {
            i++;
            j++;
        }
    }
    while (i < A.size()){
        res.push_back(A[i]);
        i++;
    }
    cout << "\nSet difference of U and A:\n  ";
    for (int& c : res) {
        cout <<c << ",";
    }
}
void decart(vector<int> A, vector<int> B)
{
    vector<pair<int, int>> cart;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < B.size(); j++)
        {
            cart.push_back(make_pair(A[i], B[j]));
        }
    }
    cout << "\nCartesian product:\n";
    for (auto &el: cart)
    {
        cout <<"{" << el.first << "," << el.second <<"}";
    }
    cout << "\n";
}
int main() {
    vector<int> set1 = { 2, 5, 10, 12 };
    vector<int> set2 = { 1, 2, 5, 6};
    vector<int> U = { 1, 3, 4, 6, 9, 12};
    cout << "Set A:\n  ";
    for (int& s : set1) {
        cout << s << ",";
    }
    cout << "\nSet B:\n  ";
    for (int& s : set2) {
        cout << s << ",";
    }
    cout << "\nSet U:\n  ";
    for (int& s : U) {
        cout << s << ",";
    }
    
    dopovn(U,set1);
    decart(set1, set2);
    
}
