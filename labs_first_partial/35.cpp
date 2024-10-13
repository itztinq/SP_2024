#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    int najdobarSemestar=-1;
    double najdobarProsek=-1;
    double najdobarProcent=0.0;
    
    for(int i=1;i<=n;i++) {
        int m;
        cin>>m;
        
        double sumOceni=0;
        for(int j=0;j<m;j++) {
            int ocena;
            cin>>ocena;
            sumOceni+=ocena;
        }
        
        int predvideniPredmeti;
        cin>>predvideniPredmeti;
        
        double prosek=(sumOceni/m)*(m/static_cast<double>(predvideniPredmeti))+(1-(m/static_cast<double>(predvideniPredmeti)))*5;
        double procent=(m/static_cast<double>(predvideniPredmeti))*100;
        
        if(prosek>najdobarProsek) {
            najdobarProsek=prosek;
            najdobarSemestar=i;
            najdobarProcent=procent;
        }
    }
    
    if(najdobarSemestar!=-1) {
        cout<<"Semester: "<<najdobarSemestar<<endl;
        cout<<"Grade point average : "<<najdobarProsek<<", percentage of subjects passed: "<<najdobarProcent<<"%"<<endl;
    } else {
        cout<<"No semesters available"<<endl;
    }
    return 0;
}
