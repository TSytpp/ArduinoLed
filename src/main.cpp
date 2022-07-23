#include <Arduino.h>


//DONANIM PLUS ELEKTRONİK
//TASARIM TOLGA SOYTEPE
//İNSTAGRAM Tolgasyp
//TWİTTER TSytpp
//YOUTUBE KANALI https://www.youtube.com/channel/UCinFB4XVJ3Yb6QDnALUlccw
int led = 3; //ledimizi 3.pine bağladık..

void setup() {

pinMode(led,OUTPUT); // led pinimizi çıkış olarak tanımladık..

}
void loop(){
digitalWrite(led,HIGH); // led pinimize güç verdik
delay(1000); //ardından bir saniye bekledik..
digitalWrite(led,LOW); // led pinimizin gücünü kestik..
delay(1000); // ve ardından tekrar bir saniye bekledik ve başa döndük böylece ledimiz 1 er saniyelik aralıklarla yanıp sönmüş oldu.. :)
}
