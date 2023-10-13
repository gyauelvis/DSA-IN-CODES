# Let’s	say	that	you	are	writing	a	Python	application,	and	somewhere	in	your
#  code	you	find	that	you	need	to	get	the	intersection	between	two	arrays.	The
#  intersection	is	a	list	of	all	the	values	that	occur	in	both	of	the	arrays.	For
#  example,	if	you	have	the	arrays	[3,	1,	4,	2]	and	[4,	5,	3,	6],	the	intersection	would	be
#  a	third	array,	[3,	4],	since	both	of	those	values	are	common	to	the	two	arrays

def intersection_btn_arrays(array1, array2):
    result = []
    for i in range(len(array1)):
        for j in range(len(array2)):
            if array1[i] == array2[j]:
                result.append(array1[i])
                break
    return result

print(intersection_btn_arrays([3,	1,	4,	2],[4,	5,	3,	6]))