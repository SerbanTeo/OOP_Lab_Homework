#include <iostream>
#include<ctime>
using namespace std;
string timeToString( long long miliseconds){
    miliseconds/=1000;
    struct tm * timeinfo;
    char var[80];

    timeinfo = gmtime(reinterpret_cast<const time_t *>(&miliseconds));

    strftime(var, sizeof(var), "%Y-%m-%d %H:%M:%S", timeinfo);
    string Result(var);
    return Result;
}
string timeToString(){
    time_t init_time;
    struct tm * timeinfo;
    char var[80];

    time (&init_time);
    timeinfo = localtime(&init_time);

    strftime(var, sizeof(var), "%Y-%m-%d %H:%M:%S", timeinfo);
    string Result(var);
    return Result;
}
int main()
{  cout<<timeToString(1631970174315)<<endl;
   cout<<timeToString();
}
