# Para Entregar / Discutir:

## 1. No exercício 2, por que dobra consegue alterar o vetor do main sem return?
### Isso ocorre, porque a alteração é feita direto no endereço de memória, assim, sendo desnecessário um return, já que não há retorno de valores.

## 2. No exercício 5, cole dois endereços consecutivos de int e mostre a diferença em bytes.
### Endereço int 0: 0x7fffbc1aa100
### Endereço int 1: 0x7fffbc1aa104
### Endereço int 2: 0x7fffbc1aa108
### Endereço int 3: 0x7fffbc1aa10c
### 12 bytes ao todo.

### Endereço double 0: 0x7fffbc1aa110
### Endereço double 1: 0x7fffbc1aa118
### Endereço double 2: 0x7fffbc1aa120
### Endereço double 3: 0x7fffbc1aa128
### 24 bytes ao todo.

## 3. No exercício 6, explique em uma frase o que o AddressSanitizer detectou e por que, sem ele, o erro poderia passar despercebido.
### Ele detectou o erro ERROR: AddressSanitizer: stack-buffer-overflow on address 0x72031dbf0058 at pc 0x7603200b05dc bp 0x7ffdb399ff40 sp 0x7ffdb399f6c8, que se trata da invasão do endereço que não foi alocado ao vetor, sem o AddressSanitizer o programa funciona normalmente, fazendo com que o erro seja "oculto".