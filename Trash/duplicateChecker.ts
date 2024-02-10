// Let’s say you’re writing an application that requires you to check
// whether an array contains any duplicate values.

let duplicateCheck = (arr:number[]):boolean =>{
    type objType = {
        [key:number] : number;
    }
    let duplicateObjMap: objType = {};
    for(let i =0; i<arr.length; i++){
        if(duplicateObjMap[arr[i]] > 0) return true
        duplicateObjMap[arr[i]] = 1;
    }
    return false;
}