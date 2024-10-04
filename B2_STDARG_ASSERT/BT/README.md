# ĐỀ BÀI: HỆ THỐNG ĐIỀU KHIỂN THIẾT BỊ IOT

> Mô tả:

Bạn được yêu cầu viết một chương trình mô phỏng hệ thống điều khiển các thiết bị IoT trong một ngôi nhà thông minh. Hệ thống này phải có khả năng xử lý các lệnh đến từ người dùng để điều khiển các thiết bị như đèn, điều hòa, khóa cửa vân tay, và trình phát nhạc.

> Yêu cầu:

Xử lý lệnh điều khiển:

- Đèn: Bật/Tắt.
- Điều hòa: Bật/Tắt, Thay đổi nhiệt độ, Đổi chế độ làm mát/quạt gió.
- Khóa cửa vân tay: Mở/Khóa.
- Trình phát nhạc: Bật/Tắt, Tăng/Giảm âm lượng, Đổi bài hát.

Input: Chương trình nhận input dưới dạng các lệnh từ người dùng. Mỗi lệnh bao gồm loại thiết bị và hành động cần thực hiện, cùng với các tham số cần thiết.

Output: Chương trình sẽ in ra thông báo chi tiết về hành động được thực hiện cho mỗi lệnh

> Ví dụ:

- Input: controlDevice(LIGHT, ON);
- Output: Light turned ON
- Input: controlDevice(AIR_CONDITIONER, SET_TEMPERATURE, 24);
- Output: Air Conditioner temperature set to 24 degrees

> Nhiệm vụ:

- Viết hàm controlDevice để xử lý các lệnh nhập vào.
- Xác định và xử lý các trường hợp khác nhau dựa trên loại thiết bị và loại lệnh.
- In ra thông báo tương ứng với mỗi hành động được thực hiện.

> Gợi ý:

- Sử dụng switch case để xử lý các loại thiết bị và lệnh khác nhau.
- Sử dụng stdarg.h để xử lý số lượng và loại tham số đầu vào không xác định.
- Kiểu dữ liệu các bạn có thể sử dụng

```C
typedef enum {
    LIGHT,
    AIR_CONDITIONER,
    FINGERPRINT_LOCK,
    MUSIC_PLAYER
} DeviceType;

typedef enum {
    ON,
    OFF,
    SET_TEMPERATURE,
    SET_MODE,
    UNLOCK,
    LOCK,
    INCREASE_VOLUME,
    DECREASE_VOLUME,
    CHANGE_TRACK
} CommandType;
```
