try{
    let dividend = prompt("Enter dividend: ");
    let divisor = prompt("Enter divisor: ");
    if(divisor==0){
        throw new Error("Can't divide by zero");
    }else if(divisor<0){
        throw new Error("Negative number");
    }else{
        throw new Error("not a number");
    }

}catch(error){
    console.log(error)
}