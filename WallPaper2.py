with open('fff.txt', 'r', encoding='utf-8') as f:
    s = f.read()
    f.close()
l = set(s.split('\n'))
with open('fff1.txt', 'w+', encoding='utf-8') as f:
    for i in l:
        f.write(i + '\n')
    f.close()
print('done')
