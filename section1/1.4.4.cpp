#include <iostream>
int main(){

    int currVal = 0, val = 0; // currVal is the number we’re counting; we’ll read new values into val
    if(std::cin >> currVal) {
        int cnt = 1; 
        while(std::cin >> val ){
            if (val == currVal) // if the values are the same
                ++cnt; // add 1 to cnt
                else { // otherwise, print the count for the previous value
                    std::cout << currVal << " occurs "
                    << cnt << " times" << std::endl;
                    currVal = val; // remember the new value
                    cnt = 1; 
                }
          }
          std::cout << currVal << " occurs "
                << cnt << " times" << std::endl;
    } 
    return 0; 
}

//struggled
// a while with input reads each value and performs with it in the variables place
// cin >> val == 22 26 23 
// each time it loops around it substitutes one in