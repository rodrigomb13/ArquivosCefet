

import struct
import sys

registroCEP = struct.Struct("72s72s72s72s2s8s2s")
cepColuna = 5
f = open("cep_ordenado.dat","rb")
f.seek(0, 2)
tamanhoBytes = f.tell()
inicio = 0
fim = (tamanhoBytes//registroCEP.size)-1
CepProcurado = b'22725031'
counter = 0

while( inicio <= fim):
    counter+=1
    meio = (inicio+fim)//2
    f.seek(meio,0)
    line = f.read(registroCEP.size)
    record = registroCEP.unpack(line)
    print(record[cepColuna])
    if record[cepColuna] < CepProcurado:
        inicio = meio + 1
    elif record[cepColuna] > CepProcurado:
        fim = meio - 1
    else:  
        print(record[0])
        break
f.close()
print( "total ", counter)


