#include<iostream>
using namespace std;

int main(){
 struct Entry{
  string name;
  int number;
 }

 vector<Entry> phone_book{
  {"David Hume",123456},
  {"Karl Popper",234567},
  {"Bertrand Arthur William Russell",345678}
 }

 void print_book(const vector<Entry>& book){
  for (int i = 0; i!=book.size(); ++i){
   cout << book[i] << '\n';
  }
 }

 print_book(phone_book);
}
