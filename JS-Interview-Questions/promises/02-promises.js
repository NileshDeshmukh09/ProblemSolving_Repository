/**
 * 1. 2s Roll No.
   2. 2s Name and Age 
 */


//  Executor = produce promise 
const promiseObj1 = new Promise(( resolve , reject )=>{

    setTimeout( () => {
        let rollNo = [ 1 ,2 ,3 , 4 , 5];
        resolve( rollNo );
    } , 1000 );

});

// promises return with functions 
const getBioData = ( indexData ) => {

    return new Promise( ( resolve , reject ) => {
        setTimeout( ( indexData ) => {
            let bioData = {
                name : "Nilesh",
                age : 22
            }

            resolve(`ROLL NO. : ${ indexData } , Name : ${ bioData.name } , Roll No. : ${ bioData.age}`)
        } ,2000 , indexData )
    })
   
}

// Consume Promise 
promiseObj1.then( ( rollNo ) => {
    console.log( rollNo );

    getBioData(rollNo[1]).then( ( res ) => console.log( res ));
}).catch( err => console.log( err ))

