#include<iostream>
using namespace std;
int main ()
{
    int arr[5], n, i, min, max;
    cout << "array size: ";
    cin >> n;
    cout<<endl;
    cout << "elements of the array : ";
    for (i = 0; i < n; i++)
        {

        cin >> arr[i];
        }
        cout<<endl;

    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    cout << "minimum num: " << min;
    cout<<endl;
    cout << "maximum num : " << max;
    return 0;
}
