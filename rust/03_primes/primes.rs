fn isprime(number:i32) -> bool
{
    for cur in 2..number {
        if number % cur == 0
	{
            return false;
        }
    }
    return true;
}

fn main()
{
    for number in 2..99 {
        if isprime(number){
            println!("{} is prime", number)
        }
	else{
            println!("{} is not prime", number)
        }

    }
}