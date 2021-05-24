#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n = 0, x = 0;
    std::vector<int> vec;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> x;
        vec.push_back(x);
    }

    std::sort(vec.begin(), vec.end());

    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }


    return 0;
}
