use std::fs;

fn main()
{
    println!("Enter the complete path to a file: ");
    let mut path  = String::new();
    let _ = std::io::stdin().read_line(&mut path);
    path.pop();  // remove trailing endline

    let data = fs::read_to_string(path).expect("Unable to read file");
    let length = data.chars().count();

    println!("The size of that file is {length}");
    println!("Read in: {data}");
    
}