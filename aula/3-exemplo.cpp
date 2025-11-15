#include <iostream>
using namespace std;

int main(){
    int y = 10; //y=10 recebe i=0 = 0 //y=10 recebe i=1 = 1 11...

    for(int i = 1; i <= 4; i++){
        cout << i << endl;

        y = y + i;

        cout << y << endl;

    }

    return 0;
}