#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin >> arr[i][j];
        }
    }

    int k;
    cin >>k;
    bool ans= false;

    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if(arr[i][j]==k){
                ans = true;
            }
        }
    }

    if(ans == true){
        cout << "Element Found"<< endl;
    }else {
        cout << "Element not Found"<< endl;
    }

    return 0;
}