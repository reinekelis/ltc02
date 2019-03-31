function bmi(a,b){
    if (parseFloat(a)>500 || parseFloat(a)<0){
        throw new Error('Weigh is wrong');
    };

    if (parseFloat(b)>2.5 || parseFloat(b)< 0){
        throw new Error('Height is wrong');
    };

    let res = parseFloat(a)/(parseFloat(b)*parseFloat(b));
    console.log('Your BMI is ' + res);
    
    return (res);
}

function check_bmi(bmi_value){

    if (bmi_value <= 18.5) {
        console.log('Underweight');
    } 
    else {
        if (bmi_value > 18.5 && bmi_value < 25){
            console.log('Normal Weight');
        } 
        else {
            if (bmi_value >=25  && bmi_value < 30){
                console.log('Overweight');
            } 
            else{
                console.log('Obesity');
            }
        }
    }

}

if (process.argv.length !==4){
    throw new Error('run script with 2  numbers as arguments: weight in kg and height in meters');
}
let args = process.argv.slice(2);
let bmi_value = bmi(...args);
check_bmi(bmi_value);
