#include<bits/stdc++.h>
using namespace std;

int main() {
    int n[6] = {1, 3, 5, 6, 7, 6};
    int largest = n[0];
    int secondLargest = INT_MIN;
    
    for (int i = 0; i < 6; i++)
    {
        if(largest < n[i]){
            secondLargest = largest;
            largest = n[i];
        }
    }

    cout << secondLargest << endl;
    
    return 0;
}