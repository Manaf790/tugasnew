buah = ["mangga", "jeruk"]

print(buah[1])

buah.insert(0, "apel")
buah.insert(1, "semangka")
buah.append("pisang")
print("setelah ditambah:", buah)

buah.pop(0)
buah.pop(1)
buah.pop()
print("setelah dihapus:", buah)

orang = ["Budi", "Siti"]
orang.insert(0, "Roni")
orang.append("Dewi")
orang.pop(0)
print("hasil akhir:", orang)
