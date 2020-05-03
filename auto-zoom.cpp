#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

char *linkChar = "https://strathmore.zoom.us/j/91663632505?pwd=eHBuamhFQkhxK0hwVXNwVGROc1E2QT09";

int main()
{
    //open link in browser(internet explorer)
    ShellExecute(NULL, "open", "iexplore", linkChar, NULL, SW_SHOWNORMAL);
}