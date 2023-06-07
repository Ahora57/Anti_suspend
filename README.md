# Anti_suspend
Just an example of using shellcode to secure a process.  
Prevents:  
1)Freezing process threads (you can use anti-attach for debugger)  
2)Hardware breakpoints  
3)Hide thread from the debugger  
  
Problem:  
Use code in non legit modules  
This will raise the flags of AV  
