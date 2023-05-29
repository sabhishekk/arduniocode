void setup()
{
  Serial.begin(9600);
  pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
     pinMode(6,OUTPUT);
      pinMode(7,OUTPUT);
       pinMode(8,OUTPUT);
  
}

void loop()
{
  if (Serial.available()) {  // Check if data is available
  String s = Serial.readString();  // Read the incoming data
     for (int i = 0; i < s.length(); i++) {
      char c = s.charAt(i);
    switch(c){
      case 'a':
            digitalWrite(3,HIGH);
            delay(100);
      		break;  
      
        case 'b':
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            delay(100);
            break;
      
        case 'c':
            digitalWrite(3,HIGH);
            digitalWrite(6,HIGH);
            delay(50);
			break;

        case 'd':
            digitalWrite(3,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
      
      case 'e':
            digitalWrite(3,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
          
        case 'f':
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(6,HIGH);
            delay(50);          
      		break;
          
        case 'g':
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
          
        case 'h':
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
         
        case 'i':
            digitalWrite(6,HIGH);
            digitalWrite(4,HIGH);
            delay(50);          
      		break;
          
        case 'j':
            digitalWrite(6,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
           
        case 'k':
            digitalWrite(3,HIGH);
           digitalWrite(5,HIGH);
            delay(50);          
      		break;
          
        case 'l':
             digitalWrite(3,HIGH);
           digitalWrite(5,HIGH);
      		digitalWrite(4,HIGH);
            delay(50);          
      		break;
         
        case 'm':
           digitalWrite(3,HIGH);
           digitalWrite(5,HIGH);
            digitalWrite(6,HIGH);
            delay(50);          
      		break;
         
        case 'n':
            digitalWrite(3,HIGH);
           digitalWrite(5,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
           
        case 'o':
            digitalWrite(3,HIGH);
           digitalWrite(5,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
          
        case 'p':
           digitalWrite(3,HIGH);
           digitalWrite(5,HIGH);
      		digitalWrite(4,HIGH);
           digitalWrite(6,HIGH);
            delay(50);          
      		break;
           
        case 'q':
            digitalWrite(3,HIGH);
            digitalWrite(5,HIGH);
      		digitalWrite(4,HIGH);
            digitalWrite(7,HIGH);
      		digitalWrite(6,HIGH);
            delay(50);          
      		break;
           
        case 'r':
            digitalWrite(3,HIGH);
            digitalWrite(5,HIGH);
      		digitalWrite(4,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
           
        case 's':
            digitalWrite(6,HIGH);
            digitalWrite(5,HIGH);
      		digitalWrite(4,HIGH);
            delay(50);          
      		break;
            
        case 't':
           digitalWrite(6,HIGH);
            digitalWrite(5,HIGH);
      		digitalWrite(4,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;

        case 'u':
            digitalWrite(3,HIGH);
            digitalWrite(5,HIGH);
            digitalWrite(8,HIGH);
            delay(50);          
      		break;

        case 'v':
            digitalWrite(3,HIGH);
            digitalWrite(5,HIGH);
      		digitalWrite(4,HIGH);
            digitalWrite(8,HIGH);
            delay(50);          
      		break;

        case 'w':
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(8,HIGH);
            delay(50);          
      		break;

        case 'x':
            digitalWrite(3,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(5,HIGH);
            digitalWrite(8,HIGH);
            delay(50);          
      		break;

        case 'y':
            digitalWrite(3,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(5,HIGH);
            digitalWrite(8,HIGH);
      		digitalWrite(7,HIGH);
            delay(50);          
      		break;
            
        case 'z':
            digitalWrite(5,HIGH);
            digitalWrite(8,HIGH);
      		digitalWrite(7,HIGH);
            digitalWrite(3,HIGH);
            delay(50);          
      		break;
      
      case '1':
            digitalWrite(3,HIGH);
            delay(100);
      		break;
      
        case '2':
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            delay(50);
            break;
      
        case '3':
            digitalWrite(3,HIGH);
            digitalWrite(6,HIGH);
            delay(50);
			break;

        case '4':
            digitalWrite(3,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            delay(100);          
      		break;
      
      case '5':
            digitalWrite(3,HIGH);
            digitalWrite(7,HIGH);
            delay(100);          
      		break;
          
        case '6':
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(6,HIGH);
            delay(50);          
      		break;
          
        case '7':
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
          
        case '8':
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
         
        case '9':
            digitalWrite(6,HIGH);
            digitalWrite(4,HIGH);
            delay(50);          
      		break;
          
        case '0':
            digitalWrite(6,HIGH);
            digitalWrite(4,HIGH);
            digitalWrite(7,HIGH);
            delay(50);          
      		break;
            
        case ' ':
            digitalWrite(3,HIGH);
            digitalWrite(4,HIGH);
      		digitalWrite(5,HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
      		digitalWrite(8,HIGH);
            delay(50);          
      		break;
    }
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      delay(500);
     }
          }
          }