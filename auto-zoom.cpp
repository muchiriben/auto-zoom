#include <windows.h>
#include <iostream>
#include <string>
#include <ctime>

#define CLOCKS_PER_SEC 1000;

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

int main()
{
    //open link in browser(internet explorer)
    ShellExecute(NULL, "open", "iexplore", linkChar, NULL, SW_SHOWNORMAL);
    sleep(7);
    system("taskkill /F /T /IM iexplore.exe");
}