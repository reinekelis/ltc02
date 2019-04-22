
//returns array where evey element is a square of the same element in the initial array
function sqr_array(array){
    let tmp_array = new Array();
    for(i=0; i<array.length; i++){
        tmp_array = tmp_array.concat(array[i]*array[i]);
    };
    return tmp_array;
}


//work with array of strings
console.log("Weeks array");
let week_array = ["Monday", "Tuesday", "Wednesday","Thursday"];
console.log(week_array);
console.log("Array Length "+ week_array.length);

week_array.push("Friday");
console.log(week_array);
console.log("Array Length "+ week_array.length);

let tmp_array = ["Saturday"];
week_array = tmp_array.concat(week_array);
console.log(week_array);
console.log("Array Length "+ week_array.length);

week_array.unshift("Sunday");
console.log(week_array);
console.log("Array Length "+ week_array.length);

//work with array of integers
let int_array = new Array();
int_array = [1,2,3,4,5,6,7,8,9];
console.log("Initial Int array: "+int_array);
int_array = [0,...int_array];
console.log(int_array);
int_array = int_array.concat(10);
console.log(int_array);
int_array.shift();
console.log(int_array);
int_array.pop();
console.log(int_array);

console.log("Sqr array: ");
console.log(sqr_array(int_array));
