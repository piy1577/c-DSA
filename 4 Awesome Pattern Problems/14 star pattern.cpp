#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        for(int j=0;j<n-i;j++){
            cout << "  ";
        }

        for(int k=(2*i)-1;k>0;k--){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i=n; i>=1; i--){
        for(int j=0;j<n-i;j++){
            cout << "  ";
        }

        for(int k=(2*i)-1;k>0;k--){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}