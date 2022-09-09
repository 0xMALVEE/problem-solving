const string = readline()

let upperCount;

for(let i =0;i< string.length; i++){
    if(string[i].isUpperCase()){
        upperCount++;
    }
}

if(upperCount == string.length){
    console.log(string.toLowerCase())
}else{
    console.log(string.toUpperCase())
}

