# Digital Logic with TL-Verilog and Makerchip
<a href="https://makerchip.com/">Makerchip</a> is a free online environment for developing high-quality integrated circuits. You can code, compile, simulate, and debug Verilog designs, 
all from your browser. Your code, block diagrams, and waveforms are tightly integrated.

All the examples and code-files in this directory have been coded on Makerchip IDE using TL-verilog.
## Combinational Logic

* Inverter using TL-verilog (logic) -
```
$out = ! $in;
```
There is no need to declare $out and $in unlike Verilog. There is also no need to assign $in. Random stimulus is provided, and a warning is produced.

* <a href="https://github.com/RISCV-MYTH-WORKSHOP/riscv_myth_workshop_may22-adithi-su/blob/master/Day3_5/calculator_combinational.tlv">Calculator using combinational logic </a>

## Sequential Logic

* Fibonacci Series with reset using TL-Verilog (logic) - 
```
$num[31:0] = $reset ? 1 : (>>1$num + >>2$num)
```
The operator >> in ```>>1$num``` and ```>>2$num``` gives the value of that signal 1 cycle before and 2 cycles before respectively.

* <a href="https://github.com/RISCV-MYTH-WORKSHOP/riscv_myth_workshop_may22-adithi-su/blob/master/Day3_5/calculator_sequential.tlv">Calculator using sequential logic </a>

## Pipelined Logic

Code is written under ```|pipe``` scope with stages defined as ```@1```,```@2``` and so on.
* <a href="https://github.com/RISCV-MYTH-WORKSHOP/riscv_myth_workshop_may22-adithi-su/blob/master/Day3_5/calculator_with_counter.tlv">Counter and calculator in pipeline</a>

## Validity

Validity in TL-verilog - signal indicates validity of transaction and described as "when" scope else it will work as don't care. Denoted as ```?$valid```. 
Validity provides easier debug, cleaner design, better error checking, automated clock gating.
```
|calc
@1
$valid = ...;
?$valid
    @1 
    ...
    @2
    ...
```
* <a href = "https://github.com/RISCV-MYTH-WORKSHOP/riscv_myth_workshop_may22-adithi-su/blob/master/Day3_5/calculator_validity.tlv"> 2 cycle calculator with validity </a> 
