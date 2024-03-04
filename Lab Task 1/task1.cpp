#include <iostream>
using namespace std;
int main()
{
    int size =6;
    int num[size]={1,8,7,6,4,10};
    int total =0;
    double avrg=0;
    for(int i=0;i<size;i++)
    {
        total =total+ num[i];
    }
    avrg =total/size;
    cout<<"AVG = " <<avrg;
}
