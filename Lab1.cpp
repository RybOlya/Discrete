#include <iostream>
#include <vector>

using namespace std;
void dopovn(int U[], int compset[], int n, int m)
{
    vector<int> res;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (compset[i] < U[j]) {
            res.push_back(compset[i]);
            i++;
        }
        else if (compset[i] > U[j]) {
            j++;
        }
        else if (compset[i] == U[j]) {
            i++;
            j++;
        }
    }
    while (i < n){
        cout << compset[i] << " ";
        res.push_back(compset[i]);
        i++;
    }

    for (int& c : res) {
        cout <<c << ",";
    }
}
void cartesian(int A[], int B[], int n, int m)
{
    vector<pair<int, int>> decart;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            decart.push_back(make_pair(A[i], B[j]));
        }
    }
    cout << "Cartesian product of {";
    for (auto &el: decart)
    {
        cout <<"{" << el.first << "," << el.second <<"}";
    }
}
int main() {
    int set1[] = { 1,2,4 ,5, 6, 8, 10, 11, 13 };
    int set2[] = { 1, 2, 3, 4, 5, 6};
    int U[] = { 1, 3, 4, 6, 9, 12};
    
    int size1 = sizeof(set1) / sizeof(set1[0]);
    int size2 = sizeof(set2) / sizeof(set2[0]);
    int sizeU = sizeof(U) / sizeof(U[0]);
    
    dopovn(U,set1,  size1,sizeU);
    cartesian(set1, set2, size1, size2);
    

}
