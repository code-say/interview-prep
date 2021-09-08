#include <iostream>
using namespace std;

int main()
{
    int trainee[3][3];
    int average[3] = {0};
    int i , j ,max = 0;
    for(i = 0; i < 3 ; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >> trainee[3][3];
            if(trainee[i][j]<1 || trainee[i][j]>100)
            {
                trainee[i][j] = 0;
            }
        }
    }
    
}