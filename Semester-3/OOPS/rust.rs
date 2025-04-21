/*Create the equivalent of four-function calculator. The program should ask the user to enter a

number,an operator && another number.(Use floating Point)It should then carry out the
specified arithmetical operation: Adding,Subtracting,Multiplying,Or Dividing the Two

numbers. Use a switch statement to select the operation. Finally display the result.*/

fn main(){

let x: f32;
let y: f32;
let op: char;
println!("{}", "Enter Your First Number :"cin>>x);
println!("{}", "Enter Your Second Number :"cin>>y);
println!("{}", "Enter the Operator(+,-,/,*):"cin>>op);
match op {
println!("RESULT :{}", x+ybreak);
println!("RESULT :{}", x-ybreak);
println!("RESULT :{}", x*ybreak);
println!("RESULT :{}", x/ybreak);
println!("Invalid Operator");
}
}
}