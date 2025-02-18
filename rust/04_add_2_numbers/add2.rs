fn main()
{
    println!("Enter a number: ");
    let mut line1  = String::new();
    std::io::stdin().read_line(&mut line1).unwrap();
    let number1 : i32 = line1.trim().parse().unwrap();

    println!("Enter another number: ");
    let mut line2  = String::new();
    std::io::stdin().read_line(&mut line2).unwrap();
    let number2 : i32 = line2.trim().parse().unwrap();

    println!("The sum is: {}", number1 + number2);
    
}