#include <bits/stdc++.h>
using namespace std;

int n, r;
vector<char> arr;

void permutacion(int pos){
    if(pos == r){
        for(int i = 0; i < r; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    // 1 | 2 3 4 5
    for(int i = pos; i < n; i++){
        swap(arr[pos], arr[i]);
        permutacion(pos + 1);
        swap(arr[pos], arr[i]);
    }
}

int main()
{
    cin >> n >> r;
    arr = vector<char>(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    permutacion(0);

}
