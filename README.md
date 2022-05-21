# DeathPlane
I. Hướng dẫn cài đặt:
1. Chương trình sử dụng file project của Code::Blocks.
2. Hày tải xuống đầy đủ Code::Blocks và các thư viện SDL2, SDL_image, SDL_ttf, SDL_mixer bản tương thích với thiết bị được sử dụng.
3. Git clone https://github.com/hainguyen0930/DeathPlane.git bằng cmd hoặc terminal
4. Sửa lại đường dẫn vào file SDL:
Nếu bạn chưa có sẵn các thư viện liên kết (các file .dll) trong System, hãy lấy chúng từ SDL2/bin và thả vào thư mục System32 (với máy 32 bit)/SysWOW64 (với máy 64 bit).
Mở AgainBigGame.cbp bằng Code::Blocks, trong Project/Build options/Search directories/Compiler xóa đường dẫn cũ và thay bằng đường dẫn tới thư mục include/SDL2. trong Linkers xóa đường dẫn cũ và thay bằng đường dẫn tới thư mục lib ứng với các thư viện trên.
Trong phần Other linker options trong Project/Build options/Linker settings ghi đầy đủ: -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf
5. Chọn Build/Build and run trên thanh điều khiển (hoặc ấn F9) để build và chạy chương trình.

II. Mô tả chung:
1. Màn hình Menu:
- Có 3 nút ấn là Play / Tutorial / Exit
- Có 2 cách tắt chương trình: sử dụng nút tắt ở cửa sổ hoặc nút Exit ở Menu.
2. Màn hình Tutorial:
- Có hướng dẫn chơi, bật/tắt nhạc nền.
- Chơi thì ấn nút "Space"
3. Màn hình chơi:
- Các đối tượng:
+ Máy bay (màu xanh) do người chơi điều khiển.
+ Các máy bay địch xuất hiện và xả đạn tấn công.
+ Số điểm đang có ở góc trên phía trái màn hình.
+ Tốc độ sẽ tằng dần theo sô điểm bạn đạt được.
4. Màn hình kết thúc game:
- Có thể thực hiện 2 thao tác:
- Ấn nút PlayAgain để chơi lại ván mới.
- Ấn nút Exit để thoát game.

III. Mô tả:
link demo: https://youtube.com/shorts/bsLEHUYASM8?feature=share
- Game có hình ảnh sinh động, âm thanh đặc sắc, text chữ.

IV. Các kỹ thuật lập trình được sử dụng trong chương trình:
- Mảng
- Con trỏ
- Vecto
- Cấu trúc, lớp,
- Đồ họa.
- ...

V. Kết luận, hướng phát triển và các điều tâm đắc rút ra được sau khi hoàn thiện chương trình:
- Đã rút ra được một số kiến thức về lập trình hướng đối tượng, cách sử dụng thư viện đồ họa để tạo nên 1 game cơ bản
- Hướng phát triển:
+ Tạo thêm menu.
+ Tao thêm sinh mạng cho máy bay
+ Đồ họa cần đẹp hơn
+ Tạo nhiều map, nhiều màn chơi.
+ Thêm chế độ multiplayer
+ ...

