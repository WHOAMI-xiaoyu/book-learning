import time
scale=10
m="执行开始"
n="执行结束"
print("{0:-^10}".format(m))
for i in range(scale+1):
    a,b='**'*i,'..'*(scale-i)
    c=(i/scale)*100
    print("%{:^3.0f}[{}->{}]".format(c,a,b))
    time.sleep(0.1)
print("{0:-^10}".format(n))