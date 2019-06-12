void setup(){
 Serial.begin(9600);
pinMode(9, OUTPUT); 
pinMode(10, OUTPUT); 
pinMode(11, OUTPUT); 
pinMode(12, OUTPUT); 
  
}
String comando;
void loop(){
  if(Serial.available()){
    comando = Serial.readString();
 
  if(comando.equals("0000")){
    digitalWrite(9, LOW); digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);
  }else if(comando.equals("0001")){
    digitalWrite(9, LOW); digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, HIGH);
  } if(comando.equals("0011")){
    digitalWrite(9, LOW); digitalWrite(10, LOW); digitalWrite(11, HIGH); digitalWrite(12, HIGH);
  }else if(comando.equals("0111")){
    digitalWrite(9, LOW); digitalWrite(10, HIGH); digitalWrite(11, HIGH); digitalWrite(12, HIGH);
  }else if(comando.equals("1111")){
    digitalWrite(9, HIGH); digitalWrite(10, HIGH); digitalWrite(11, HIGH); digitalWrite(12, HIGH);
  }else if(comando.equals("1000")){
    digitalWrite(9, HIGH); digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, LOW);
  }else if(comando.equals("1100")){
    digitalWrite(9, HIGH); digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, LOW);
  }else if(comando.equals("1110")){
     digitalWrite(9, HIGH); digitalWrite(10, HIGH); digitalWrite(11, HIGH); digitalWrite(12, LOW);
  }else if(comando.equals("1010")){
     digitalWrite(9, HIGH); digitalWrite(10, LOW); digitalWrite(11, HIGH); digitalWrite(12, LOW);
  }else if(comando.equals("0101")){
     digitalWrite(9, LOW); digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH);
  }else if(comando.equals("0010")){
     digitalWrite(9, LOW); digitalWrite(10, LOW); digitalWrite(11, HIGH); digitalWrite(12, LOW);
  }else if(comando.equals("0110")){
     digitalWrite(9, LOW); digitalWrite(10, HIGH); digitalWrite(11, HIGH); digitalWrite(12, LOW);
  }else if(comando.equals("1001")){
     digitalWrite(9, HIGH); digitalWrite(10, LOW); digitalWrite(11, LOW); digitalWrite(12, HIGH);
  }else if(comando.equals("0100")){
     digitalWrite(9, LOW); digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, LOW);
  }else if(comando.equals("1011")){
     digitalWrite(9, HIGH); digitalWrite(10, LOW); digitalWrite(11, HIGH); digitalWrite(12, HIGH);
  }else if(comando.equals("1101")){
     digitalWrite(9, HIGH); digitalWrite(10, HIGH); digitalWrite(11, LOW); digitalWrite(12, HIGH);
  }
  
   }
    
}
