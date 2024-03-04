#include <iostream>
#include <string>
using namespace std;

int main (){
      string Input;
cout<< " Enter input: ";
   cin >>Input;

    if (Input.find("//") == 0)
    {
   cout << "Single line comment.";
    }

    else if (Input.find("/*") == 0 && Input.find("*/")!= 0)
        {
     cout << "Multi line comment.";
    }
    else {
    cout << "Not a comment.";
    }
 return 0;
 }
