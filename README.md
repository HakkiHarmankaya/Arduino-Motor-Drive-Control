# ⚙️ Arduino #20: Motor Sürücü ile DC Motor Kontrolü

Bu projede **L298N** veya **L293D** gibi bir motor sürücü kullanılarak **DC motor** ileri yönde çalıştırılmıştır. Arduino üzerinden gelen dijital sinyallerle motorun yönü ve hızı kolayca kontrol edilebilir.

🔗 [Web Siteme Bakmak İçin Tıkla](https://www.hakkiharmankaya.com/)  


---

## 📦 Gerekli Malzemeler

- 1 adet **Arduino Uno / Nano**
- 1 adet **DC motor**
- 1 adet **Motor sürücü (L298N / L293D)**
- **Harici güç kaynağı** (örneğin 9V pil veya adaptör)
- **Breadboard**
- **Jumper kablolar**

---

## 🧭 Devre Bağlantıları

### 🔌 DC Motor Bağlantısı

| Sürücü Pinleri | Bağlantı          |
|----------------|-------------------|
| OUT1           | DC motor ucu 1    |
| OUT2           | DC motor ucu 2    |

### 🔌 Güç Bağlantıları

| Sürücü Pinleri | Bağlantı          |
|----------------|-------------------|
| VCC (Vs/Vmotor)| + Güç Kaynağı     |
| GND            | GND (Arduino + Güç) |

> ⚠️ GND'ler ortak olmalıdır.

### ⚙️ Arduino - Sürücü Kontrol Pinleri

| Motor Sürücü Pini | Arduino Pin     |
|-------------------|-----------------|
| IN1               | D9              |
| IN2               | D10             |

---

## 🔌 Arduino Kodları

Aşağıdaki kod, DC motoru ileri yönde döndürür. `HIGH-LOW` sinyali kullanılarak motor çalıştırılır.

```cpp
int motorPini3 = 9;
int motorPini4 = 10;

void setup() {
  pinMode(motorPini3, OUTPUT);
  pinMode(motorPini4, OUTPUT);
}

void loop() {
  // İleri hareket
  digitalWrite(motorPini3, HIGH);
  digitalWrite(motorPini4, LOW);
}
