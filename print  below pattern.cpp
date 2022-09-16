#include <iostream>
using namespace std;
void pypart(int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " 1,2,3,4";
        }
 
        cout << endl;
    }
}
 
int main()
{
    int n = 4;
    pypart(n);
    return 0;
}
