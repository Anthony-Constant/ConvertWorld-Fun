#include <iostream>

//use namespace to use cout << instead of cout:: << 
using namespace std; 

 //DECLARE ALL VARIABLE FOR OPTIONS HERE:

 //create void variable to Convert Centimeters to Feet/Inches
void ConvertCMToFeetInches() { 

  //Named constants
  const double CENTIMETERS_TO_FEET = 30.48;
  const double CENTIMETERS_TO_INCHES = 2.54;

//Declare variables

  //create variable to calculate the Total Inches
  double TotalFeet;
  double TotalInches;

  //create variable to user input centimeters 
  int Centimeters;

  //MODIFY USER INTERACTION HERE
  cout << "Welcome to Convert Cemtimeters to Feet and Inches  \n\n"; // 
  cout << "Enter an interger for Centimeters: \n\n";
 cin >> Centimeters;
  cout << endl;
 cout << "The numbers you entered are " << Centimeters << " for Centimers. \n";

//Convert Centimers to Feet and Inches
TotalInches = Centimeters / CENTIMETERS_TO_INCHES;
TotalFeet = Centimeters / CENTIMETERS_TO_FEET;

cout << "The total number of Feet  = " << TotalFeet << " and Inches = " << TotalInches << endl;

}

//create void variable to convert LBS to Ounces/Grams
void ConvertLbsToOuncesGrams() {
 
 //Named constants
const int POUND_TO_OUNCE = 16;
const double POUND_TO_GRAM = 453.592;

 //Declare variables
 int Pound;
 int TotalOunce;
 double TotalGram;



 
 //MODIFY USER INTERACTION HERE
  cout << "Welcome to Convert LSB to Ounces and Grams \n\n";
  cout << "Enter a value for Pound \n";
  cin >> Pound;
  cout << endl;
  cout << "You have entered " << Pound << " for Pounds. \n\n";

  //Convert Pounds into Ounces
  TotalGram = POUND_TO_GRAM * Pound;
  TotalOunce = Pound * POUND_TO_OUNCE;
  cout << "The total number of Ounces = " << TotalOunce << " and Grams = " << TotalGram << endl;
  
}

//create void varaible to convert Yard3ToMeter3
void ConvertYard3ToMeter3() {


 //Named constants
 const double YARD_TO_METER = 1.094;

 //Declare variables
 int Yard;
 double TotalMeter;

 //MODIFY USER INTERACTION HERE
 cout << "Welcome to Convert Yard3ToMeter3 \n\n";
 cout << "Enter a value for Yards: \n";
 cin >> Yard;
 cout << endl;
 cout << "You have enterted " << Yard << " for Cubic Yards. \n\n";

 //Convert Yard3ToMeter3
 TotalMeter = Yard / YARD_TO_METER;
 cout << "The total number of Cubic Meters = " << TotalMeter << endl;

}

//BIRTHDAY CALCULATOR
void BirthdayCalculator() {

  //Named constants
  const int BIRTHDAYS_DAYS_OLD = 8;
  const int BIRTHDAY_MONTHS_OLD = 2;
  const int BIRTHDAY_YEARS_OLD = 2019;
  const int RETIREMENT_AGE = 68;
  const int YEARS_CONVERTS_DAYS = 365;

  

//Declare variables
int Day;
int Month;
int Year;
bool answer;


int TotalDaysOld;
int TotalMonthsold;
int TotalYearsold;
int TotalRetirementAge;
int TotalRetirementAgeDays;




//BIRTHDAY CALCULATOR USER INTERACTION
cout << "Welcome to Birthday Calculator! \n\n";
cout << "Enter the Day of your Birthday: \n";
cin >> Day;
cout << "  You have entered " << Day << " For Day. \n\n";
cout << "Enter the Month of your Birthday \n";
cin >> Month;
cout << "   You have entered " << Month << " For Month. \n\n";
cout << "Enter the Year of your Birthday \n";
cin >> Year;
cout << "   You have entered " << Year << " For Year. \n\n";

cout << "Calculating how old your are... \n\n";


//MINUS BIRTHDAY DAYS OLD FROM PRESENT DAY
TotalDaysOld = BIRTHDAYS_DAYS_OLD - Day;
TotalMonthsold = BIRTHDAY_MONTHS_OLD - Month;
TotalYearsold = BIRTHDAY_YEARS_OLD - Year;
TotalRetirementAge = RETIREMENT_AGE - TotalYearsold;
TotalRetirementAgeDays = YEARS_CONVERTS_DAYS * TotalRetirementAge;

cout <<"You are " << TotalYearsold << " Years, " << TotalMonthsold << " Months, " << TotalDaysOld << " Days Old. \n\n";




//RETIREMENT USER INTERACTION
cout << "Would you like to know how many days you have left until you retire ? Enter 1 for yes. Enter 0 for no. \n";
cin >> answer;


if (answer == 1) {
cout << "You entered " << answer << endl;
cout << "You have: " << TotalRetirementAgeDays << " many Days left until you retire. \n";
cout << endl;

} else {

  cout << "\n Return back to Convert World Menu n " << endl;


}

}


