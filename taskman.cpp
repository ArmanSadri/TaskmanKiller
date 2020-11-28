#include <iostream> 
#include <cstdlib>
#include <windows.h> 
using namespace std;
int main() {
    system("taskkill /fi \"WindowTitle eq as - Notepad\"");
    exit(0);
}
