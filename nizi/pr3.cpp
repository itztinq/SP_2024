#include <iostream>
using namespace std;
#define SIZE 8
int main(){
    int board[SIZE][SIZE];
    int i,j;
    for(i=0;i<SIZE;i++)
        for(j=0;j<SIZE;j++)
            board[i][j]=(i+j)%2;
    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++)
            cout<<board[i][j];
            cout<<endl;
    }
    return 0;
}
