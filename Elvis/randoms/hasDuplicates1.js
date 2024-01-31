// Let’s	say	you’re	writing	an application	that	requires	you	to	check
// whether	an	array	contains	any	duplicate	values

// second algorithm only applicable in javascript

let hasDuplicates = (array) => {
    let existingValue = [];
    for(let i = 0; i < array.length; i++){
        if(existingValue[array[i]] == undefined) existingValue[array[i]] = 1;
        else return true;
    }
    return false;
}