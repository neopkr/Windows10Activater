#include <iostream>

using namespace std;

std::string key = "VK7JG-NPHTM-C97JM-9MPGT-3V66T";
std::string command = "slmgr.vbs -ipk " + key;

int main()
{
    cout << "Activating Windows 10 Pro..." << endl;
    system(command.c_str());
    system("pause");
    return 0;
}