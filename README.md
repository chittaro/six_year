# Hello shordy

If you are reading this, you have successfully solved the first puzzle. Congratulations queen. But there is indeed more code and cracking to come so don't get ahead of yourself now.

## Lore

Your records indicate that your special numbers have been tampered with by the evil Darco Paolmart! Egads! Being the clever, sly computer scientist he is, Paolmart tweaked each number with the famous [RSA public-key encryption scheme](https://en.wikipedia.org/wiki/RSA_(cryptosystem)#:~:text=In%20a%20public%2Dkey%20cryptosystem,prime%20numbers%20are%20kept%20secret), which is known to be nearly impossible to break, or decrypt, even with modern computing power.

But wait! Not all hope is lost - Darco P. ate but did leave some crumbs behind. Paolmart forgot to delete some important files and functions that he used to encrypt your schmecret numbers, including the encryption parameters. We scrapped everything that we possibly could and compiled it in this GitHub repository.

Our data analytics team has concluded that Darco left just enough code to reverse engineer his algorithm, but they cannot quite figure out how to do so. Below, you will find a brief introduction to RSA as a jumping point. The rest likely can be found somewhere on the interwebs.

Do act with haste! These special numbers must be decoded by **7:15 p.m.** sharp ___tonight___, or consequences will be immesurable!

## RSA Background

#### RSA

The RSA encryption scheme is one in which the encryptor, say person D, **randomly** selects a series of numbers that the encryption calculations (described in the second paragraph) will revolve around. First, D 
picks a number `n = (p * q)`, where `p` and `q` are both prime numbers. Then, D picks a number `e` such that `e` is coprime to `(p - 1) * (q - 1)`. Lastly, D picks a secret key `d` in some special way. Our records do not indicate how though... 

Using these parameters, anyone other person P, can send D a secret message `m` by performing the following calculation: `c = m^e (mod n)`. D can then decrypt by performing `m = c^d (mod n)`. With [cool math](https://www.coolmathgames.com/) and such, this somehow decrypts the original message.

#### Darco's RSA

In this scenario, D. Paolmart has both created the parameters for encryption AND encrypted a message. Therefore, he is both the sender and receiver, or both person D and P (this might be confusing if you choose to look up RSA online, so j remember this).

## Code Setup

#### Initial Steps
1) Download code

2) Paste your clue output into the "secret_schmecret.txt" file
    - **EX:** 120 291 111 104 ...
    
3) Figure out decryption key
    - Yass

4) Locate the output of your next clue in the "gf_too_smart.txt" file
    - Should now be a series of letters, not numbers
    - The output may/should look odd -- make sure to verify the output on the trivia site!

#### Execution

To compile the code, enter the following into your terminal:

```
g++ main.cpp encryption.cpp -o main.exe
```

and run the code with

```
./main.exe
```
#### Hint

The could should be crackable only by editing the main file, however, the other files should be inspected for critical clues about the encryption scheme.

