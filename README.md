<h1 align="center">Libft</h1>


<div align="center">
<img src="https://github.com/debsalbornoz/libft/assets/119970138/22b14898-85a2-431d-b58f-dd4aa7fb2a64">
</div> 
<div align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/Status-Finished-green">
</div>
<h2>Sobre </h2>

"Libft" é uma biblioteca desenvolvida em C para um projeto na escola de programação 42. Este projeto envolve a recriação de várias funções das bibliotecas padrão C inteiramente do zero, sem depender de funções pré-existentes. Além de replicar essas funções essenciais, "Libft" também inclui recursos adicionais, como manipulação de memória, busca e ordenação de arrays, manipulação de strings, operações matemáticas básicas e manipulação de arquivos.

Para realizar essas tarefas, é crucial ter um forte entendimento dos conceitos fundamentais de programação como lógica condicional, loops e estruturas de dados. O objetivo principal deste projeto é obter uma melhor compreensão das operações básicas em C enquanto aprimora as habilidades de resolução de problemas e programação. Construir a "Libft" exige eficiência e precisão, aderindo estritamente às diretrizes e padrões estabelecidos pela 42.

Reserve um tempo para explorar o repositório do libft, experimentar o código e integrar essas funções nos seus projetos. Se você encontrar desafios ou tiver ideias para aprimoramentos, suas contribuições são imensamente valorizadas!

<h2>Funções desenvolvidas :</h2>

### Funções de &lt;ctype.h&gt;:

