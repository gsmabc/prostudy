import win32api
import win32con
import win32gui
from tkinter.filedialog import askopenfilename
import cv2
from threading import Thread
import os.path as op
import os

zen = 0


def readImg(video_path):
    video = cv2.VideoCapture(video_path)
    success, frame = video.read()
    img_id = 0
    while success:
        img_outpath = f'/imgs/1.png'
        img_id += 1
        cv2.imwrite(img_outpath, frame)  # img_outpath 是输出路径，自己定义
        success, frame = video.read()


def setWallPaper(pic):
    regKey = win32api.RegOpenKeyEx(win32con.HKEY_CURRENT_USER, "Control Panel\\Desktop", 0, win32con.KEY_SET_VALUE)
    win32api.RegSetValueEx(regKey, "WallpaperStyle", 0, win32con.REG_SZ, "2")
    win32api.RegSetValueEx(regKey, "TileWallpaper", 0, win32con.REG_SZ, "0")
    win32gui.SystemParametersInfo(win32con.SPI_SETDESKWALLPAPER, pic, win32con.SPIF_SENDWININICHANGE)


# path=askopenfilename()
# setWallPaper(path)
readThread = Thread(target=readImg, args=())
