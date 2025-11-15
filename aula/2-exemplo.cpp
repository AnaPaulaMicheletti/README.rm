#include <iostream>
using namespace std;

int main(){
    int x, y; //y=0 i=1(*10) resultado x=10 //y=1 i=2(*10) resultado x=20... quando bate 4 numeros no y e i, ele para. ultimo numro de i=5

    for(int i = 1; i <= 4; i++){
        y = i - 1;
        x = 1 * 10;

        cout << i << endl;

    }

    return 0;
}