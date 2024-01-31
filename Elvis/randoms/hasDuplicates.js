// Let’s	say	you’re	writing	an application	that	requires	you	to	check
// whether	an	array	contains	any	duplicate	values

let hasDuplicates = (array) =>{
    let lengthOfArray = array.length;
    for(let i = 0; i < lengthOfArray; i++) {
        if(i != lengthOfArray - 1) {
            for(let j = i+1; j < lengthOfArray;j++) {
                if(array[i]===array[j]) return true;
            }
        }
    }
    return false;
}

let array = [1,2,6,3,5,6];
if(hasDuplicates(array)) console.log("Duplicates detected");
else console.log("No duplicates detected");