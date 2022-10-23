

// Spread vs Rest 

function multiply( ... nums ){ // Rest Operator
    console.log ( nums[0] * nums[1]);
}

var arr = [ 5 , 6 ];

multiply( ...arr ); // spread Operator