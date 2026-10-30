# ks_MeshCore_PlatformIO_v17

## 30/10/2026:

### OK:
- Build và upload firmware mặc định cho MKE ESP32-S3-N4 Devkit
  - Lora:
    - Chân RESET Lora có thể NC
![Wiring](Wiring001.png)
  - GPS-GP02
    - Chân TXgps -> 48
  - KXN Add `-D PIN_VBAT_READ=1`VR mô phỏng VBat -> 1 (phần cứng là cầu phân áp 2x100K nối vào chân 1)
    - Đã hiện được mức pin lên Oled
    - Đã hiện được mức pin lên App MeshCore
    - `Sau khi bật PIN_VBAT_READ kết hợp với AUTO_SHUTDOWN_MILLIVOLTS thì hệ thống sẽ shutdown khi Vbat yếu.`


- Kết quả đạt được:
  - Dùng App Meshcore kết nối Bluetooth 
  - Add Contact dựa vào Public key ở cả 2 bên node
    <details>
    <summary>image</summary>

    ![App_Meshcore_001_BLEConnect](App_Meshcore_001_BLEConnect.png)

    ![App_Meshcore_002_AddContact](App_Meshcore_002_AddContact.png)

    </details>