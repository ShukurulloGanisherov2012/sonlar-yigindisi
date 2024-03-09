#include <iostream>
using namespace std;
int main(){
    int numbers[] = {12, 54, 75, 87, 90, 97, 56, 78, 67};
    int S = 0;

    for(int i=0; i < sizeof(sonlar) / 4; i++ ) {
        S = S + sonlar[i];
    }
    cout << S << endl;
}
