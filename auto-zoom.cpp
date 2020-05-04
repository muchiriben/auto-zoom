#include <windows.h>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

bool open = false;

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
    //personal timetable setting
    //monday class
    if (day == 0)
    {
        if (hour == 8 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }

        if (hour == 11 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }

        if (hour == 15 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }
    }

    //tuesday class
    if (day == 2)
    {
        if (hour == 8 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }

        if (hour == 11 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }
    }

    //wednesday class
    if (day == 3)
    {
        if (hour == 8 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }

        if (hour == 10 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }

        if (hour == 13 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }

        if (hour == 15 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }
    }

    //thursday class
    if (day == 4)
    {
        if (hour == 8 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }

        if (hour == 12 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }

        if (hour == 15 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }
    }

    //friday class
    if (day == 5)
    {
        if (hour == 8 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }

        if (hour == 11 && min == 15)
        {
            ShellExecute(NULL, "open", "iexplore", "https://...yourzoomlinkhere", NULL, SW_SHOWNORMAL);
            open = true;
        }
    }

    //sleep for 10sec
    sleep(30);
    //close browser(internet explorer)
    if (open == true)
    {
        system("taskkill /F /T /IM iexplore.exe");
        open = false;
    }
}

int main()
{
    //to run in background(enter .exe shortcut to startup)
    while (true)
    {
        //get current time and day
        tm *ltm = getTime();
        int hour = ltm->tm_hour;
        int min = ltm->tm_min;
        int day = ltm->tm_wday;

        //open link in browser(internet explorer)
        openClass(hour, min, day);
    }
}