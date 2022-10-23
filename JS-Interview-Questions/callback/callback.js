function attachEventListener(){
    var count = 0; 

    document.getElementById("clickMe").addEventListener("click", 
    function xyz(){
            console.log("Button Click ", ++count);
        })
}
attachEventListener();


function updateElementText( id ){
    return function ( context ){
        document.querySelector("#"+id).textContent = context;
    }
}

const changeTitle = updateElementText( "title");

changeTitle("Hello CALLBACK !");

const funcArr = ()=>{
    console.log( argument);
}

console.log( funcArr( 1 ,3 , 2 ));