#include<bits/stdc++.h>
using namespace std;

int main() {
    int n[6] = {1, 3, 5, 6, 7, 6};
    int largest = n[0];
    
    for (int i = 0; i < 6; i++)
    {
        if(largest < n[i]){
            largest = n[i];
        }
    }

    cout << largest << endl;
    
    return 0;
}