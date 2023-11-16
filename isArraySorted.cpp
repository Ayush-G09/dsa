#include<bits/stdc++.h>
using namespace std;

bool check(int n[]){
    for (int i = 0; i < 5; i++)
    {
        if (n[i] >= n[i-1])
        {}else{
            return false;
        }
           
    }
    return true;
}

int main() {
    int n[5] = {1, 2, 3, 4, 5};

    cout << check(n) << endl;
    
    return 0;
}