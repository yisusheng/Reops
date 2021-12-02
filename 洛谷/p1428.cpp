#include <iostream>
using namespace std;

int main()
{
    int inNumber,inA[100];
    cin >> inNumber;
    for(int i,Total=0;i<inNumber;i++)
    {
        cin >> inA[i];
        for(int j=0;j<i;j++)
        {
            if(inA[i]>inA[j])
            {
                Total+=1;
            }
        }
        if(i==inNumber-1)
        {
            cout << Total;
        }
        else
        {
            cout << Total << " ";
        }
    }
}
