def caesar(text,key):
    result = ""
    for i in range(len(text)):
        char = text[i]
        if (char.isupper()):
            result += chr((ord(char) + key-65) % 26 + 65)
        elif(char.islower()):
            result += chr((ord(char) + key - 97) % 26 + 97)
        elif(char.isdigit()):
            result += str(int(char) + key)
        elif(char == '-'):
            result += '-'
        elif (char.isspace()):
            result += " "
    return result


text = input("Enter your plain text:")
key = int(input("Enter the key: "))
print(caesar(text,key))