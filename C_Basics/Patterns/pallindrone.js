let strName = "MALAYALAM";
// assign the variable
let i = 0;
let j = strName.length-1 ;
let result = true ;    // Assume that strName is a  palindrome

//Check if the given strName is pallinedrone or Not!
while(i<=j){

    if(strName[i]==strName[j]){
        i = i+1;
        j = j-1;
    }
    else{
        // If at any point of Time you  hit this else block strName is not a palindrome
        result = false ;
        break;
    }
}


// Condition for checking Pallindrone
if(result==false){
    console.log(" Word is not a Palindrome !")
}else{
    console.log("Hurray!! , Word is  a Palindrome !")
}