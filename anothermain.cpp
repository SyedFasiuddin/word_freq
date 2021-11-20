#include <iostream>

using namespace std;

int main(){
    string str = "str str";
    string arr[100][2];
    for(int i = 0; i<str.size(); i++){
        arr[i][0] = "this";
        arr[i][1] = "10"; 
    }
    arr[0][1] = to_string(stoi(arr[0][1]) + 1);
    cout << arr[0][1] << endl;
    return 0;
}
