#!/bin/bash

j=0
s=0
mkdir File_Modificati
for file in `ls | grep .pdf`

do

let j++

i=`pdftk $file dump_data | grep NumberOfPages`
n=`echo ${i:15}`
mod=`expr $n % 2`
if (($mod == 1))
then

echo "" | ps2pdf -sPAPERSIZE=a4 - b.pdf
s=1
pdftk $file b.pdf cat output file_$j.pdf

else
cp $file file_$j.pdf
fi
mv file_$j.pdf File_Modificati/


done

cd File_Modificati
let j++
for ((k=2; k<j; k++))
do
pdftk file_1.pdf file_$k.pdf cat output f.pdf
rm file_1.pdf rm file_$k.pdf
mv f.pdf file_1.pdf
done
mv file_1.pdf ../File_unito.pdf
cd ..

rm -r File_Modificati
if (($s==1))
then
    rm b.pdf
fi
