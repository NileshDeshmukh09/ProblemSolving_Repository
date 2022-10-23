// Online Javascript Editor for free
// Write, Edit and Run your Javascript code using JS Online Compiler

var str = 'asdsfsfewrewrewuuuuuuuuuuuuuuuufdsfdfdgdfgerrte';

function checkStr ( str ){
    var arr = new Array( 26 ).fill(0);
    
    for(let i = 0 ; i < str.length; i++){
        arr[str[i].charCodeAt(0) - 'a'.charCodeAt(0)]++;
    }

    let maxx = arr[0];
    let val ;
    for(let i = 0 ; i < arr.length; i++){
        if( maxx < arr[i] ) {
            maxx = arr[i];
            
            val = String.fromCharCode(i + 'a'.charCodeAt(0));
        }
        // console.log(arr[i]);
    };

    console.log("Maxx Character : ",  val  ,maxx);
}

checkStr( str );