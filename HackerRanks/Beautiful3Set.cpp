#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include <cctype>
#include <fstream>


using namespace std;
int main() {
    int n, k;
    cin >> n;
    
    k = (2*n)/3;
	cout<<k+1<<endl;
	int y = 2*k-n;
	int x = n-2*y;
    
    for(int  i = 0; i <= y; i++){
		cout << i <<" "<< x + i <<" "<< n- x - 2 * i <<endl;
	}
	for(int  i = 0; i < k-y ; i++){
		cout << y + i + 1 <<" "<< i <<" "<< n - y - 1 - 2*i<<endl;
	}   
    return 0;
}