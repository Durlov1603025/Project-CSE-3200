#include <SPI.h>
#include <MFRC522.h>   
 
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.

bool c = 0;
bool r = 0;
 
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  Serial.println("Approximate your student id card to the reader...");
  Serial.println();
  
}
void loop() 
{

  

  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "D0 ED 82 32" ) //change here the UID of the card/cards that you want to give access
  {
    Serial.println("Name : Mahbubur Rahman Durlov");
    Serial.println("ID : 1603025");
    Serial.println();
    Serial.println("");
    Serial.println("Approximate the laptop key ring to the reader...");
  Serial.println();
  c = 1;
  
    delay(3000);
  }
  else if (content.substring(1) == "29 02 5C A3" && c==1){
    Serial.println("Laptop 1 is assigned to Mahbubur Rahman Durlov");
    c=0;
    r=1;
    content.substring(1) == "";
     delay(3000);
  }
else if (content.substring(1) == "29 02 5C A3" && r==1){
    Serial.println("Laptop 1 is returned by Mahbubur Rahman Durlov \n Thank you");
    c=0;
    r=0;
     delay(3000);
  }

} 
