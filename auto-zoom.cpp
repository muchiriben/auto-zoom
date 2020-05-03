#include <windows.h>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

char *linkChar = "https://strathmore.zoom.us/j/91663632505";

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

void openClass(int hour, int min, int day)
{
    //monday class
    if (day == 1)
    {
        if (hour == 8 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }

        if (hour == 11 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }

        if (hour == 15 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }
    }

    //tuesday class
    if (day == 2)
    {
        if (hour == 8 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }

        if (hour == 11 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }
    }

    //wednesday class
    if (day == 3)
    {
        if (hour == 8 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }

        if (hour == 10 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }

        if (hour == 13 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }

        if (hour == 15 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }
    }

    //thursday class
    if (day == 4)
    {
        if (hour == 8 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }

        if (hour == 12 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }

        if (hour == 15 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }
    }

    //friday class
    if (day == 5)
    {
        if (hour == 8 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }

        if (hour == 11 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://strathmore.zoom.us/j/91663632505", NULL, SW_SHOWNORMAL);
        }
    }

    //sleep for 10sec
    sleep(10);
    //close browser(internet explorer)
    system("taskkill /F /T /IM iexplore.exe");
}

int main()
{
    //get current time and day
    tm *ltm = getTime();
    int hour = ltm->tm_hour;
    int min = ltm->tm_min;
    int day = ltm->tm_wday;

    //open link in browser(internet explorer)
    openClass(hour, min, day);
}