let factorial = (n) =>{
    try{
        if(n < 0) throw new Error("n must be greater than zero");
        else if(n == 0) return 1;
        else if(n > 0) return n * factorial(n - 1);

    }catch(e){
        console.error(e);
    }
}