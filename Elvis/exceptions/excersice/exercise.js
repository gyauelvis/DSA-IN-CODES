class Convert12to24{

    convertToNumber(hr,min,sec){
        console.log("Converting");
        try{
            hr = Number(hr);
            min = Number(min);
            sec = Number(sec);
            if(isNaN(hr)|| isNaN(min) || isNaN(sec)){
                throw new Error("Invalid Time"); 
            }
        }catch(e){
            console.error(e);
        }

    }
    constructor(hr,min,sec,am_pm){
        try{
            this.convertToNumber(hr,min,sec);
            if(typeof(hr) === Number && typeof(min) === Number && typeof(sec) === Number){
                if(hr<=0 && hr>12){
                    throw new Error("Invalid Hour value");
                }
                if(sec<0 && sec>60){
                    throw new Error("Invalid Seconds");
                }
                if(min<0 && min>60){
                    throw new Error("Invalid Minutes");
                }
                if(am_pm.toUpperCase()!="AM" && am_pm.toUpperCase()!="PM" ){
                    throw new Error("Invalid am/pm");
                }
            }else{
                throw new Error("Invalid Time format");
            }
            this.hr = hr;
            this.min = min;
            this.sec = sec;
            this.am = am_pm;
        }catch(e){
            console.error(e);
        }
    }
    
    
}

