/******************************************************************************
filename:       hw6_windChill_pwiese.cpp
author:         Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  Max T.  
date:           2/16/19  2/16/19  2/16/19  2/16/19  2/16/19  2/16/19  2/16/19 
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

float v, t, w;			//for, in order, //wind speed, temp., and windchill calculation

// function prototypes
void intro();			// introduction to what the program does
float getTemp(float t);		// prompts the user to enter a temperature in Celsius
float getWind(float v);
float computeWC(float t, float w, float v);	// computes the windchill index for the temperature input
void showWC(float t, float w);	// shows the original temperature and the windchill index


int main(){
    float v, t, w;	
    
    intro();
    t = getTemp(t);
    v = getWind(v);
    w = computeWC(t,w,v);
    showWC(t,w);
  return 0;
}


void intro(){
    cout << "This program will compute the windchill index for a given temperature, inputted by the you." << endl;
}


float getTemp(float t){				// gets temp input, while asking again if input is higher than 10
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

float getWind(float v){
    do
    {
        cout << "Please enter a windspeed, must be higher than 3.\n";
        cin >> v;
        if (v < 3)
        {
        cout << "Please enter a windspeed higher than 3.\n" << endl;
    }
    }
    while (v < 3 );

  return v;
}




float computeWC(float t, float w, float v){

  w = 13.12 + (0.6215 * t) - (11.37 * pow (v, 0.16)) + (0.3965 * t * pow (v, 0.016));

  return w;
}




void showWC(float t, float w){
    cout << "The original temperature is: " << t << endl;
    cout << "The windchill index is: " << w << endl;
}

