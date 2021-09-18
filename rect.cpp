#include <iostream>

using namespace std;

int main()
{
    int r,c,i,j,uchoice,answer,temp=0;
    cout<< "enter the number of rows and columns :";
    cin>>r>>c;
    for(i=0;i<r;i++)
            cout<<" _";
    for(j=0;j<c;j++)
    {
        cout<<endl;
        cout<<"|";
        for(i=0;i<r;i++)
            cout<<"_|";
    }
    cout<<endl<<" how many squares are there : ";
    cin>>uchoice;
    while(r!=0 && c!=0)
    {
        temp = temp + (r-- * c--);
    }
    answer = temp;
    if(uchoice == answer )
    {
        cout<<"you are right "<<endl;
    }
    else
    {
        cout<<"you are wrong !!!" <<endl<<"right answer is :"<<answer<<endl;
    }
    return 0;
}
