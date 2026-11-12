# Arduino 與 ATmega328P 核心修煉實戰庫

本專案記錄 Arduino 與 ATmega328P 韌體實戰練習、Wokwi 模擬電路圖、暫存器等級暫存器開發，以及 Host 端虛擬 CPU 模擬器實作。

## 學習與開發五大主軸

1. **規格書與硬體電路**：晶片 Datasheet 研讀、電氣特性分析、實體電路圖繪製。
2. **Wokwi 線上模擬電路驗證**：搭配虛擬電路圖快速排查訊號與感測器接線。
3. **經典文獻與書籍精讀**：紮實掌握計算機結構、嵌入式韌體與即時系統理論。
4. **WSL 打造 ATmega328P 指令級虛擬模擬器**：在 Linux 環境以純 C 語言實作虛擬暫存器、指令解碼與記憶體模型。
5. **暫存器等級操作實作 Register-Level C Code**：完全捨棄 Arduino 抽象函式庫，直操 DDRB、PORTB、TCCR1A 等實體暫存器。

## 目錄結構規劃

專案依據硬體功能、軟體模擬與通訊協議分層收納：

* `00_emulator_wsl/`：在 WSL Linux 環境以純 C 語言打造的 ATmega328P 指令集模擬器與單元測試
* `01_basics_gpio/`：基礎數位輸入輸出、暫存器位元操作、按鍵消除彈跳
* `02_sensors_analog/`：類比訊號讀取、ADC 暫存器配置、電壓換算
* `03_actuators_pwm/`：Timer 暫存器硬體 PWM 輸出、馬達驅動
* `04_protocols_bus/`：UART、I2C 匯流排、SPI 暫存器控制介面實作
* `05_timers_interrupts/`：Timer 計時中斷、外部中斷、確定性時間觸發輪詢實作

## 單一練習包含內容

每個練習目錄標準配備以下檔案：

1. `main.c` 或 `sketch.ino`：韌體主程式原始碼，優先採用 Register-Level C Code
2. `diagram.json`：Wokwi 虛擬電路圖設定檔，可直接於線上開啟模擬
3. `README.md`：實驗目標、暫存器設定對照表、電路圖說明與驗證成果

## 學習與程式碼審查工作流

1. 於本機 WSL 或 Wokwi 完成練習並將檔案放入對應資料夾。
2. 透過 Agent 進行暫存器位元操作審查、時序排程優化或排查電路邏輯問題。
3. 提交 Git 紀錄學習軌跡。