- **[ft_isalpha](https://github.com/debsalbornoz/libft/blob/main/libft/ft_isalpha.c)** - Verifica se um caractere é alfabético.
- **[ft_isdigit](https://github.com/debsalbornoz/libft/blob/main/libft/ft_isdigit.c)** - Verifica se um caractere é um dígito (0 a 9).
- **[ft_isalnum](https://github.com/debsalbornoz/libft/blob/main/libft/ft_isalnum.c)** - Verifica se um caractere é alfanumérico.
- **[ft_isascii](https://github.com/debsalbornoz/libft/blob/main/libft/ft_isascii.c)** - Verifica se um caractere está no conjunto ASCII.
- **[ft_isprint](https://github.com/debsalbornoz/libft/blob/main/libft/ft_isprint.c)** - Verifica se um caractere é imprimível.
- **[ft_toupper](https://github.com/debsalbornoz/libft/blob/main/libft/ft_toupper.c)** - Converte letras minúsculas em maiúsculas.
- **[ft_tolower](https://github.com/debsalbornoz/libft/blob/main/libft/ft_tolower.c)** - Converte letras maiúsculas em minúsculas.

### Funções de &lt;string.h&gt;:

- **[ft_strlen](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strlen.c)** - Calcula o comprimento da string s, excluindo o byte nulo terminador.
- **[ft_memset](https://github.com/debsalbornoz/libft/blob/main/libft/ft_memset.c)** - Preenche os primeiros n bytes da área de memória apontada por s com o byte constante c.
- **[ft_bzero](https://github.com/debsalbornoz/libft/blob/main/libft/ft_bzero.c)** - Apaga os dados nos n bytes da memória a partir da localização apontada por s, escrevendo zero nessa área.
- **[ft_memcpy](https://github.com/debsalbornoz/libft/blob/main/libft/ft_memcpy.c)** - Copia n bytes da área de memória src para a área de memória dest. As áreas de memória não devem se sobrepor.
- **[ft_memmove](https://github.com/debsalbornoz/libft/blob/main/libft/ft_memmove.c)** - Copia n bytes da área de memória src para a área de memória dest. As áreas de memória podem se sobrepor.
- **[ft_strlcpy](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strlcpy.c)** - Copia até um tamanho especificado da string fonte para a string de destino.
- **[ft_strlcat](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strlcat.c)** - Concatena strings até um tamanho especificado.
- **[ft_strchr](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strchr.c)** - Retorna um ponteiro para a primeira ocorrência do caractere c na string s.
- **[ft_strrchr](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strrchr.c)** - Localiza a última ocorrência de c (convertido para um char) na string apontada por s.
- **[ft_strncmp](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strncmp.c)** - Compara os primeiros n bytes de s1 e s2.
- **[ft_memchr](https://github.com/debsalbornoz/libft/blob/main/libft/ft_memchr.c)** - Analisa os primeiros n bytes da área de memória apontada por s para a primeira instância de c.
- **[ft_memcmp](https://github.com/debsalbornoz/libft/blob/main/libft/ft_memcmp.c)** - Compara os primeiros n bytes das áreas de memória s1 e s2.
- **[ft_strnstr](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strnstr.c)** - Localiza a primeira ocorrência de uma substring na string.
- **[ft_strdup](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strdup.c)** - Duplica uma string.

### Funções de &lt;stdlib.h&gt;:

- **[ft_atoi](https://github.com/debsalbornoz/libft/blob/main/libft/ft_atoi.c)** - Converte uma string em um int.
- **[ft_calloc](https://github.com/debsalbornoz/libft/blob/main/libft/ft_calloc.c)** - Aloca memória e inicializa a memória com zero.

### Funções adicionais:

- **[ft_substr](https://github.com/debsalbornoz/libft/blob/main/libft/ft_substr.c)** - Aloca e retorna uma substring.
- **[ft_strjoin](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strjoin.c)** - Aloca e retorna uma nova string, que é o resultado da concatenação de 's1' e 's2'.
- **[ft_strtrim](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strtrim.c)** - Aloca e retorna uma cópia de 's1' com os caracteres especificados em 'set' removidos do início e do fim da string.
- **[ft_split](https://github.com/debsalbornoz/libft/blob/main/libft/ft_split.c)** - Aloca e retorna um array de strings obtidas dividindo a string usando um delimitador.
- **[ft_itoa](https://github.com/debsalbornoz/libft/blob/main/libft/ft_itoa.c)** - Aloca e retorna uma string representando o inteiro recebido como argumento.
- **[ft_strmapi](https://github.com/debsalbornoz/libft/blob/main/libft/ft_strmapi.c)** - Aplica a função 'f' a cada caractere da string 's', passando seu índice como primeiro argumento para criar uma nova string resultante das aplicações sucessivas de 'f'.
- **[ft_striteri](https://github.com/debsalbornoz/libft/blob/main/libft/ft_striteri.c)** - Aplica a função 'f' a cada caractere da string passada como argumento.
- **[ft_putchar_fd](https://github.com/debsalbornoz/libft/blob/main/libft/ft_putchar_fd.c)** - Envia um caractere para o descritor de arquivo fornecido.
- **[ft_putstr_fd](https://github.com/debsalbornoz/libft/blob/main/libft/ft_putstr_fd.c)** - Envia uma string para o descritor de arquivo fornecido.
- **[ft_putendl_fd](https://github.com/debsalbornoz/libft/blob/main/libft/ft_putendl_fd.c)** - Envia uma string para o descritor de arquivo fornecido seguida de uma nova linha.
- **[ft_putnbr_fd](https://github.com/debsalbornoz/libft/blob/main/libft/ft_putnbr_fd.c)** - Envia um inteiro para o descritor de arquivo fornecido.

## Uso

### Requisitos:

Este projeto é escrito em C e precisa do compilador cc.

### Instruções

- Clone o repositório:

    ```bash
    git clone https://github.com/debsalbornoz/libft.git
    ```

- Execute:

    - `make all` - compila todos os arquivos e cria a biblioteca (libft.a).
    - `make re` - remove todos os arquivos e recompila o projeto.
    - `make clean` - remove os arquivos temporários.
    - `make fclean` - remove todos os arquivos criados, mantendo apenas os arquivos originais.

- Para usar a biblioteca em seu projeto, inclua:

    ```c
    #include "libft.h"
    ```
