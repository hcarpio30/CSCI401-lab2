#include <iostream>
using namespace std;

int main() {
  char name[5]; //User has a maximun of 50 characters for their name
  int orders; //Number of orders the 
  int orderamount[10]; //The value of the 
  int total=0; //The total by default is zero dollars
  
  cout << "Please Enter your name: ";
  cin >> name; //User enters their name

  cout << "How many orders would you like to place?: ";
  cin >> orders; //User enters the number of orders 
   
  for (int i = 0; i < orders; i++) //Based on the number of orders, prompt the user to the following
  {
    cout << "Total amount for order #" << i + 1 << ": "; //User is asked to enter the cost of each order
    cin >> orderamount[i]; //User enters the cost
    total += orderamount[i]; //Add all order costs
    cin.ignore();  
  }
    
  cout << "\nAlright "<< name << ", your total is: " << total << " dollars."; //Prompt user with their name and total
    
  return 0;
}