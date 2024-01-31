let partition = (array) =>{
    if(array.length === 1 || array.length === 0) return array;
    else if(array.length == 2){
        if(array[length - 1] < array [0]){
            let temp = array[0];
            array[0] = array[length - 1];
            array[length - 1] = temp;
        }
        return array;
    }

    let pivot = array[array.length - 1];
    let i = 0, j = array.length - 2;

    while(i < j){
        let rightPointer = array[array.length - j];
        let leftPointer = array[i];
        if(leftPointer < pivot ){
            i++;
        }else{
            if(rightPointer > pivot){
                j--;
            }else{
                array[array.length - j] = leftPointer;
                array[i] = rightPointer;
                i++;
            }
        }
    }
    let temp = array[i];
    array[i] = pivot;
    array[array.length - 1]  = temp


    return array;

}