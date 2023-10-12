#include <iostream>

using namespace std;

int main ()

{

 // an array with 5 elements.

 double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};

 double *p;

 p = balance;

 // output each array element's value 

 cout << "Array values using pointer " << endl; 

 for ( int i = 0; i < 5; i++ )

 {

 cout << "*(p + " << i << ") : ";

 cout << *(p + i) << endl;

 }

 cout << "Array values using balance as address " << endl;

 for ( int i = 0; i < 5; i++ )

 {

 cout << "*(balance + " << i << ") : ";

 cout << *(balance + i) << endl;

 }

 return 0;

}

//passing array to function
double getAverage(int arr[], int size)
{
 int i, sum = 0; 
 double avg; 
 for (i = 0; i < size; ++i)
 {
 sum += arr[i];
 }
 avg = double(sum) / size;
 return avg;
}
