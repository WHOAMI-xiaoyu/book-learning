from PIL import Image

ascii_char = list('baidu')


def get_char(r, b, g, alpha=256):
    if alpha == 0:
        return ' '
    gray = int(0.2126 * r + 0.1752 * g + 0.0722 * b)
    unit = int(256 / len(ascii_char))
    return ascii_char[gray//unit]


def main():
    im = Image.open('d://2.jpg')
    WIDTH, HEAGHT = 100, 60
    im = im.resize((WIDTH, HEAGHT))
    txt = ""
    for i in range(HEAGHT):
        for j in range(WIDTH):
            txt += get_char(*im.getpixel((j, i)))
        txt += '\n'
    fo = open("d://file.txt", "w")
    fo.write(txt)
    fo.close()


main()
