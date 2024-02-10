import os

files = os.listdir("/Users/zimengx/Documents/Quantum")
print(files)
for i in files:
    try:
        newfilename = i[i.index("_")+1:]
        print(newfilename)
        os.rename(f"/Users/zimengx/Documents/Quantum/{i}", f"/Users/zimengx/Documents/Quantum/{newfilename}")
    except ValueError:
        continue