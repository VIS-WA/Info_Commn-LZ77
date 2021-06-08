# lz77
Lempel-Ziv Source Coding.

Variants of L-Z codes was the algorithm of the widely used Unixfile compression utility compress as well as gzip. Several otherpopular compression utilities also used L-Z, or closely related encoding.
•LZ became very widely used when it became part of the GIF image format in 1987. It may also (optionally) be used in TIFF and PDF files.
•There are two versions of L-Z codes. We will only discuss the “window” version.

In (the window version of) Lempel Ziv algo, symbols(alphanumerics or any other) that have already been encoded are stored in a window.The encoder then looks at the next symbols to be encoded to find the longest string that is in the window that matches the source symbols to be encoded.

## Programmed Language: C++
## Suggested Compiler : g++(GCC)9.2.1

## INPUT FORMAT:
First line should be the text that needs to be compressed.(spaces can be included).Enter the complete text and only then press enter.
Second line should be the size of window that's used as dictionary in the program.

## OUTPUT FORMAT:
the compressed code is printed with each entity printed on a new line

## CONSTRAINTS:
text size   < 2^32 - 1 (may depend on the architecture of the tester)
window size < 2*10^9

*NOTE: (1-BASED indexing)
