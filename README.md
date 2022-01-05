# Valve Anti-Cheat Pattern Detection Mitigation
Here you can see the binaries when we add the inline polymorphic junk code. 
It makes any anticheats job harder as long as it searches for patterns or signatures inside of code.
In addition, it doesnt change any values held in registers, it just adds a little bit of useless asm to make signature detection harder.

![alt text](https://i.imgur.com/989IU7Q.png)

The way you use the procedure is you would call it now and again throughout your code, primarily on anything that 
would trigger detection such as OpenProcess(PROCESS_ALL_ACCESS, 0, TargetProc). Surround these procedures with the plymorphic,
this makes it so much harder for the anticheat to find.

Although this method isn't perfect, it is much better than junk code. You should use this mitigation in addition with other things such as 
api hooks on the anticheat. This best serves for anticheats such as Valve-Anti-Cheat.
