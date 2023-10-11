let binarySearch = (array,value) =>{
    let upperBound = array.length - 1,lowerBound = 0;
    while (lowerBound <= upperBound){
        let middlePoint = (lowerBound + upperBound)/2;
        if(value < array[middlePoint])
            upperBound = middlePoint - 1;
        else if(value > array[middlePoint])
            lowerBound = middlePoint + 1;
        else
            return middlePoint;
    }
    return -1;
}
