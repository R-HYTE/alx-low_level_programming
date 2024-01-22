# More of pointers, arrays and strings in c

# Setting up the environment to run crackme2
- `sudo apt-get update`
- `sudo apt-get install ltrace`
- `sudo apt install libssl-dev`
## Update the source list i.e `sudo vi /etc/apt/source.list`
- deb http://security.ubuntu.com/ubuntu xenial-security main
## In the shell
- `sudo apt-get update`
## Incase you get an GPG key error
- `sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-keys [insert the key ID here]`
## In the bash
- `sudo apt update`
- `sudo apt install libssl1.0.0`

# Reverse engineering using ltrace
- run `ltrace ./crackme2`
- Add the variable being used to compare our password in the env e.g `export jennieandjayloveasm=Testing`
- You'll notice a change when you rerun `ltrace ./crackme2`
- Take the 2 MD5 codes being compared and decrypt them online in the MD5 website
- Congratulations you got the password
- Back in the terminal now rerun `export jennieandjayloveasm=[replace testing with the other string after decrypting]`
- WE ARE IN!!!!
