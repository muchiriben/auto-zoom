#include <windows.h>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

char *linkChar = "https://strathmore.zoom.us/j/91663632505?pwd=eHBuamhFQkhxK0hwVXNwVGROc1E2QT09";

void sleep(float seconds)
{
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while (clock() < startClock + secondsAhead)
        ;
    return;
}

tm *getTime()
{
    // current date/time based on current system
    time_t now = time(0);

    return localtime(&now);
}

int main()
{
    //get current time and day
    tm *ltm = getTime();
    int hour = ltm->tm_hour;
    int min = ltm->tm_min;
    int day = ltm->tm_wday;

    //open link in browser(internet explorer)
    ShellExecute(NULL, "open", "iexplore", linkChar, NULL, SW_SHOWNORMAL);

    //sleep for 10sec
    sleep(10);
    //close browser(internet explorer)
    system("taskkill /F /T /IM iexplore.exe");
}