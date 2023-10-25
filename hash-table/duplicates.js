// Function that checks if an array has duplicates
let hasDuplicates = (array) =>{
    let existingValues = {};
    for(let i = 0; i < array.length; i++) {
        if(existingValues[array[i]] === undefined) existingValues[array[i]] = true;
        else return true;
    }

    return false;
}