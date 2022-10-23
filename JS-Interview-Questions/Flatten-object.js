// Flatten an object in JS

const obj = { 
    name: "Nilesh", 
    age: 22, 
    address: { 
        flatNo: 38, 
        location : { 
            city : "Nagpur" , 
            state : "Maharashtra"
        }
    }
} ;


function flattenArray(obj) {
    newObj = {};
    function getFlattenObj(obj) {

        for (let key in obj) {
            console.log( );
            // if (obj[key] instanceof Object) {
            if (typeof obj[key] == "object") {
                getFlattenObj(obj[key]);
            } else {
                newObj[key] = obj[key];
            }

        }
    }
    getFlattenObj(obj);
    return newObj;
}


console.log( flattenArray(obj) )
