#  Let’s	say	you’re	writing	an application	that	requires	you	to	check
#  whether	an	array	contains	any	duplicate	values

def hasDuplicates(array):
    
    length = len(array)
    for i in range(length):
        if i != length - 1:
            j = i + 1
            while(j<length):
                if(array[i] == array[j]):
                    return True
                j += 1
    return False

list = [8,90,2,78,26,30,2]
if hasDuplicates(list):
    print ("Duplicates found")
else:
    print ("No duplicates found")