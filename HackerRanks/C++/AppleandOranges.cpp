#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <limits>
#include <array>
#include <string>
#include <math.h>

using namespace std;

vector<string> split_string(string);

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int cntA = 0, cntB = 0;
    for(int i = 0; i< apples.size(); i++){
        apples[i] = apples.at(i) + a;
        if(apples.at(i) >= s && apples.at(i) <= t){
            cntA++;
        }
    }
    for(int i = 0; i < oranges.size(); ++i){
        oranges[i] = oranges.at(i) + b;
        if(oranges.at(i) >= s && oranges.at(i) <= t){
            cntB++;
        }
    }
    cout << cntA << endl;
    cout << cntB << endl;
}

int main(){
    int s, t, a, b, m, n;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    vector<int> apples(m);
    for(int i = 0; i < m; ++i){
        cin >> apples[i];
    }
    vector<int> oranges(n);
    for(int i = 0; i < n; ++i){
        cin >> oranges[i];
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);
}
    