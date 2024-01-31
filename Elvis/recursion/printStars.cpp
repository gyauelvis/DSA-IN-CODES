// Write a recursive function to generate the following pattern of stars:
//    *
//   * *
//  * * *
// * * * *
//  * * *
//   * *
//    *

#include <iostream>
#include <iomanip>

void print_stars(int max_no_stars, int star = 1){
    if(max_no_stars > 0){
        std::cout<<std::setfill(' ')<<std::setw(max_no_stars);
        for(int i = 0; i<star; i++)
            std::cout<<'*'<<" ";
        std::cout<<std::endl;
        print_stars(max_no_stars - 1, star + 1);
    }
    std::cout<<std::setfill(' ')<<std::setw(max_no_stars+ 2);
    for(int i = 1; i < star - 1 ; i++)
        std::cout<<'*'<<" ";
    std::cout<<std::endl;
}

int main(){
    print_stars(10);

}