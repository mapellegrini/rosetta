fn main()
{
    let mut vec = Vec::new();
    
    loop {
        let mut inputstr = String::new();
        println!("Enter a new string (-1 to quit): ");
        let _ = std::io::stdin().read_line(&mut inputstr);
        inputstr.pop();  // remove trailing endline

        if inputstr == "-1"
	{
            break;
	}

        vec.push(inputstr.clone());
	println!("{:?}", vec)
    }
}