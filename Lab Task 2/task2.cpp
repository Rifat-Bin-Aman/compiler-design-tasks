#include<iostream>
int main()
bool isOperator (char chr){
     return char == '+' || chr == '-' || chr == '*' || chr == '/' || chr == '%';

}

   int main() {
   std:: string userInput;
    std::cout << "Enter input: ";
    std::cin >> userInput;

    std::cout << "Operators present: ";
    for (char chr : userInput) {
        if (isOperator(chr)) {
            std::cout << chr << " ";
        }
    }

    std::cout << std::endl;

    return 0;

}
