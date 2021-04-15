#include <stdio.h>
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
int main(int argc, char**argv)
{
	FILE *f;
	Endereco e;
	int qt;
    int c=0;
	long tamanhoArquivo, posicao, primeiro, ultimo, meio;

	if(argc != 2)
	{
		fprintf(stderr, "USO: %s [CEP]", argv[0]);
		return 1; 
	}
	f = fopen("cep_ordenado.dat","r");
	fseek(f,0,SEEK_END);
	tamanhoArquivo = ftell(f);
	rewind(f); // fseek(f,0,SEEK_SET);

	primeiro = 0;
	ultimo = (tamanhoArquivo/sizeof(Endereco))-1;
	
 while (primeiro <= ultimo )
    {
        c++;
        meio = (primeiro+ultimo)/2;
	    
	    fseek(f, meio * sizeof(Endereco), SEEK_SET);	
	    fread(&e,sizeof(Endereco),1,f); // li o do meio
	    

        if(strncmp(argv[1],e.cep,8) == 0)
		{ 
			printf("%.72s\n%.72s\n%.72s\n%.72s\n%.2s\n%.8s\n",e.logradouro,e.bairro,e.cidade,e.uf,e.sigla,e.cep);
			break;
		}
		 if (strncmp(argv[1],e.cep,8) > 0)
		{
 			 primeiro = meio + 1;
		}
		else
		{
			ultimo = meio -1;
		}
	       qt = fread(&e,sizeof(Endereco),1,f);	
    }
	printf("Total Lido: %d\n", c);
	fclose(f);
	return 0;
}
