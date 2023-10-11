/*
 * ch-04-ex-03.cpp
 *
 * Smart pointer weak_ptr
 *
 * Created on: Oct 6, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <memory> // Requires C++11 or above
#include <iostream>

int main()
{
    std::shared_ptr <int> p_x(new int);
    std::cout << "p_x use count: "<< p_x.use_count() <<"\n";
    *p_x = 5; // ’de-reference’ to alter contents

    // Use this pointer elsewhere
    std::shared_ptr<int> p_y = p_x;

    std::cout<<"p_x use count: "<<p_x.use_count()<<"\n";
    p_y.reset(); std::cout<<"p_x use count: "<<p_x.use_count()<<"\n"; p_x.reset();
    std::cout<<"p_x use count: "<<p_x.use_count()<<"\n";

    return 0;
}