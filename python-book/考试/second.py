#2011102050����ǿsecond.py
s=input("������һ���ַ���\n")
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
raw_input('Ӣ���ַ���{},�����ַ���{},�ո��ַ���{},�����ַ���{}'.format(letter,num,space,other))
