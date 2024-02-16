#include <iostream>

using namespace std;
int main()
{
    cout << "Game over!" << endl;
    cin.ignore(cin.rdbuf()->in_avail()+1);
    return 0;
}
