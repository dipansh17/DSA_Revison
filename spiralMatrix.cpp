// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void solve(int arr[3][3],int n){
    int startRow=0,startCol=0,endingRow=n-1,endingCol=n-1;
    while(startRow<=endingRow && startCol<=endingCol){
        //we have to go from starting col to ending col
        for(int i=startCol;i<=endingCol;i++){
            cout<<arr[startRow][i]<<" ";
        }
        startRow++;
        //we have to go from staring row of ending col and we have to go from ending row of ending col
        for(int i=startRow;i<=endingRow;i++){
            cout<<arr[i][endingCol]<<" ";
        }
        endingCol--;
        //we have to go from ending col of ending row to staring col of ending row
        for(int i=endingCol;i>=startCol;i--){
            cout<<arr[endingRow][i]<<" ";
        }
        endingRow--;
        //we have to go from endingRow of starting col to starting row of starting col
        for(int i=endingRow;i>=startRow;i--){
            cout<<arr[i][startCol]<<" ";
        }
        startCol++;
    }
} 
int main() {
    // Write C++ code here
    // cout << "Hello world!";
    int n=3;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    solve(arr,n);

    return 0;
}
