from cs50 import get_string

text = get_string("Text: ")
words=1
sentence = 0
letters = 0
y = len(text)
for i in text :
    if i == " ":
        words+=1

    # words+=1
    elif i=="." or i== "?" or i== "!" :
        sentence+=1
    # sentexce+=1isalpha
    elif i.isalpha()  :
        letters+=1
    # letters+=1

l = letters / words * 100
s = sentence / words * 100
x =round (0.0588*l - 0.296*s -15.8)
if x < 1 :
    print("Before Grade 1")
elif x >= 16 :
    print("Grade 16+")
else :
    print("Grade", x)


