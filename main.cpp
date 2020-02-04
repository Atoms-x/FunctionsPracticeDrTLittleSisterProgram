/*Folder: Little_Sister_YourLastName
CPP: Function_Practice_Little_Sister.cpp
Teacher: Dr. Tyson McMillan, 03 Feb 2020
Student: Chet_Lockwood

Description: Dr_T's little sister is smart.
She uses a divide and concur method to get $20 from the parents.
She asks mom and dad individually. Based upon their responses she can
earn $0, $20, or $40 from them.
Create a dad/mom yes/no (True/false) program to capture the possibilities.
Use functions and pass by value.
Also address the programming challenges in int main() make the appropriate
function prototypes, function definition, and functions calls to make the program work.
This completed work shall be uploaded to Extra Credit item 15: Little_Sister_YourLastName.zip
*/

#include <iostream> //for cin & cout
#include <cmath> //for powers/exponents
#include <iomanip> //setting precision level
#include <cstdlib> //for the console clear escape code

using namespace std;

//$_earned       mom  dad
double MakeBank(bool,bool); //function prototype
void welcomeMessage(); //function prototype 
void dayOfTheWeek(int); //function prototype
double numberCube(double); //function prototype

int main()
{
   char contd = '\0'; //for the exit code
   
   //color code variables and clear
   string cRed = "\x1b[1;91m";
   string cGreen = "\x1b[1;32m";
   string cYellow = "\x1b[1;93m";
   string cBlue = "\x1b[1;34m";
   string cOrange = "\x1b[1;33m";
   string cCyan = "\x1b[1;36m";
   string cPurple = "\x1b[1;35m";
   string cItalic = "\x1b[3m";
   string cUnderL = "\x1b[4m";
   string cReset = "\x1b[0m";
   string cClear = "\033[2J\033[1;1H";

  
   while (contd != 'E' && contd != 'e') //exit loop condition
   {
    int dayInput = 0; //accept day input from the user
    welcomeMessage(); //void function call

    double powInput = 0.0;
    
    //function calls (true = "yes", false="no"
    cout << "\nLittle Sister Function calls: ";
    cout << fixed << setprecision(1) << "\nOption 1, Little Sister Earns: $" << MakeBank(true,false);
    cout << "\nOption 2, Little Sister Earns: $" << MakeBank(false,true);
    cout << "\nOption 3, Little Sister Earns: $" << MakeBank(true,true);
    cout << "\nOption 4, Little Sister Earns: $" <<  MakeBank(false,false) << endl;

    /*Programming Challenges
      1. Extend this program to output how much Little Sister earns in each scenario.
      2. Create a void welcomeMessage(); function to show a nice greeting on screen to the program.
      3. Extend this program to write a void dayOfTheWeek(int); function given user input of the number (1 output Sunday);
      4. Output each day of the week in a different color.
      5. Extend this program create a function double numberCube(double); to output the cube of the number passed.
      6. Extend this program set the precision of the numberCube result to 4 decimal places
      7. Loop the program until exit conditions 'E' AND 'e', clear the screen upon each loop #include<cstdlib> system("cls");
    */
    
    cout << cBlue << "\nREVEAL " << cYellow << "TO " << cGreen << "ME " << 
    cRed << "THE " << cCyan << "DAY\n" << cReset << endl; //prompt for the day
    cin >> dayInput; //accept input of the day
    dayOfTheWeek(dayInput);

    cout << cItalic << "\nI NEED A NUMBER TO CUBE\n" << cReset << endl;
    cin >> powInput;
    cout << "\nYOUR NUMBER CUBED IS " << fixed << setprecision(4) << numberCube(powInput) << cReset 
    << endl;

    cout << cRed << cUnderL << "\nCONTINUE? Y (e or E to quit)" << cReset << endl;
    cin >> contd;

    cout << cClear; //clear command
   }
    cout << cRed << "Daisy, daisy, give meee yoouurrrr annsssswwwweeerr ddoooooooooooooo....." << endl;
    
    return 0;
}

//function definition
double MakeBank(bool mom, bool dad)
{
	double amtEarned = 0.0; //what sister can get from parents
	//handle each scenario How much does Little Sister earn $20 increments.

  //increments amtEarned by 20.0 everytime mom is equal to true
  if (mom == true)
  {
    amtEarned += 20.0;
  }
  //increments amtEarned by 20.0 everytime dad is equal to true
  if (dad == true)
  {
    amtEarned += 20.0;
  }

  if (mom == false)
  {
    amtEarned += 0.0;
    cout << "\n\t Ain't! " << endl;
  }

	return amtEarned;
}

//void function definition
void welcomeMessage()
{
  cout << "\nBrother9000:  I can't let you do that sister... " << endl;
  for(int i = 1; i < 25; i++)
  {
    cout << "*";
  }
  cout << endl;
}

void dayOfTheWeek(int day)
{
  
  string cRed = "\x1b[1;91m";
  string cGreen = "\x1b[1;32m";
  string cYellow = "\x1b[1;93m";
  string cBlue = "\x1b[1;34m";
  string cOrange = "\x1b[1;33m";
  string cCyan = "\x1b[1;36m";
  string cPurple = "\x1b[1;35m";
  string cItalic = "\x1b[3m";
  string cUnderL = "\x1b[4m";
  string cReset = "\x1b[0m";

  
  if(day == 1)
  {
    cout << cRed << "\nTHE DAY IS SUNDAY" << cReset;
  }
  else if(day == 2)
  {
    cout << cGreen << "\nTHE DAY IS MONDAY" << cReset;
  }
  else if(day == 3)
  {
    cout << cYellow <<"\nTHE DAY IS TUESDAY" << cReset;
  }
  else if(day == 4)
  {
    cout << cBlue << "\nTHE DAY IS WEDNESDAY" << cReset;
  }
  else if(day == 5)
  {
    cout << cOrange << "\nTHE DAY IS THURSDAY" << cReset;
  }
  else if(day == 6)
  {
    cout << cCyan << "\nTHE DAY IS FRIDAY" << cReset;
  }
  else if(day == 7)
  {
    cout << cPurple << "\nTHE DAY IS SATURDAY" << cReset;
  }
  else
  {
    cout << cItalic << cUnderL << cRed << "\nTHATS NOT A DAY OF THE WEEK" << cReset;
  }
  cout << endl;
}

double numberCube(double powNum)
{
  return pow(powNum, 3);
}