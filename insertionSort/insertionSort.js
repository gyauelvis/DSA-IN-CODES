let insertionSort = (array) => {
    for(let i = 1; i < array.length; i++) {
        let tempValue = array[i], j = i - 1;
        while(j>=0 && array[j] > tempValue){
            array[j+1] = array[j];
            j--;
        }
        array[j + 1] = tempValue;
    }
    return array;
}

console.log(insertionSort([2,1,4,7,2]))