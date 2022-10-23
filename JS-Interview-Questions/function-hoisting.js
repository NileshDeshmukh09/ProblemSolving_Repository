look();
function look(){
    console.log("Look is a function Declaration !");
}

// funcExpression : gives an error because of func expression
funcExpression();
const  funcExpression = () => {
    console.log("Func Expression !");
}