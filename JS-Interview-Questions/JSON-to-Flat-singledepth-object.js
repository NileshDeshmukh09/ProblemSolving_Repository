// flatten the JSON Object 

let obj = {
    Company: "GeeksforGeeks",
    Address: "Noida",
    contact: +91-999999999,
    mentor: {
        HTML: "GFG",
        CSS: "GFG",
        JavaScript: "GFG"
    }
};

function flattenObj( obj ){

    let res = {};

    for( const i in obj){
        // console.log("i : ", i);
        if( ( typeof obj[i] === "object"  && !Array.isArray(obj[i])  ) ){
            const temp = flattenObj( obj[i] );
            for( const j  in temp ){
                res[i + '.' + j] = temp[j];
            }
        }
        
        else{
            res[i] = obj[i];
        }
    }

    return res;
}
console.log.call(this , "val :")

console.log(1)

console.log( flattenObj(obj) );