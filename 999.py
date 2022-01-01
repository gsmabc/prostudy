import pyautogui, time


def inputCh():
    t = input('input:')
    time.sleep(3)
    pyautogui.typewrite(t, 0.5)


def inputEn():
    t = input('input:').replace(r'.', r'. ').replace(r'!', r'! ').replace(r'?', r'? ').replace('。', r'. ').replace('！',
                                                                                                                   r'! ').replace(
        '？', r'? ')
    time.sleep(3)
    pyautogui.typewrite(t, 0.5)


while True:
    a = int(input('1:zh 2:en 3:exit'))
    if a == 1:
        inputCh()
    elif a == 2:
        inputEn()
    else:
        exit()
