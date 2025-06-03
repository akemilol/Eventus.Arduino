# 🌎 Eventus IoT — Monitoramento Inteligente de Eventos Extremos

O **Eventus** é a solução para o Global Solution FIAP 2025: um sistema completo de monitoramento, detecção e alerta para eventos extremos como chuvas intensas, ondas de calor e tremores. 
Eventus antecipa riscos, protege comunidades e permite respostas rápidas em situações de emergência.

---

## ❓ Qual problema real o projeto resolve?

Eventos extremos e desastres naturais são cada vez mais frequentes e imprevisíveis.  
**A falta de monitoramento em tempo real e de alertas eficientes** coloca comunidades em risco, dificulta respostas rápidas e aumenta os prejuízos.

---

## 🎬 Pitch do Projeto

👉 [Assista ao pitch](https://youtu.be/18KNaszckM8)

---

## 🛠️ Tecnologias Utilizadas

- **Arduino UNO**
- **Sensor de Chuva**
- **Sensor de Umidade do Solo**
- **Sensor DHT22**
- **LCD 16x2 I2C**
- **Node-RED Dashboard**
- **Protoboard, jumpers, resistores**

---

## ⚙️ Funcionamento do Projeto

1. **Sensores capturam dados** ambientais (chuva, solo, temperatura, umidade).
2. **Arduino processa e envia os dados** em formato JSON pela porta Serial.
3. **Node-RED lê os dados, exibe em dashboard** web (gauges, gráficos, alertas).
4. **LCD mostra status localmente**.

---

## 📸 Imagens do protótipo

![Protótipo Eventus](https://media.discordapp.net/attachments/1277037400996053085/1379275912436125726/image.png?ex=683fa64b&is=683e54cb&hm=dc559701ab7bbf69d9d83f9e7ec57805f0fb74372b6b0612bd0c39846ce86ed0&=&format=webp&quality=lossless&width=1032&height=717)
![Protótipo Eventus](https://media.discordapp.net/attachments/1277037400996053085/1379276045680771093/AP1GczN65aD9QblIvWLKW3MBbBbiRSoWE36R9Yr0ueeHDheFN8IBTqOIldHW6gw1920-h887-s-no-gm.png?ex=683fa66b&is=683e54eb&hm=40da4b51fd01f0eb49cbbf76dac2de799f9b9cd1bcec5ced687ea8164d487696&=&format=webp&quality=lossless&width=1032&height=477)
![Dashboard Node-RED](https://media.discordapp.net/attachments/1277037400996053085/1379276393925316858/image.png?ex=683fa6be&is=683e553e&hm=2d32f0330e0982b76f4997d8639ca79693cc3ab5783bb5b2b83b1a9f8fce143f&=&format=webp&quality=lossless&width=1032&height=605)

---

## 📄 Como rodar

1. Monte o circuito conforme o diagrama e as fotos.
2. Suba o código `eventus.ino` no Arduino UNO.
3. Feche o Serial Monitor da Arduino IDE.
4. Execute o Node-RED no computador:
5. Importe o fluxo `eventus-nodered.json` no Node-RED.
6. Ajuste a porta serial, se necessário.
7. Acesse o dashboard: http://localhost:1880/ui

---

##  👩‍💻 Integrantes

- Mirela Pinheiro Silva Rodrigues — RM: 558191
- Valéria Conceição dos Santos — RM: 557177

