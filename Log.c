#include <plog/Log.h>
using namespace std;

int main()
{
    plog::init(plog::debug, "Log");
    PLOG(plog::debug) << "The program is running!"; 
    
     return 0;
}
