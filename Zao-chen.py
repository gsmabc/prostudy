import requests, re
from bs4 import BeautifulSoup
import os, sys, io

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

res = requests.get(r'http://yuzhidabbs.ddns.net:8513/?new/1.html')
soup = BeautifulSoup(res.text, 'lxml')
soupList = []


def get_writer(soupList):
    for i in soupList:
        str = i.a['class']
        str = str[::-7]
        print(str)


for i in soup.descendants:
    soupList.append(i)
print(len(soupList))

for link in soup.select('td.t  a.t'):  # 跟上面的方法等价
    print
    link
    urls.append(link.get('href').split('?')[0])
