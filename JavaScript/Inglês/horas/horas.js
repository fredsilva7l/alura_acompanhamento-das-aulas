var input = document.querySelector("input");
input.focus();

function numeroRandomUmADoze (){
    let horas = 0;
    while(!(horas >= 1 && horas <= 12)) horas = Math.floor (100 * Math.random());
    return horas;
}

function numeroRandomZeroACinquentaeCinco (){
    let minutos = 60;
        while(!(minutos < 60  && minutos%5 == 0)) minutos = Math.floor (100 * Math.random());
    return minutos;
}

function pronunciaHoras() {
    let escritaHoras = "";
    switch(numeroRandomUmADoze()){
        case 1 :
            escritaHoras = "one"
            return escritaHoras;
        case 2 : 
            escritaHoras = "two"
            return escritaHoras;
        case 3 : 
            escritaHoras = "three"
            return escritaHoras;
        case 4 : 
            escritaHoras = "four"
            return escritaHoras;
        case 5 : 
            escritaHoras = "five"
            return escritaHoras;
        case 6 : 
            escritaHoras = "six"
            return escritaHoras;
        case 7 : 
            escritaHoras = "seven"
            return escritaHoras;
        case 8 : 
            escritaHoras = "eigth"
            return escritaHoras;
        case 9 : 
            escritaHoras = "nine"
            return escritaHoras;
        case 10 : 
            escritaHoras = "ten"
            return escritaHoras;
        case 11 : 
            escritaHoras = "eleven"
            return escritaHoras;
        case 12 : 
            escritaHoras = "twelve"
            return escritaHoras;
        default :
            console.log("Houve erro no sistemas!");
    }
}

function pronunciaCorreta(horas, minutos) {
    let texto = "";
    switch(minutos){
        case 0 :
            texto = "It's " + horas + " o'clock";
            return texto;
        case 5 :
            texto = "It's five minutes past " + horas;
            return texto;
        case 10 :
            texto = "It's ten minutes past " + horas;
            return texto;
        case 15 :
            texto = "It's a quarter past " + horas;
            return texto;
        case 20 :
            texto = "It's twenty minutes past " + horas;
            return texto;
        case 25 :
            texto = "It's twenty-five minutes past " + horas;
            return texto;
        case 30 :
            texto = "It's half past " + horas;
            return texto;
        case 35 :
            if(horas == 12) horas = 0;
            texto = "It's twenty-five minutes to " + (horas+1);
            return texto;
        case 40 :
            if(horas == 12) horas = 0;
            texto = "It's twenty minutes to " + (horas+1);
            return texto;
        case 45 :
            if(horas == 12) horas = 0;
            texto = "It's a quarter to " + (horas+1);
            return texto;
        case 50 :
            if(horas == 12) horas = 0;
            texto = "It's ten minutes to " + (horas+1);
            return texto;
        case 55 :
            if(horas == 12) horas = 0;
            texto = "It's five minutes to " + (horas+1);
            return texto;
    }
}

function iniciaValor(){
    var horas = numeroRandomUmADoze();
    var minutos = numeroRandomZeroACinquentaeCinco();
    button.textContent = "Escreva a hora em inglês => " + horas + ":" + minutos;
    return pronunciaCorreta(horas,minutos);
}

//console.log(numeroRandomUmADoze());
//console.log(numeroRandomZeroACinquentaeCinco());
//console.log(pronunciaHoras());
//console.log(pronunciaCorreta());
console.log("inicio do teste");
for(var i = 0;i < 1;i++) console.log(iniciaValor());
console.log("fim");
