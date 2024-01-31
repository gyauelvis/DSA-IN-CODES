// Let’s	say	that	you	are	writing	a	JavaScript	application,	and	somewhere	in	your
//  code	you	find	that	you	need	to	get	the	intersection	between	two	arrays.	The
//  intersection	is	a	list	of	all	the	values	that	occur	in	both	of	the	arrays.	For
//  example,	if	you	have	the	arrays	[3,	1,	4,	2]	and	[4,	5,	3,	6],	the	intersection	would	be
//  a	third	array,	[3,	4],	since	both	of	those	values	are	common	to	the	two	arrays

let intersectionBtnArrays = (array1, array2) =>{
    let index1 = array1.length, index2 = array2.length, intersection = [];
    for(let i = 0; i < index1; i++) {
        for(let j = 0; j < index2; j++) {
            if(array1[i] === array2[j]) {
                intersection.push(array1[i]);
                // After determining that intersection it is unnecessary to continue the loop. What are you checking for
                break;
            }
        }
    }
    return intersection;
}

let arr = [3,	1,	4,	2], ar = [4,	5,	3,	6];

console.log(intersectionBtnArrays(arr, ar))