from pyfirmata import Arduino
import time

s=input("Please enter the string\n")

port="portname"
board=Arduino(port)

for i in s:
    match i:
        case "1":
            board.digital[3].write(1)
            time.sleep(0.5)

        case "2":
            board.digital[3].write(1)
            board.digital[4].write(1)
            time.sleep(0.5)
           
        case "3":
            board.digital[3].write(1)
            board.digital[6].write(1)
            time.sleep(0.5)

        case "4":
            board.digital[3].write(1)
            board.digital[6].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
            
        case "5":
            board.digital[3].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
          
        case "6":
            board.digital[3].write(1)
            board.digital[4].write(1)
            board.digital[6].write(1)
            time.sleep(0.5)
           
        case "7":
            board.digital[3].write(1)
            board.digital[4].write(1)
            board.digital[6].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)

        case "8":
            board.digital[3].write(1)
            board.digital[4].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
          
        case "9":
            board.digital[6].write(1)
            board.digital[4].write(1)
            time.sleep(0.5)
           
        case "0":
            board.digital[6].write(1)
            board.digital[4].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
          
        case "a":
            board.digital[3].write(1)
            time.sleep(0.5)
            
        case "b":
            board.digital[3].write(1)
            board.digital[4].write(1)
            time.sleep(0.5)

        case "c":
            board.digital[3].write(1)
            board.digital[6].write(1)
            time.sleep(0.5)
          

        case "d":
            board.digital[3].write(1)
            board.digital[6].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
         
        case "e":
            board.digital[3].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
          
        case "f":
            board.digital[3].write(1)
            board.digital[4].write(1)
            board.digital[6].write(1)
            time.sleep(0.5)
          
        case "g":
            board.digital[3].write(1)
            board.digital[4].write(1)
            board.digital[6].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
          
        case "h":
            board.digital[3].write(1)
            board.digital[4].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
         
        case "i":
            board.digital[6].write(1)
            board.digital[4].write(1)
            time.sleep(0.5)
          
        case "j":
            board.digital[6].write(1)
            board.digital[4].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
           
        case "k":
            board.digital[3].write(1)
            board.digital[5].write(1)
            time.sleep(0.5)
          
        case "l":
            board.digital[3].write(1)
            board.digital[4].write(1)
            board.digital[5].write(1)
            time.sleep(0.5)
         
        case "m":
            board.digital[3].write(1)
            board.digital[6].write(1)
            board.digital[5].write(1)
            time.sleep(0.5)
         
        case "n":
            board.digital[3].write(1)
            board.digital[5].write(1)
            board.digital[6].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
           
        case "o":
            board.digital[3].write(1)
            board.digital[5].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
          
        case "p":
            board.digital[3].write(1)
            board.digital[4].write(1)
            board.digital[5].write(1)
            board.digital[6].write(1)
            time.sleep(0.5)
           
        case "q":
            board.digital[3].write(1)
            board.digital[5].write(1)
            board.digital[4].write(1)
            board.digital[6].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
           
        case "r":
            board.digital[3].write(1)
            board.digital[4].write(1)
            board.digital[5].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)
           
        case "s":
            board.digital[6].write(1)
            board.digital[5].write(1)
            board.digital[4].write(1)
            time.sleep(0.5)
            
        case "t":
            board.digital[6].write(1)
            board.digital[5].write(1)
            board.digital[4].write(1)
            board.digital[7].write(1)
            time.sleep(0.5)

        case "u":
            board.digital[3].write(1)
            board.digital[5].write(1)
            board.digital[8].write(1)
            time.sleep(0.5)

        case "v":
            board.digital[3].write(1)
            board.digital[5].write(1)
            time.sleep(0.5)

        case "w":
            board.digital[4].write(1)
            board.digital[6].write(1)
            board.digital[7].write(1)
            board.digital[8].write(1)
            time.sleep(0.5)

        case "x":
            board.digital[3].write(1)
            board.digital[6].write(1)
            board.digital[5].write(1)
            board.digital[8].write(1)
            time.sleep(0.5)

        case "y":
            board.digital[3].write(1)
            board.digital[5].write(1)
            board.digital[6].write(1)
            board.digital[7].write(1)
            board.digital[8].write(1)
            time.sleep(0.5)
            
        case "z":
            board.digital[3].write(1)
            board.digital[5].write(1)
            board.digital[7].write(1)
            board.digital[8].write(1)
            time.sleep(0.5)
            
        case " ":
            board.digital[3].write(0)
            board.digital[4].write(0)
            board.digital[5].write(0)
            board.digital[6].write(0)
            board.digital[7].write(0)
            board.digital[8].write(0)
            time.sleep(0.5)

    board.digital[3].write(0)
    board.digital[4].write(0)
    board.digital[5].write(0)
    board.digital[6].write(0)
    board.digital[7].write(0)
    board.digital[8].write(0)   
    time.sleep(0.25)        