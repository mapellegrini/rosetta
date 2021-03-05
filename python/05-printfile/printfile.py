path = input("Enter the complete path to a file: ")

#var2 = int(input("Enter another number: "))
#print("The sum is {}".format(var1+var2))

with open(path) as f:
    text = f.read()

print("The size of that file is", len(text))

print("Read in:\n{}".format(text))
