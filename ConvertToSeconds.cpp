#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    long long int days, hours, minutes, seconds, remainSeconds;
    cout << "enter number of seconds: ";
    cin >> seconds;
    
    if(seconds <= 0)
    {
        cout << "seconds must be greater than zero" << endl;
        exit(-1);
    }
    
    days = seconds / (24 * 3600);
    
    seconds = seconds % (24 * 3600);
   
    hours = seconds / 3600;
    
    seconds = seconds % 3600;
    
    minutes = seconds / 60;
    
    seconds = seconds % 60;
    
    remainSeconds = seconds;
    
    if(days >= 1)
    {
        cout << "Day(s): " << days << endl;
    }
    if(hours >= 1)
    {
        cout << "Hour(s): " << hours << endl;
    }
    if(minutes >= 1)
    {
        cout << "Minute(s): " << minutes << endl;
    }
    if(seconds >= 1)
    {
        cout << "Remaining second(s): " << remainSeconds << endl;
    }
    

    return 0;
}

