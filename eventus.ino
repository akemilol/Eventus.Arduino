#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define CHUVA_DIGITAL 2
#define DHTPIN 4
#define DHTTYPE DHT22
#define SOLO_ANALOGICO A0

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    Serial.begin(9600);
    pinMode(CHUVA_DIGITAL, INPUT);
    dht.begin();
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("EVENTUS INICIADO");
    delay(1500);
    lcd.clear();
}

void loop() {
    int valorChuva = digitalRead(CHUVA_DIGITAL);
    float temperatura = dht.readTemperature();
    float umidadeAr = dht.readHumidity();
    int valorSolo = analogRead(SOLO_ANALOGICO);

    Serial.print("{");
    Serial.print("\"chuva\":");
    Serial.print(valorChuva);
    Serial.print(",\"temp\":");
    if (isnan(temperatura)) {
    Serial.print("null");
    } else {
    Serial.print(temperatura, 1);
    }
    Serial.print(",\"umid\":");
    if (isnan(umidadeAr)) {
    Serial.print("null");
    } else {
        Serial.print(umidadeAr, 1);
    }
    Serial.print(",\"solo\":");
    Serial.print(valorSolo);
    Serial.println("}");

    lcd.clear();
    lcd.setCursor(0, 0);
    if (valorChuva == 0) {
        lcd.print("Chuva: SIM");
    } else {
        lcd.print("Chuva: NAO");
    }
    lcd.setCursor(0, 1);
    if (isnan(temperatura) || isnan(umidadeAr)) {
        lcd.print("Temp/Umid: ERRO");
    } else {
        lcd.print((int)temperatura);
        lcd.print("C ");
        lcd.print((int)umidadeAr);
        lcd.print("%");
    }
    delay(1500);

    lcd.clear();
    lcd.setCursor(0, 0);
    if (valorSolo > 800) {
        lcd.print("Solo: SECO ");
    } else if (valorSolo > 400) {
        lcd.print("Solo: UMIDO");
    } else {
        lcd.print("Solo: ENCH.");
    }
    lcd.setCursor(0, 1);
    lcd.print("Valor:");
    lcd.print(valorSolo);

    delay(1500);
}
