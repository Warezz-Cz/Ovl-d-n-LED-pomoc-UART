UART ovládání LED project
===========================

Účel/Zadání/Funkce
-----------------------

* pomocí kláves 1,2,3,4,5,6,7,8,9,0 ovládám rychlost blikání LED


Schema zapojení
-----------------------

![schema zapojení](./docs/schema.png)

Popis funkce
-----------------------

1. LED blíká rychlostí, která je uložená v proměnné
2. UART 1 má povolené přerušení
3. ISR od UART1-Rx nastavuje tuto proměnnou

* IRS (interupt service rutine)

ToDo
-----------------------

* tohle

