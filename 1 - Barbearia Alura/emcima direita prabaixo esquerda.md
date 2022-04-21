emcima direita prabaixo esquerda

Aula 1 Nesta aula, aprendemos:

- A ajustar a página principal para utilizar os mesmos padrões da página de produtos
- Medidas proporcionais com CSS
- Como funciona a *flutuação* dos elementos e como modificá-la, com a propriedade `float` do CSS
- Como *limpar* o `float`, com a propriedade `clear` do CSS

Aula 2 Nesta aula, aprendemos:

- A utilizar fontes externas nas nossas páginas
- Como incorporar um mapa à nossa página
- Como incorporar um vídeo à nossa página

Aula 3 Nesta aula, aprendemos:

- A melhorar mais ainda a semântica da página principal, com novas divisões, classes, etc
- Novas pseudo-classes
- Como aplicar um *background* gradiente na página
- Pseudo-elementos

Aula 4 Nesta aula, aprendemos:

- Seletores avançados CSS

  - Seletor

     

    ```
    >
    ```

    , para acessar os filhos de determinado elemento. Por exemplo, para acessar todos os

     

    ```
    p
    ```

     

    dentro de

     

    ```
    main
    ```

    :

    ```
    main > p {
    }COPIAR CÓDIGO
    ```

  - Seletor

     

    ```
    +
    ```

    , para acessar o primeiro irmão de determinado elemento. Por exemplo, para acessar o primeiro

     

    ```
    p
    ```

     

    após um

     

    ```
    img
    ```

    :

    ```
    img + p {
    }COPIAR CÓDIGO
    ```

  - Seletor

     

    ```
    ~
    ```

    , para acessar todos os irmãos de determinado elemento. Por exemplo, para acessar todos os

     

    ```
    p
    ```

     

    após um

     

    ```
    img
    ```

    :

    ```
    img ~ p {
    }COPIAR CÓDIGO
    ```

  - Seletor

     

    ```
    not
    ```

    , para acessar os elementos, exceto algum. Por exemplo, para acessar todos os

     

    ```
    p
    ```

     

    dentro de

     

    ```
    main
    ```

    , exceto o

     

    ```
    p
    ```

     

    que tem

     

    ```
    id
    ```

     

    ```
    missao
    ```

    :

    ```
    main p:not(#missao) {
    }COPIAR CÓDIGO
    ```

- Como fazer contas com CSS, com a propriedade `calc`

Aula 5 Nesta aula, aprendemos:

- Como manipular a opacidade dos elementos, com a propriedade CSS `opacity`
- Como manipular a opacidade das cores
- Como adicionar um sombreamento em volta dos elementos, com a propriedade CSS `box-shadow`
- Como adicionar um sombreamento em textos, com a propriedade CSS `text-shadow`

Aula 6 Nesta aula, aprendemos:

- Design responsivo

  : como ajustar o estilo da nossa página de acordo com o tamanho da tela do dispositivo que a acesse

  - Meta *tag* de ***Viewport\***
  - *Media Queries*

  css avançado

  performance

  flexbox: responsivo