#include <iostream>
#include "process.h"

using std::cout, std::endl;

int main() {
    cout << "Planning starts!" << endl;
    Process my_process;
    my_process.planProcess();
    cout << "Planning ends!" << endl;

    return 0;
}