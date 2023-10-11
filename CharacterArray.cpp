// CharacterArray.cc
// Initialisation of a character array and passing to functions

#include <iostream>
using namespace std;

void PrintExtensionNumber(char phoneNumber[]);

int main()
{
   char surname[50];
   char phone[11];
   char subject[] = "Information Engineering";

   // Get user details
   cout <<  "Enter surname and telephone number: " << endl;
   cin  >>  surname >> phone;

   cout <<  surname << " is a student of " << subject << endl;

   // If first two digits are 3 then it is a university number.
   if( phone[0]=='3' && phone[1]=='3') 
   {
      cout <<  "Please contact on university extension ";
      PrintExtensionNumber(phone);  
   }
   else 
   {
      cout <<  "Please contact on external number 9-" << phone[0];
      PrintExtensionNumber(phone);
   }
      
   return 0;
}

// Function to print out extension number. Ignores first digit.
void PrintExtensionNumber(char phoneNumber[])
{
   int i;
   
   for(i=1; phoneNumber[i] != '\0'; i++)
   {
     cout << phoneNumber[i];
   }
   cout << endl;
}
