#! /bin/bash
       k=`echo ${#1}`
       libro=`echo ${1:0:$k-4}`  # file senza estensione .pdf
       
       mkdir $libro
       
       cd $libro

       pdftk ../$libro.pdf burst output pagina_%d.pdf
       i=`pdftk ../$libro.pdf dump_data | grep NumberOfPages`
       n=`echo ${i:15}`

       #echo Inserisci il numero che leggi
       #
       #read -r n

       echo "" | ps2pdf -sPAPERSIZE=a4 - b.pdf # crea pagina bianca
       
       mod=`expr $n % 4`

       
       if [ $mod -eq 3 ]
then
    let n=n+1
    cp b.pdf pagina_$n.pdf
       fi

       if [ $mod -eq 2 ]
       then
	   let n=n+1
	   cp b.pdf pagina_$n.pdf 
	   
	   let n=$n+1
	   cp b.pdf pagina_$n.pdf
       fi
       
       if [ $mod -eq 1 ]
then
    let n=$n+1
    cp b.pdf pagina_$n.pdf

let n=$n+1
cp b.pdf pagina_$n.pdf

let n=$n+1
cp b.pdf pagina_$n.pdf
fi


# qualsiasi sia il valore iniziale a questo punto n sarà un multiplo di 4

let meta=n/2
a=1
let b=$meta+$a
let c=$b+1
let d=$a+1
pdftk pagina_$a.pdf pagina_$b.pdf pagina_$c.pdf pagina_$d.pdf cat output p0.pdf

rm  pagina_$a.pdf pagina_$b.pdf pagina_$c.pdf pagina_$d.pdf

let volte=meta/2 -1

let def=$volte-1

for ((k=1;k<volte;k++))
do
let a=2*k+1
let b=$meta+$a
let c=$b+1
let d=$a+1
let p=$k-1

pdftk pagina_$a.pdf pagina_$b.pdf pagina_$c.pdf pagina_$d.pdf cat output p$k.pdf
rm pagina_$a.pdf pagina_$b.pdf pagina_$c.pdf pagina_$d.pdf
#pdftk p$p.pdf pagina_$a.pdf pagina_$b.pdf pagina_$c.pdf pagina_$d.pdf cat output p$k.pdf
#rm p$p.pdf pagina_$a.pdf pagina_$b.pdf pagina_$c.pdf pagina_$d.pdf
echo $k di $def
done
for ((i=0;i <$volte/4;i++))
do
	for ((k=0;k<volte; k=$k+2))
	do
    b=$k
    if (k>0) then 
       let b= $k -1
    fi
       let a=$k+1
       mv p$k.pdf star.pdf 
       pdftk star.pdf p$a.pdf cat output p$b.pdf
       rm star.pdf p$a.pdf
       echo $k
done
done


#mv p$def.pdf File_Impaginato.pdf
#rm b.pdf doc_data.txt

