# Arduino 實戰與模擬練習庫

本專案記錄 Arduino 韌體實戰練習、Wokwi 模擬電路圖與感測器應用範例。

## 目錄結構規劃

專案依據硬體功能與通訊協議分層收納，每個練習單元皆為獨立目錄：

* `01_basics_gpio/`：基礎數位輸入輸出、按鍵消除彈跳、LED 控制
* `02_sensors_analog/`：類比訊號讀取、ADC 電壓換算、常見感測器量測
* `03_actuators_pwm/`：PWM 輸出、伺服馬達、直流馬達驅動模組
* `04_protocols_bus/`：UART 序列通訊、I2C 匯流排、SPI 介面實作
* `05_timers_interrupts/`：硬體外部中斷、Timer 定時器、非阻塞輪詢實作

## 單一練習包含內容

每個練習目錄標準配備以下檔案：

1. `sketch.ino`：韌體主程式原始碼
2. `diagram.json`：Wokwi 虛擬電路圖設定檔，可直接於 Wokwi 開啟模擬
3. `README.md`：實驗目標、腳位對照表與 Wokwi 線上專案連結

## 學習與程式碼審查工作流

1. 於本機或 Wokwi 完成練習並將檔案放入對應資料夾。
2. 透過 Agent 進行程式碼審查、非阻塞架構優化或排查電路邏輯問題。
3. 提交 Git 紀錄學習軌跡。
