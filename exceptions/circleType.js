// Before setting the radius this class checks if the radius is greater than 0
class Circle {
    constructor(radius){
        try{
            if(radius<0){
                throw new Error("Circle radius must be positive");
            }
            this.radius = radius;
        }catch(e){
            console.log(e);
        }
    }
}