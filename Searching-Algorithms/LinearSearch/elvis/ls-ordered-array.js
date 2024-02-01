let linearSearch = (array,value)=>{
    for(let i=0; i<array.length; i++){
        if(array[i]==value){
            return i;
        }else if(array[i]>value){
            break;
        }
    }
    return -1;
}