// Function Currying :  

function evaluate( operation ){
    return function(a){
        return function (b){
            if( operation == "sum") return a + b;
            else if( operation == "sub") return a - b;
            else if( operation == "mul") return a * b;
            else if( operation == "divide") return a / b;
            else return "Invalid Operations";
            
        }
    }
}

// console.log( evaluate("sub")(4)(2));

const mul = evaluate("sum");  
console.log( mul(1)(2) );