#include<iostream>
using namespace std;
int main()
{
    int ni,ne,i=0;
    float int_p=18,ext_p=12,cost=0,temp;
    scanf("%d %d",&ni,&ne);
    if(ni<0 || ne<0)
    {
        cout<<"INVALID INPUT";
    }
    else if(ni==0 && ne==0)
    {
        cout<<"Total estimated cost : 0.0";
    }
    else
    {
        for(int i=0;i<ni;i++)
        {
            cin >> temp;
            cost += int_p*temp;
        }
        for(int i=0;i<ne;i++)
        {
            cin >> temp;
            cost += ext_p*temp;
        }

        cout<<"Total estimated cost: "<<cost;
    }
    return 0;
}