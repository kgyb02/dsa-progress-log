#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
int minimumChairs(string s) {
        int no_of_chairs = 0;
        int people = 0;

        for(auto x: s){
            if(x == 'L'){
                people--;
            }
            if(x == 'E'){
                people++;
                no_of_chairs = max(people, no_of_chairs);
            }
        }

        return no_of_chairs;
    }
};