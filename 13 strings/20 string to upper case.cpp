#include <iostream>
#include <string>
using namespace std;

int main() {
    string s= "BacDeF";
    for(int i=0; i<s.size(); i++){
        if(s[i]>= 'a'&& s[i]<= 'z'){
            s[i]-= 32;
        }
    }

    cout << s << endl;
    return 0;
}