void QuitNow(void) { //declare the void variable 'QuitNow'
string input; //declare string input for user to enter their option
cout << " Are you sure? (Type 'Y', 'Yes' or 'y' or 'N', 'No', 'n')"; //output this message to user
cin >> input; //initialise input
if (input == "Yes" ) { //if the user enters 'Yes' 
  cout << "Thank you for using Convert World  - please come back soon." << endl; //send this message to the user

}

else if (input == "Y" ) { //if the user enters 'Y' 
  cout << "Thank you for using Convert World - please come back soon." << endl; //send this message to the user

}

else if (input == "y" ) { //if the user enters 'y' 
  cout << "Thank you for using Convert World - please come back soon." << endl; //send this message to the user

}

 else if (input == "No") { //if the user enters 'No'
  cout << "\n You entered No, Return back to menu. \n";  //send this message to the user
 return; //return user back to menuOption
}

else if (input == "N") { //if the user enters 'N'
  cout << "\n You entered No, Return back to menu. \n";  //send this message to the user
 return; //return user back to menuOption
}

else if (input == "n") { //if the user enters 'n'
  cout << "\n You entered No, Return back to menuOption. \n";  //send this message to the user
 return; //return user back to menuOption
}

else {
  cout << "\n Invalid Input, Please try again. \n"; //if the user enters non-valid input send this message to user and return back to menuOption
 return;
}

	exit(EXIT_SUCCESS); //execute the c++ exit function and pass it c++ contant value called EXIT_SUCCESS; EXIT_SUCCESS is actually 0 - for more info see: http://www.cplusplus.com/reference/cstdlib/exit/
}


  //CREATE USER MENU HERE
 void ShowMenu() {



   
   int menu;

   do { //starts an endless loop - this is so the code below repeats forever until quit is used 
  
   //create options here for the user to select
    cout << "\n\n Welcome To Convert World! \n\n"; //show user welcome message
    cout << "\n\n Select an option (1-4) and hit return:  \n\n";
    cout << "1. Convert Centimeters to Feet/Inches    2. Convert Lbs to Ounces/Grams 3. Convert Yards to CubicMeters   4. Birthday Calculator   0. Quit   \n\n";
    cin >> menu;
    
    //option 1 linked to void ConvertCMToFeetInches
    if (menu==1) {
      ConvertCMToFeetInches();

    }
//option 2 linked to void ConvertLbsToOuncesGrams
    if (menu==2) {
ConvertLbsToOuncesGrams();



    }
//option 3 linked to void ConvertYard3ToMeter3
    if (menu==3) {
      ConvertYard3ToMeter3();

    }
    //option 4 linked to void BirthdayCalculator
    if (menu==4) {
      BirthdayCalculator();

    }

     //option 0 linked to void QuitNow
    if (menu==0) {
      QuitNow();

    }

 }
   while(true); //this tells the computer the conditions to break the "do" loop - while true is always true and therefore will continue to an endless loop.
  }



int main() {


//MAIN BODY APPEAR TO USER
 ShowMenu(); //declare menu to appear to user
 return 0; //return integer to user



 }
