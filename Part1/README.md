<img width="1344" height="169" alt="image" src="https://github.com/user-attachments/assets/12ac20d9-29ec-49ec-9f5f-9cb0c831dff2" />

Chương trình luôn in ra "January" vì bên trong if assign giá trị 1 cho month thay vì dùng "==",
kết quả tương tự như if (1)

<img width="1817" height="144" alt="image" src="https://github.com/user-attachments/assets/4fc1924f-3c8f-4c3a-b206-5a0ed0e33779" />

Chương trình lặp vô tận in ra kết quả từ 0 - 255 sau đó lại quay trở về 0 bởi c có giá trị là 8 bit unsigned -> khi đạt max c là 255 (0xFF) tăng thêm 1, c sẽ trở lại thành 0 -> c luôn < 999

<img width="1817" height="144" alt="image" src="https://github.com/user-attachments/assets/57f2118a-ec93-484c-a644-98a4c87c0205" />

Hàm divide(a,b) lấy trả kết quả thương b/a. Chắc có vấn đề ở việc không kiểm tra a!=0

<img width="1817" height="174" alt="image" src="https://github.com/user-attachments/assets/0695539c-66f2-41a2-9d87-af8b3a50aa3c" />

Chương trình in ra dãy số từ 9 - 0

<img width="1814" height="141" alt="image" src="https://github.com/user-attachments/assets/765c5beb-7b22-490a-89fc-b43eb95bfb50" />

Chương trình lặp vô tận vì biến unsigned int luôn thỏa điều kiện >= 0  --> khi x = 0, giảm 1 thì x sẽ trở thành (unsigned)0xFFFFFFFF 

<img width="1992" height="112" alt="image" src="https://github.com/user-attachments/assets/3c9ebee4-9108-4807-a878-867815a67bad" />

Vấn đề là giới hạn của kết quả trả về nếu tổng của a và b > 255 

# Memory Management

<img width="1930" height="288" alt="image" src="https://github.com/user-attachments/assets/0a3d0c46-387d-4bfd-8e6a-ebdd40ac43e1" />

pointer p chưa trỏ vào địa chỉ nào, sử dụng memcpy với p sẽ dẫn đến segfault </br></br>

<img width="2067" height="440" alt="image" src="https://github.com/user-attachments/assets/1db7f58e-8a7d-4baf-801c-7f15ad33f27e" />

uninitalized data .bss: a, b </br>
initialized data: h
stack: d, c_param, f, g, i</br>
heap: *i</br>
text: c</br></br>

<img width="1901" height="124" alt="image" src="https://github.com/user-attachments/assets/71e409d1-aad2-4a32-9206-7f78b8faeeca" />
a được cấp phát trong và lưu trữ trong stack, b trong stack trỏ vào "bar" trong vùng nhớ readonly</br></br>

<img width="1986" height="292" alt="image" src="https://github.com/user-attachments/assets/89d74f4a-fbc5-4f4f-887c-d1f7c171e31c" />
Có vấn đề. Hàm liên tục gọi malloc cấp phát cho p mà không free -> sau khi chạy for thì cấp phát đến 8000 byte -> out of memory</br></br>
<img width="2246" height="994" alt="image" src="https://github.com/user-attachments/assets/1a4f8006-a4c2-4e0c-b880-caa2a2cdd385" />
<img width="2241" height="994" alt="image" src="https://github.com/user-attachments/assets/5632ab59-7706-47a6-b1ba-39ddf34ea4d9" />
<img width="2197" height="241" alt="image" src="https://github.com/user-attachments/assets/358fd4b6-41c1-4b83-8b2f-9b485f444597" />

# Storage Class

<img width="2258" height="539" alt="image" src="https://github.com/user-attachments/assets/7c97b5db-58bb-45e4-9e81-7071eceef9a7" />

# Data Types

<img width="2258" height="981" alt="image" src="https://github.com/user-attachments/assets/0f8f99c2-5743-4c95-b5ee-710b35b89b43" />
<img width="2258" height="860" alt="image" src="https://github.com/user-attachments/assets/81dd8289-118f-4f19-b74b-478ebf3870f1" />
<img width="2258" height="859" alt="image" src="https://github.com/user-attachments/assets/47a6384c-201a-4d4a-acda-8feba146e453" />
<img width="2258" height="710" alt="image" src="https://github.com/user-attachments/assets/733ffd42-0827-406b-9843-23d8602f871f" />
<img width="2258" height="770" alt="image" src="https://github.com/user-attachments/assets/2baf71df-d15d-410d-b2cc-8ebd6d125baf" />




