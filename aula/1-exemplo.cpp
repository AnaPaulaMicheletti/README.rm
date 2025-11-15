#include <iostream>
using namespace std;

int main(){
    int x = 4, y = x + 2;

    for(int i = 1; i <= x; i++)
    {
        cout << x << " " << y << endl;
        y = y + i;
    }

    return 0;
}