import os
filee = open('C:\Users\ASUS\Desktop\info.txt','w')
lst=os.listdir("G:\movies")
c=0
for l in lst:
  c=c+1
  filee.write(str(c)+".  "+l+'\n')
  
filee.close()
print "-----Successfully Written.-----"
