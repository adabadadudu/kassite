# Import Modules in Kassite
if you want to add local modules to your script , create a file with name : 'mod.txt'
next add your modules name(without file extension),see example :

mod.txt :
```
iot
cloud
kaserial
```

Now you can use classes,functions,... in your main script file,for example :
`mod.txt` :
```
kaserial
```

`main.ks`:
```c#
baudrate = 9600
myserial = KAserial(baudrate,"COM6")
myserial.write("Hello World!");
```
