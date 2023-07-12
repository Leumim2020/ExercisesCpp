#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc,char *argv[]){
    
    std::vector <float> v(10);
    
    for(auto &it : v){
        std::cout << "Type value->";
        std::cin >> it;
    }
    
    std::sort(v.begin(),v.end());
    
    for(auto &it : v)
        std::cout << " " << it;
    
    return 0;
}