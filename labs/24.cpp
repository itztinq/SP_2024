#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int service_time=5;
    int start_hour=9*60;
    int wait_time=(n-1)*service_time;
    int work_periods[]={120, 60, 120}; 
    int break_periods[]={30, 30};
    int total_time=0;
    int total_waited_time=0;
    
    for (int i=0; i<3; ++i) {
        if (wait_time<work_periods[i]) {
            total_waited_time+=wait_time;
            int total_minutes_waited=total_waited_time;
            int hours=total_minutes_waited/60;
            int minutes=total_minutes_waited%60;
            cout<<"Hours: "<<hours<<", minutes: "<<minutes<<endl;
            return 0;
        }

        total_waited_time+=work_periods[i];
        wait_time-=work_periods[i];
        if (i<2) {
            total_waited_time+=break_periods[i];
        }
    }
    cout<<"Studentot ne e voopsto usluzen"<<endl;
    return 0;
}
