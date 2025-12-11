import qrcode
url = input("input your url in here")
img = qrcode.make(url)
img.save('qrcode.png')
print("QR code generated and saved as qrcode.png")