/******************************************************************************
filename:       hw6_windChill_pwiese.cpp

author:         Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  
date:           2/16/19  2/16/19  2/16/19  2/16/19  2/16/19  2/16/19  2/16/19  
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;


//where v = wind speed in m/sec, t = temperature in degrees Celsius for t <= 10, w = windchill index (in
//degrees Celsius).

float v, t, w;			//for, in order, //wind speed, temp., and windchill calculation

// function prototypes
void intro();			// introduction to what the program does
float getTemp ();		// prompts the user to enter a temperature in Celsius
		    // Within this function, there should be data validation to make
			//sure the value input is <= 10. If it isn't, there should be a loop that runs until the user inputs a valid number.
			//loop that runs until the user inputs a valid number.

float computeWC();	// computes the windchill index for the temperature input
void showWC ();	// shows the original temperature and the windchill index

int main(){
    void intro();
    float getTemp();
    float computeWC();
    void showWC();

  return 0;
}





void intro(){
    cout << "This program will compute the windchill index for a given temperature, inputted by the you." << endl;
}





float getTemp(){				// gets temp input, while asking again if input is higher than 10
    do
    {
        cout << "Please enter a temperature in Celsius, no higher than 10.\n";
        cin >> t;
        if (t > 10)
        {
        cout << "Please enter a temperature no higher than 10.\n" << endl;
    }
    }
    while (t > 10);

  return t;
}





float computeWC(float t){

  w = 13.12 + (0.6215 * t) - (11.37 * pow (v, 0.16)) + (0.3965 * t * pow (v, 0.016));

  return w;
}




void showWC(){
    cout << "The original temperature is: " << t << endl;
    cout << "The windchill index is: " << w << endl;
}



