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

int main(int argc, char** argv)
{
    FILE *a, *b, *saida17,*saida18,*saida19,*saida20,*saida21,*saida22,*saida23,*saida24,*saida25,*saida26,*saida27,*saida28,*saida29,*saida30,*saida31;
    Endereco ea, eb;

    a = fopen("cep_a1.dat","r");
	b = fopen("cep_a2.dat","r");
	saida17 = fopen("saida17.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida17);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida17);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida17);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida17);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida17);
    free(a);
    free(b);

    a = fopen("cep_a3.dat","r");
	b = fopen("cep_a4.dat","r");
	saida18 = fopen("saida18.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida18);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida18);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida18);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida18);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida18);
    free(a);
    free(b);

    a = fopen("cep_a5.dat","r");
	b = fopen("cep_a6.dat","r");
	saida19 = fopen("saida19.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida19);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida19);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida19);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida19);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida19);
    free(a);
    free(b);

    a = fopen("cep_a7.dat","r");
	b = fopen("cep_a8.dat","r");
	saida20 = fopen("saida20.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida20);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida20);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida20);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida20);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida20);
    free(a);
    free(b);

    a = fopen("cep_a9.dat","r");
	b = fopen("cep_a10.dat","r");
	saida21 = fopen("saida21.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida21);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida21);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida21);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida21);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida21);
    free(a);
    free(b);

    a = fopen("cep_a11.dat","r");
	b = fopen("cep_a12.dat","r");
	saida22 = fopen("saida22.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida22);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida22);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida22);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida22);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida22);
    free(a);
    free(b);

    a = fopen("cep_a13.dat","r");
	b = fopen("cep_a14.dat","r");
	saida23 = fopen("saida23.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida23);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida23);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida23);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida23);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida23);
    free(a);
    free(b);

    a = fopen("cep_a15.dat","r");
	b = fopen("cep_a16.dat","r");
	saida24 = fopen("saida24.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida24);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida24);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida24);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida24);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida24);
    free(a);
    free(b);

	a = fopen("saida17.dat","r");
	b = fopen("saida18.dat","r");
	saida25 = fopen("saida25.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida25);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida25);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida25);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida25);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida25);
    free(a);
    free(b);    

    a = fopen("saida19.dat","r");
	b = fopen("saida20.dat","r");
	saida26 = fopen("saida26.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida26);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida26);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida26);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida26);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida26);
    free(a);
    free(b);  

    a = fopen("saida21.dat","r");
	b = fopen("saida22.dat","r");
	saida27 = fopen("saida27.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida27);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida27);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida27);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida27);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida27);
    free(a);
    free(b);

    a = fopen("saida23.dat","r");
	b = fopen("saida24.dat","r");
	saida28 = fopen("saida28.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida28);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida28);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida28);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida28);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida28);
    free(a);
    free(b);

    a = fopen("saida25.dat","r");
	b = fopen("saida26.dat","r");
	saida29 = fopen("saida29.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida29);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida29);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida29);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida29);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida29);
    free(a);
    free(b);


    a = fopen("saida27.dat","r");
	b = fopen("saida28.dat","r");
	saida30 = fopen("saida30.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida30);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida30);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida30);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida30);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida30);
    free(a);
    free(b);

    a = fopen("saida29.dat","r");
	b = fopen("saida30.dat","r");
	saida31 = fopen("saida31.dat","w");

	fread(&ea,sizeof(Endereco),1,a);
	fread(&eb,sizeof(Endereco),1,b);

	while(!feof(a) && !feof(b))
	{
		if(compara(&ea,&eb)<0) // ea.cep < eb.cep
		{
			fwrite(&ea,sizeof(Endereco),1,saida31);
			fread(&ea,sizeof(Endereco),1,a);
		}
		else
		{
			fwrite(&eb,sizeof(Endereco),1,saida31);
			fread(&eb,sizeof(Endereco),1,b);
		}
	}

	while(!feof(a))
	{
		fwrite(&ea,sizeof(Endereco),1,saida31);
		fread(&ea,sizeof(Endereco),1,a);		
	}

	while(!feof(b))
	{
		fwrite(&eb,sizeof(Endereco),1,saida31);
		fread(&eb,sizeof(Endereco),1,b);		
	}

	fclose(a);
	fclose(b);
	fclose(saida31);
    free(a);
    free(b);

}