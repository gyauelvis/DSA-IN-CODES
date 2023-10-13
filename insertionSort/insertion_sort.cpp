//  1.	In	the	first	passthrough,	we	temporarily	remove	the	value	at	index	1	(the
//  second	cell)	and	store	it	in	a	temporary	variable.	This	will	leave	a	gap	at
//  that	index,	since	it	contains	no	value:
//  In	subsequent	passthroughs,	we	remove	the	values	at	the	subsequent
//  indexes.
//  2.	We	then	begin	a	shifting	phase,	where	we	take	each	value	to	the	left	of	the
//  gap,	and	compare	it	to	the	value	in	the	temporary	variable:
//  If	the	value	to	the	left	of	the	gap	is	greater	than	the	temporary	variable,	we
//  shift	that	value	to	the	right:
// As	we	shift	values	to	the	right,	inherently,	the	gap	moves	leftwards.	As	soon
//  as	we	encounter	a	value	that	is	lower	than	the	temporarily	removed	value,
//  or	we	reach	the	left	end	of	the	array,	this	shifting	phase	is	over.
//  3.	We	then	insert	the	temporarily	removed	value	into	the	current	gap:
//  4.	We	repeat	steps	1	through	3	until	the	array	is	fully	sorted.

#include <iostream>


void insertion_sort(int array[], int array_length){
    for(int i = 1; i < array_length;i++){
        int temp_value = array[i];
        int j = i - 1;
        while(j>=0 && array[j] > temp_value){
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp_value;
    }
}

int main(){
    int list[] = {10,8,1,5,12};

    insertion_sort(list,sizeof(list)/sizeof(list[0]));
    for(int i=0;i<sizeof(list)/sizeof(list[0]);i++) {
        std::cout<<list[i]<<std::endl;
    }
}