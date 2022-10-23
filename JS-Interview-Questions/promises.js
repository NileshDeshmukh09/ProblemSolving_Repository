
// Promise example
const sol = new Promise( ( resolve , reject) =>{
    setTimeout( () => {
        let  result = false ;
        if( result )( resolve( "Result is True "));
        else reject( "Result is False ");
        
    })
});


sol.then( (res) => console.log( res ) )
.catch( ( errr ) => console.log( errr) );