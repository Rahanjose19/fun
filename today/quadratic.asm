0400 MOV SI,0500
0403 MOV DI,0600
0406 MOV BL,[SI]
0408 INC SI
0409 MOV AL,[SI]
040B MUL AL
040D MOV CL,AL
040F MOV AL,04
0411 MUL BL
0413 INC SI
0414 MOV BL,[SI]
0416 MUL BL
0418 CMP CL,AL
041A JNZ 0421
041C MOV[DI],00
JMP 042B
JC 0428
MOV [DI],01
JMP 042B
MOV [DI],02
HLT