# Crypto-Shift
*A beginner-friendly cryptography project exploring basic encryption and decryption techniques.*  

## Overview  
This project introduces a simple implementation of a **Caesar Cipher with a variable shift**, offering a hands-on experience with basic cryptographic concepts. While not secure for real-world use, it serves as an excellent starting point for those new to encryption.  

## Features  
✅ Encrypts text using a shift-based substitution method.  
✅ Decrypts text by brute-forcing potential shift values.  
✅ Demonstrates fundamental cryptographic principles in C++.  


## How It Works  
### Encryption:  
- The user enters text and selects a shift value (0-9).  
- Each letter is shifted forward in the alphabet.  
- Spaces cause slight variations in the shift for added complexity.  

### Decryption:  
- The program tries different shift values to reverse the encryption.  
- If a match is found in a stored wordlist, the full text is decrypted.  

## Usage  
Compile and run the programs using any C++ compiler:  
```sh
g++ encryption/encryption.cpp -o encrypt
./encrypt
```
```sh
g++ decryption/decryption.cpp -o decrypt
./decrypt
```

## Who is this for?  
🔹 Beginners curious about cryptography.  
🔹 Students learning about classical encryption methods.  
🔹 Anyone who wants to see encryption in action!  

🚀 *This is just a starting point! Explore, modify, and enhance the code to dive deeper into cryptography!*  
