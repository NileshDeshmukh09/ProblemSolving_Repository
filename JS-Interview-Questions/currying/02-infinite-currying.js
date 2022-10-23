//Infinite Currying 

function add(a){
    return function(b){
        if( b ) return add(a+b); 
        return a;
    }
}

// const mul = add(5);
console.log( add(5)(2)(4)(6)(8)() );