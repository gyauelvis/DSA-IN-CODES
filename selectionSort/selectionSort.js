let selectionSort = (array) => {
    for(let i = 0; i<array.length;i++) {
        for(let j = i+1; j < array.length;j++){
            if(array[j] < array[i]) {
                let temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    return array;
}