/*
Write a program that prompts the user to insert an integer value, 
a decimal number and his name and print the inserted value as output.
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int ID;
  float Height;
  char Name[100];

  cout << "Enter ID: ";
  cin >> ID;
  cout << "ID: " << ID;
  cout << " \nHeight: ";
  cin >> Height;
  cout << "\nHeight: " << Height;
  cout << "\nName: ";
  cin >> Name;
  cout << "\nName: " << Name;
  getch();
}
