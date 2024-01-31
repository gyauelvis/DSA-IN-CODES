// Let’s	say	that	you	are	writing	a	C++	application,	and	somewhere	in	your
//  code	you	find	that	you	need	to	get	the	intersection	between	two	arrays.	The
//  intersection	is	a	list	of	all	the	values	that	occur	in	both	of	the	arrays.	For
//  example,	if	you	have	the	arrays	[3,	1,	4,	2]	and	[4,	5,	3,	6],	the	intersection	would	be
//  a	third	array,	[3,	4],	since	both	of	those	values	are	common	to	the	two	arrays

#include <iostream>
#include <vector>

void intersection_btw_array(int array1[],int array1_length, int array2[],int array2_length){
    std::vector<int> result;
    for(int i = 0; i < array1_length;i++){
        for(int j = 0;j < array2_length;j++){
            if(array1[i] == array2[j]){
                result.push_back(array1[i]);
                break;
            }
        }
    }

    int length = sizeof(result)/sizeof(result[0]);
    for(int i = 0;i < length;i++){
        std::cout << result[i] << std::endl<<"ok" << std::endl;

    }
}

int main(){
    int array1[] = {3,	1,	4,	2};
    int array2[] = {4,	5,	3,	6};

    intersection_btw_array(array1,sizeof(array1)/sizeof(array1[0]),array2,sizeof(array2)/sizeof(array2[0]));
}