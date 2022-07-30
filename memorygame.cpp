/*This is a memory game which displays a number for 3 second and asks the user to enter that number later.
created by: Hiva Hakimzadeh
date: 07/30/2022
*/
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<random>
#include <unistd.h>
using namespace std;
//this function generates a random number
int numberGenerator()
{
 srand(time(0));
 int num = rand();
 return num;
}
main()
{
   int number1; int remember, score;
   score=0;
   cout<<setw(60) <<"Guessing Game:"<< setw(60)<<endl;
   remember= numberGenerator();
   cout<<"Number to Remember: "<<remember<<endl;
   sleep(3);
   system("cls");
   cout<<setw(60)<<"What was the number: ";
   cin>>number1;
   while(number1==remember)
   {
    score++;
    cout<<endl;
    remember= numberGenerator();
    cout<<setw(60)<<"Number to Remember: "<<remember<<endl;
    sleep(10);
    system("cls");
    cout<<setw(60)<<"What was the number: ";
    cin>>number1;
   }
   cout<<setw(60)<<"Your Score: "<<score;
   return 0;

}
