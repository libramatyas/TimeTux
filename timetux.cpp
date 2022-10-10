#include <stdio.h>
#include <iostream>
#include <sstream>

using namespace std;
//input phase
string filepath;
string timeformat;
string timeframe;
//assemble phase
string prefetch;
int sel;
string launch;
//output phase
string check = " ✓\033[0m\n";
string error = " ⤬\033[0m\n";
string prefix = "\033[1;33m[TimeTux] ";


void uinput()
{
    printf("\033c");
    cout << prefix << "Please paste the path to file you want the time to be changed of" << endl;
    cout << prefix << "Note that if the file does not exist it will be created due to issues with c++" << endl;
    cout << "> ";
    cin >> filepath;
    printf("\033c");
    cout << prefix << "Now please select mode" << endl;
    cout << "1: minutes" << endl;
    cout << "2: hours" << endl;
    cout << "3: days" << endl;
    cout << "4: months" << endl;
    cout << "5: years(why)" << endl;
    cout << "6: cancel" << endl;
    cout << "> ";
    cin >> timeformat;
    printf("\033c");
    cout << prefix << "Now please give number that of the specific time frame";
    cout << "> ";
    cin >> timeframe;
    printf("\033c");
}

int main()
{   
    uinput();
    
    if (timeformat == "1") {
        if (timeframe == "1") {
            prefetch = "touch -d (1 minute ago) ";
            cout << prefix << "Set changed date to 1 minute ago" << check << endl;
            return 0;
        }
    }
    
    if (timeformat == "1") {
        prefetch = "touch -d '" + timeframe + " minutes ago' ";
        cout << prefetch << endl;
        cout << prefix << "Set changed date to " + timeframe + " minutes ago" << check << endl;
    } else if (timeformat == "2") {
        prefetch = "touch -d '" + timeframe + " hours ago' ";
        cout << prefetch << endl;
        cout << prefix << "Set changed date to " + timeframe + " hours ago" << check << endl;
    } else if (timeformat == "3") {
        prefetch = "touch -d '" + timeframe + " days ago' ";
        cout << prefetch << endl;
        cout << prefix << "Set changed date to " + timeframe + " days ago" << check << endl;
    } else if (timeformat == "4") {
        prefetch = "touch -d '" + timeframe + " months ago' ";
        cout << prefetch << endl;
        cout << prefix << "Set changed date to " + timeframe + " months ago" << check << endl;
    } else if (timeformat == "5") {
        prefetch = "touch -d '" + timeframe + " year ago' ";
        cout << prefetch << endl;
        cout << prefix << "Set changed date to " + timeframe + " year ago" << check << endl;
    } else if (timeformat == "6") {
        cout << prefix << "Successfully Cancelled!" << check << endl;
        return 0;
    } else {
        cout << prefix << "Invalid option" << error << endl;
        return 400;
    }
//
    launch = prefetch.append(filepath);
    system((launch).c_str());
    return 0;
}

 