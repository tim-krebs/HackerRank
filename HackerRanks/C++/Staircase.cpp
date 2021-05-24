#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include <cctype>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i, j, k = n; 
    for (i = 1; i <= n; i++) { 
  

        for (j = 1; j <= n; j++) { 
            if (j >= k) 
                cout << "#"; 
            else
                cout << " "; 
        } 
        k--; 
        cout << "\n"; 
    } 
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}