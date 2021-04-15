#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Endereco Endereco;

struct _Endereco
{
	char logradouro[72];
	char bairro[72];
	char cidade[72];
	char uf[72];
	char sigla[2];
	char cep[8];
	char lixo[2];
};

int compara(const void *e1, const void *e2)
{
	return strncmp(((Endereco*)e1)->cep,((Endereco*)e2)->cep,8);
}

int main(int argc, char**argv)
{
	FILE *f, *saida;
	Endereco *e;
	long posicao, qtd, metade,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16;
	 

	f = fopen("cep.dat","r");
	fseek(f,0,SEEK_END);
	posicao = ftell(f);
	qtd = posicao/sizeof(Endereco);
    b1 = qtd/16;
    e = (Endereco*) malloc(metade*sizeof(Endereco));
	rewind(f);
	if(fread(e,sizeof(Endereco),b1,f) == b1)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a1.dat","w");
	fwrite(e,sizeof(Endereco),b1,saida);
	fclose(saida);
    printf("Escrito = OK\n");
	free(e);
    
    qtd = qtd-b1;
    b2 = qtd/15;
    e = (Endereco*) malloc((b2)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b2,f) == b2)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a2.dat","w");
	fwrite(e,sizeof(Endereco),b2,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b2;
    b3 = qtd/14;
    e = (Endereco*) malloc((b3)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b3,f) == b3)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a3.dat","w");
	fwrite(e,sizeof(Endereco),b3,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b3;
    b4 = qtd/13;
    e = (Endereco*) malloc((b4)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b4,f) == b4)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a4.dat","w");
	fwrite(e,sizeof(Endereco),b4,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b4;
    b5 = qtd/12;
    e = (Endereco*) malloc((b5)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b5,f) == b5)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a5.dat","w");
	fwrite(e,sizeof(Endereco),b5,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b5;
    b6 = qtd/11;
    e = (Endereco*) malloc((b6)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b6,f) == b6)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a6.dat","w");
	fwrite(e,sizeof(Endereco),b6,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b6;
    b7 = qtd/10;
    e = (Endereco*) malloc((b7)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b7,f) == b7)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a7.dat","w");
	fwrite(e,sizeof(Endereco),b7,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b7;
    b8 = qtd/9;
    e = (Endereco*) malloc((b8)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b8,f) == b8)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a8.dat","w");
	fwrite(e,sizeof(Endereco),b8,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b8;
    b9 = qtd/8;
    e = (Endereco*) malloc((b9)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b9,f) == b9)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a9.dat","w");
	fwrite(e,sizeof(Endereco),b9,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b9;
    b10 = qtd/7;
    e = (Endereco*) malloc((b10)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b10,f) == b10)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a10.dat","w");
	fwrite(e,sizeof(Endereco),b10,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b10;
    b11 = qtd/6;
    e = (Endereco*) malloc((b11)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b11,f) == b11)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a11.dat","w");
	fwrite(e,sizeof(Endereco),b11,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b11;
    b12 = qtd/5;
    e = (Endereco*) malloc((b12)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b12,f) == b12)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a12.dat","w");
	fwrite(e,sizeof(Endereco),b12,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b12;
    b13 = qtd/4;
    e = (Endereco*) malloc((b13)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b13,f) == b13)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a13.dat","w");
	fwrite(e,sizeof(Endereco),b13,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b13;
    b14 = qtd/3;
    e = (Endereco*) malloc((b14)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b14,f) == b14)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a14.dat","w");
	fwrite(e,sizeof(Endereco),b14,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b14;
    b15 = qtd/2;
    e = (Endereco*) malloc((b15)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b15,f) == b15)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a15.dat","w");
	fwrite(e,sizeof(Endereco),b15,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);

    qtd = qtd-b15;
    b16 = qtd;
    e = (Endereco*) malloc((b16)*sizeof(Endereco));
	if(fread(e,sizeof(Endereco),b16,f) == b16)
	{
		printf("Lido = OK\n");
	}
	saida = fopen("cep_a16.dat","w");
	fwrite(e,sizeof(Endereco),b16,saida);
	fclose(saida);
	printf("Escrito = OK\n");
	free(e);
	fclose(f);
}