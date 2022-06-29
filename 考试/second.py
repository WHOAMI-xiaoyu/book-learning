#2011102050于文强second.py
s=input("请输入一行字符：\n")
letter,num,space,other=0,0,0,0
for i in s:
    if i.isalpha():
        letter+=1
    elif i.isdigit():
        num+=1
    elif i.isspace():
        space+=1
    else:
        other+=1
raw_input('英文字符数{},数字字符数{},空格字符数{},其他字符数{}'.format(letter,num,space,other))
