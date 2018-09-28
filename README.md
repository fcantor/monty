# monty

<p align="center">
<img src="https://payload148.cargocollective.com/1/11/353777/5270131/Dogs.jpg">
</p>

The Monty language is a scripting language that is first compiled into Monty byte codes. It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Project | Description
---|---
00.m | Contains the functions ```push```, which pushes an element to the stack, and ```pall``` , which prints the values on the stack starting from the top of the stack.
006.m | Contains the function ```pint```, which prints the value at the top of the stack.
07.m | Contains the opcode ```pop```, which removes the top element of the stack.
09.m | Contains the opcode ```swap```, which swaps the top two elements of the stack.
12.m | Contains the opcode ```add```, which adds the top two elements of the stack.
13.m | Contains the opcode ```nop```, which doesn't do anything.
13.m | Contains the opcode ```sub```, subtracts the top element of the stack from the second top 
13.m | Contains the opcode ```div```, divides the second top element of the stack by the top element of the stack.
13.m | Contains the opcode ```mul```, multiplies the second top element of the stack with the top element of the stack.
13.m | Contains the opcode ```mod```, computes the rest of the division of the second top element of the stack by the top element of the stack.
13.m | Contains the opcode ```pchar```, prints the char at the top of the stack
13.m | Contains the opcode ```pstr```, prints the string starting at the top of the stack



## Authors
* [**Annesophie Le Bloas**](https://github.com/aslebloas)
* [**Francesca Cantor**](https://github.com/fcantor)