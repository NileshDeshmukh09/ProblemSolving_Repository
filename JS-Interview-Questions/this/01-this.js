let user = {
    name : "Nilesh",
    age : 22,
    childObj : {
        newName : "RoadSide Learner",
       
        getDetails(){
            console.log(this);
            console.log( this.newName , " and ", this.name );
        },
    }
}

user.childObj.getDetails();
// user.childObj.getCity();