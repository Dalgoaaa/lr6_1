#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a[12];
    int i;
    int p=1;
    srand(time(0));
    for (i = 0; i < 12; i++)
    {
        a[i] = rand() % 41 - 20;
        cout << setw(5) << a[i];
    }
    cout << endl;
    for (i=0;i<12;i++)
        if(abs(a[i])>=1 && abs(a[i])<=5)
        {
           p*=a[i];
        }
    cout << "Произведение = " << p;
}
