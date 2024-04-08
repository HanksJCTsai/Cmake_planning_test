#include <iostream>
#include "process.h"
using std::cout, std::endl;

void Process::planProcess()
{
    cout << "This is a planning process" << endl;
    my_map.mapInfo();
    cout << "Planning success!" << endl;
}