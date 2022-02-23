var alfabeto = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"];
var pronuncia = ["ei","bi","si","di","i","ef","dzi","eit","ai","dzei","kei","el","em","en","ou","pi","kju","ar","es","ti","ju","vi","dablju","eks","uai","zi"];

var auxiliar = 0;

var input = document.querySelector("input");
input.focus();



function verifica() 
{	
        if(input.value == pronuncia[auxiliar]) 
            {
                contador();
                if (auxiliar == alfabeto.length )
                {
                    button.textContent = "Parabéns você acertou tudo! Você pode tentar novamente se quiser";
                    auxiliar =0;
                    input.value = "";
            input.focus();
                    return auxiliar;
                }
                button.textContent = ("Você acertou! Escreva a pronuncia de " + (alfabeto[auxiliar]));
            } 
        else 
        {
            button.textContent = ("Você ERROU! Escreva a pronuncia de " + (alfabeto[auxiliar]));
        }
        
           input.value = "";
        input.focus();
   }

   function contador()
   {
       auxiliar++;
       return auxiliar;
   }

   var button = document.querySelector("#button");
button.textContent = "Escreva a pronuncia de A em inglês";
   button.onclick = verifica;	