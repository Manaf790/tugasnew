let buah = ["mangga", "jeruk"];

console.log(buah[0]);

buah.unshift("apel");
buah.splice(2, 0, "semangka");
buah.push("pisang");
console.log("setelah ditambah: ", buah);

buah.shift();
buah.splice(1, 1);
buah.pop();
console.log("setelah dihapus: ", buah);

let orang = ["Budi","Siti"];

console.log(orang[0]);

orang.unshift("Roni");
orang.push("Dewi");
orang.shift();
console.log("hasil akhir: ", orang);

