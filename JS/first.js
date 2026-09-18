// console.log("Welcoming you");
// value="Millions";
// console.log("Your Value is in ");
// console.log(value);
// console.log("Logout");
// var b;
// b=2;
// var a;
// a=2;
// var c;
// c="Khushi";
// var f=null;
// const profile={
//     username:"@saumyaagrahari",
//     isFollow: "Yes",
//     followers:234
// };
// console.log("HII");
// console.log("a+b=", a+b);
// console.log("a**=b",a**=b);
// console.log("a===c",a===c);
//  let number=prompt("Hello!");
//  console.log(number);
//  if(number%5==0){   
//      console.log("Number is divided by 5.")
//  }else{
//      console.log("Number is not divisible of 5.");
//  }

// let str="Saumya Agrahari";
// let len =0;
// for(let i of str){
//     console.log("i=",i);
//     len++;
// }
// console.log("String size=",len);
// let student={
//     Name:"Saumya",
//     Age:23,
//     IsPass:true
// };
// for(let i in student){
//     console.log(i, ": Value:",student[i]);
// }
// let n;
// for(n=1;n<=100;n++){
//     if(n%2==0){
//         console.log(n);
//     }else{
//         continue;
//     }
// }
//  let gameNum=503;
//  let userNum=prompt("Guess the num: ");
//  while(userNum!=gameNum){
//      userNum=prompt("You've guess wrong number, guess again..")

//  }console.log("Congratulations, your guess is correct");

// let str2 ="Saumya";
// console.log(str2[3]);
let obj={
    Item:"Sketch",
    Price:10
};
let output=`The cost of ${obj.Item} is ${obj.Price} Rs.`;
console.log(output);
let heroines=["RaniLakshamiBai", "AnandiBenPatel"];
console.log(heroines);
console.log(heroines.length);
for(let heroine of heroines){
    console.log(heroine);
}
let marks=[85,97,37,76,60];
let sum=0;
for(let mark of marks){
    sum+=mark;
}console.log(sum);
let avg=sum/marks.length;
console.log(`The Average marks is ${avg}.`);

let items=[250,645,300,900,50];
let idx=0;
for(let val of items){
    console.log(`Value of index ${idx}=${val}`);
    let offer=val/10;
    items[idx]=items[idx]-offer;
    console.log(`value after offer ${items[idx]}`);
    idx++;
}
let store=["bloomberg", "microsoft","uber","google","ibm","netflix"];
console.log(store);
store.shift();
console.log(store);
store.splice(1,1,"ola");
console.log(store);
store.push("amazon");
console.log(store);

function myFun(){
    console.log("You Are Good.");
}
myFun();
function sum1(a,b){
    c=a+b;
    return c;
}
let val=sum1(2,3);
console.log(`Value of this sum is ${val}.`);
const myFunc=(a,b)=>{
    d=a-b;
    return d;
}
let val2=myFunc(9,3);
console.log(val2);

function countVowel(str){
    let count=0;
    for(const char of str){
        if(
            char=="a" || char=="e" ||char=="i" ||char=="o"|| char=="u"
        ){
            count++;
        }
        console.log(count);
    }
}
let arr=[1,2,3,4,5];
arr.forEach(function printVal(val){
    console.log(val);
}
);
