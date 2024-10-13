#include<iostream>
using namespace std;
int main() {
    int m, n;
    int x_igrac, y_igrac;
    int x_topka, y_topka;
    int x1_gol, y1_gol, x2_gol, y2_gol;
    
    cin>>m>>n;
    cin>>x_igrac>>y_igrac;
    cin>>x_topka>>y_topka;
    cin>>x1_gol>>y1_gol>>x2_gol>>y2_gol;
    
    char teren[100][100];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            teren[i][j]='-';
        }
    }
    
    teren[x_igrac][y_igrac]='i';
    teren[x_topka][y_topka]='o';
    
    int minX, maxX, minY, maxY;
    if(x1_gol<x2_gol) {
        minX=x1_gol;
        maxX=x2_gol;
    } else {
        minX=x2_gol;
        maxX=x1_gol;
    }
    if(y1_gol<y2_gol) {
        minY=y1_gol;
        maxY=y2_gol;
    } else {
        minY=y2_gol;
        maxY=y1_gol;
    }
    for(int i=minX;i<=maxX;i++) {
        for(int j=minY;j<=maxY;j++) {
            teren[i][j]=']';
        }
    }
    
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<teren[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int dx, dy;
    cin>>dx>>dy;
    int nova_x_topka=x_topka+dx;
    int nova_y_topka=y_topka+dy;
    
    if(nova_x_topka<0 || nova_x_topka>=m || nova_y_topka<0 || nova_y_topka>=n) {
        cout<<"OUT!"<<endl;
    } else if(nova_x_topka>=minX && nova_x_topka<=maxX && nova_y_topka>=minY && nova_y_topka<=maxY) {
        cout<<"GOAL!"<<endl;
    } else {
        teren[x_topka][y_topka]='-';
        teren[nova_x_topka][nova_y_topka]='o';
        
        cout<<"Novata pozicija na topkata e ("<<nova_x_topka<<", "<<nova_y_topka<<")"<<endl;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                cout<<teren[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
