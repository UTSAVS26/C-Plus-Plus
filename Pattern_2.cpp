#include<iostream>
using namespace std;

int main()
{
    int row, cols;
    cin>>row>>cols;
    
    for (int i=1; i<=row; i++){
        for (int j=1; j<=cols; j++){
            if (i==1 || i==row){
                cout<<"*";
            }
            else if (j==1 || j==cols){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
