import sys 

with open('fileprocessor.input', 'r') as file:
	for line in file:
		line = line.strip()
		if line.startswith('#'):
			continue
		username,password,userid,groupid=map(str.strip, line.split(":"))
		print(f"The user {username} has a password of {password} and has userid {userid} and groupid {groupid}")
print("End of User Data")
