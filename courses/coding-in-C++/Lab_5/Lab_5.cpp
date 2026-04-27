#include <iostream>

template <typename T>
void swap(T &value_a, T &value_b){
    std::cout << "Value: " << value_a << "Value" << value_b << std::endl;
    temp = value_a;
    value_a = value_b;
    value_b = temp;
    std::cout << "Value: " << value_a << "Value" << value_b << std::endl;
}


int main (){
    int a = 4;
    int b = 5;
 swap(a, b);

}