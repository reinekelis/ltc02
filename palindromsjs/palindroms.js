
 let  punct=';:.,?!-(){}\' ';

 function trim_punct(str){
     let res_str='';
     for (var i=0; i < str.length; i++){
        if  (punct.indexOf(str[i]) === -1){
            res_str = res_str + str[i].toLowerCase();
        }
     }
     //console.log(res_str);
     return res_str;
 }
 
 function palindrome_check(str){
     if (str.length <= 1) {
         return true;
     } else {
        let res = (str[0] == str[str.length-1]);
        return (res && palindrome_check(str.substr(1, (str.length-2))));
     }
}

function print_reverse(str_input){
    if (str_input.length > 0) {
        let substr = str_input.substring(1);       
       return (print_reverse(substr)+str_input[0]);
    } else {
            return (str_input);
        }
}

if (process.argv.length !==3){
    throw new Error('Run script with string as a parameter');
}

//console.log(process.argv[2]);
console.log("Reverse print: " + print_reverse(process.argv[2]));
console.log("Is palindrome? "+ palindrome_check(trim_punct(process.argv[2])));