with open('main.cpp', 'r', encoding='utf-8') as f:
    t = f.readlines()
    f.close()
for i in range(0, len(t)):
    if '//' in range(0, len(i)):
        for j in i:
            if j != '\n':
                j.pop
