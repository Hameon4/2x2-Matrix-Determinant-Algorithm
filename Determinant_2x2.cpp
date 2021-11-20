#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vals, ad = 0, bc = 0;
    vector<vector<int>> v;
    cout << "Enter 4 values for the 2x2 matrix: ";
    for (int i = 0; i < 2; i++) {
        vector<int>temp;
        for (int j = 0; j < 2; j++) {
            cin >> vals;
            temp.push_back(vals);
        }
        v.push_back(temp);
    }
    
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << "\t" << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            ad = v[i][i] * v[j][j]; 
            bc = v[i][j] * v[j][i];
        }
    }
    cout << "AD = " << ad << " " << "BC = " << bc << endl;
    cout << "Determinant: " << ad - bc << endl;
    return 0;
}
