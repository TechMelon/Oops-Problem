#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1 ; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*i+1 ; j++){
            cout << "*";
        }
        for(int j = 0; j < n-i-1 ; j++){
            cout << " ";
        }
        cout << endl;
    }
    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < k ; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*n-(2*k+1) ; j++){
            cout << "*";
        }
        for(int j = 0; j <= k ; j++){
            cout << " ";
        }
        cout << endl;
    }
}