---
layout: page
title: Software
permalink: /software/
nav: true
nav_order: 5
---

This page collects a few small scripts I wrote during my undergraduate studies. Most of them are in bash and were originally designed for everyday academic use.

## Booklet printing (A5 format)

These two bash scripts allow you to rearrange the pages of a PDF so that it can be printed as an **A5 booklet**, with two pages per sheet.

To use them, you need the command `pdftk` (already available on the computers in the lab).

The second script is written more cleanly, but I decided to keep the first one as well: it was my first relatively useful bash script.

* `script1` — [script](/assets/scripts/script1.sh)
* `script2` — [script](/assets/scripts/script2.sh)

## Printing on the classroom 4 printer

This bash script allows you to print on the **classroom 4 printer** directly from your own computer.

Inside the script, you need to replace `user` with your own username.  
Since the script uses `ssh` multiple times, it is convenient to copy your **SSH keys** to the machine `lab1`.

* `print_lab4.sh` — [script](/assets/scripts/print_lab4.sh)

## Merging PDFs in a folder

This bash script merges all the PDFs contained in the folder where it is executed.  
It also makes sure that each file has an **even number of pages**, which is useful for printing or booklet formatting.

Note: PDF filenames must **not contain spaces**.

* `merge_pdfs.sh` — [script](/assets/scripts/merge_pdfs.sh)

## Downloading lecture videos

This bash script downloads all the lecture videos of **Analysis 1**, taught by **Prof. Gobbino** in the academic year **2016/17**.

* `download_gobbino.sh` — [script](/assets/scripts/download_gobbino.sh)