#include <iostream>
#include<stdio.h>
#include <string>
#include <cstring>

using namespace std;


// converts character array
// to string and returns it
string convertToString(char* a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

int main(int argc, char const *argv[]) {
    FILE *arq;
    //aqui o parametro pode ser 'rt', 'wt', "ba", ....
/*    
C string containing a file access mode. It can be:
"r"	read: Open file for input operations. The file must exist.
"w"	write: Create an empty file for output operations. If a file with the same name already exists, its contents are discarded and the file is treated as a new empty file.
"a"	append: Open file for output at the end of a file. Output operations always write data at the end of the file, expanding it. Repositioning operations (fseek, fsetpos, rewind) are ignored. The file is created if it does not exist.
"r+"	read/update: Open a file for update (both for input and output). The file must exist.
"w+"	write/update: Create an empty file and open it for update (both for input and output). If a file with the same name already exists its contents are discarded and the file is treated as a new empty file.
"a+"	append/update: Open a file for update (both for input and output) with all output operations writing data at the end of the file. Repositioning operations (fseek, fsetpos, rewind) affects the next input operations, but output operations move the position back to the end of file. The file is created if it does not exist.

With the mode specifiers above the file is open as a text file. In order to open a file as a binary file, a "b"
*/

    arq = fopen("nomes.txt", "rt");
    if (arq == NULL)
    {
        cout << "Problemas na CRIACAO do arquivo\n";
        return 0;
    }

    char linha[100];
    char *result;
    int i = 1;
    //testa o final de arquivo
 
 
 
    while (!feof(arq))
    {
	// Lê uma linha (inclusive com o '\n')
    //dá para usar tmb o comando fscanf
    cout << "lendo linha "<< i << "\n";
      result = fgets(linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result) { // Se foi possível ler
	    cout << "Linha "<< i<<": "<<linha ;
      }
      i++;
    }



    fclose(arq);
    arq = fopen("nomes.txt", "rt");
    
    //gravando
    char str[100];
    strcpy(str,"Linha de teste\n");
    int resultado;
    cout << "vou dar o fputs\n";
    resultado = fputs(str, arq);
    cout << "depois o fputs\n";
    //result = fprintf(arq,"Linha %d\n",i);
    if (resultado == EOF) {
        printf("Erro na Gravacao\n");
    }
    cout << "vou dar o close\n";
    

    fclose(arq);

}