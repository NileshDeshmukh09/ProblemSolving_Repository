
let str = "qwertgfrewwqaqqaqaqaqaqqqwed";

let arr = str.split("");


function countChar( str ){

    let mp = new Map();

    for( let char of str ){

        if( mp.get(char)){
            mp.set( char , mp.get(char)+1);
        }else{
            mp.set( char , 1);
        }


    }
    
    let maxx = 0;
    let stringChar = str[0];
    for( let [key , value ] of mp ){

        if( maxx < value) {
            maxx = value;
            stringChar = key;
        }
    }

    console.log( stringChar + " - " + maxx );
}

console.log( countChar( str ));















// function countChar( arr ){
//     let map = new Map();

//     let cnt = [... str].map( char => {
//         // map.get( char ) ? map.set( char , map.get( char )+1) : map.set( char , 1 );

//         if( map.get( char )){
//             map.set( char , map.get(char)+1)
//         }else{
//             map.set( char , 1);
//         }
//     })

//     let count = [...arr].map( char => map.get(char) ? map.set( char, map.get(char) + 1) : map.set(char,1) ) ;
//     return cnt;


// }

console.log( countChar( str ));