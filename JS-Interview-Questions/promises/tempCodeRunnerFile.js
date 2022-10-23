const promiseObj  = new Promise( ( resolve , reject ) => {
    setTimeout( ()=> {
        let result = false ;

        if( result ) {
            resolve("Promise Resolved" );
        }
        reject ( "Promise reject ");
    })
}) ;

// promiseObj
//     .then( ( res ) => console.log("Promise has been Resolved"))