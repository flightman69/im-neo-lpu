import pyautogui, time

time.sleep(5)

f = open("answer.txt", 'r')

for line in f:
    pyautogui.typewrite(line.strip())
    pyautogui.press("enter")

for i in range(30):
    pyautogui.press("delete")
