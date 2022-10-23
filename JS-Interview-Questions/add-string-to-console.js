function output( val01 , val02 ){
    console.log( val01 + val02 );
}
// we can use console instead of ouptut to print the string "val : " before console.log output 
value  = output.bind( this , "Val : ");
value( "something in the air ")