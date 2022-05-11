
import hashlib

str2hash = input(" Enter the message : ")

result = hashlib.md5(str2hash.encode())

print("The hexadecimal equivalent of hash is : ", end ="")
print(result.hexdigest())
print("The byte equivalent of hash is : ", end ="")
print(result.digest())
