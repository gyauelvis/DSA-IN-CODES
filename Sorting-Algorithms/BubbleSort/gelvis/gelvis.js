let bubbleSort = (array) =>{
    unsortedUntilIndex = array.length - 1;
    isSorted = false;

    while (!isSorted){
        isSorted = true;
        for(let i = 0; i < unsortedUntilIndex; i++){
            if(array[i] > array[i+1]){
                isSorted = false;
                let temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        unsortedUntilIndex = unsortedUntilIndex - 1;
    }
    return array
}