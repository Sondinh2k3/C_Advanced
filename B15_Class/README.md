# LESSON 15: CLASS

### Declaring Object:

- Trong C++, từ khóa “class” được sử dụng để định nghĩa một lớp, là một cấu trúc dữ liệu tự định nghĩa có thể chứa dữ liệu và các hàm thành viên liên quan.

```C++
class ClassName {
private:
    // Các thành phần riêng tư (private) chỉ có thể truy cập bên trong lớp
    // Dữ liệu thành viên, hàm thành viên, ...
protected:
    // Các thành phần bảo vệ (protected) tương tự như private, nhưng có thể truy cập từ lớp kế thừa
public:
    // Các thành phần công khai (public) được truy cập từ bên ngoài lớp
    // Dữ liệu thành viên, hàm thành viên, ...
    // Hàm thành viên và các phương thức khác có thể được định nghĩa tại đây
    // ...
};

```

### Class khác biệt gì so với Struct:

- Trong Struct, thì nó chỉ đơn thuần chứa những thông tin, mà không chứa các cái hành động của một đối tượng.
- Do Struct không thể mô tả được hành động của một đối tượng, mà chỉ lưu trữ thông tin của đối tượng thôi => Lúc này chúng ta sẽ dùng đến Class.
- Do C++ là một ngôn ngữ lập trình hướng đối tượng, nên nó sẽ có những đặc trưng thể hiện tính hướng đối tượng.
- Class là một mẫu, một khuôn dùng để định nghĩa một Object => Object sẽ được sinh ra từ Class.
- Các thông tin của một đối tượng trong Class thì sẽ được gọi là thuộc tính (Property).
- Các hành động tương ứng với đối tượng thì sẽ được gọi là các Method (Phương thức – Hàm).

**_Example: _**

```C++
#include <iostream>
using namespace std;

class HinhChuNhat {
	public:
    double chieuDai;
    double chieuRong;
};

int main()
{
    HinhChuNhat hinh1;
    hinh1.chieuDai = 10.0;
    hinh1.chieuRong = 5.0;
    cout << "Chieu dai: " << hinh1.chieuDai<< endl;
    return 0;
}

// HinhChuNhat được gọi là một Class. Và hinh1 được gọi là một đối tượng (Object)
// Các thông số bên trong Class được gọi là Property (Thuộc tính) (đối với các biến)

```

**_Example 2:_**

```C++
#include <iostream>
using namespace std;

class HinhChuNhat {
	public:
    double chieuDai;
    double chieuRong;

    // Hàm tính diện tích ==> Method
    double tinhDienTich() {
        return chieuDai * chieuRong;
    }
    void display();
};

void HinhChuNhat::display() //Cách khai báo hàm bên ngoài Class
{
   std::cout << " Hello " << '\n';
}
int main()
{
    HinhChuNhat hinh1;
    hinh1.chieuDai = 10.0;
    hinh1.chieuRong = 5.0;

    hinh1.display();

    std::cout << "Dien tich: " << hinh1.tinhDienTich() << '\n';

    return 0;
}

```

### Constructor:

- Constructor trong C++ là một method sẽ được tự động gọi khi khởi tạo object. Constructor sẽ có tên trùng với tên của class. Và không có kiểu trả về.

```C++
class HinhChuNhat {
	public:
    double chieuDai;
    double chieuRong;

	//Constructor (Hàm khởi tạo)
    HinhChuNhat(){
        chieuDai = 10;
        chieuRong = 9;
    }

    // Hàm tính diện tích
    double tinhDienTich() {
        return chieuDai * chieuRong;
    }
   
};
int main()
{
    HinhChuNhat hinh1;
		  //sau khi khởi tạo một Object thì constructor sẽ được tự động gọi
		      std::cout << "Chieu dai: " << hinh1.chieuDai << '\n';

    return 0;
}

```

- Cách khai báo và khởi tạo Constructor bên ngoài class:

```C++
class HinhChuNhat {
	public:
    double chieuDai;
    double chieuRong;

    HinhChuNhat(int dai = 5, int rong = 3);
    // Hàm tính diện tích
    double tinhDienTich() {
        return chieuDai * chieuRong;
    }
};

//Constructor của Class HinhChuNhat
HinhChuNhat::HinhChuNhat(int dai, int rong)
{
   chieuDai = dai;
   chieuRong = rong;
}

```

### Destructor:

- Destructor trong C++ là một method sẽ được tự động gọi khi object được giải phóng. Destructor sẽ có tên trùng với tên của class và thêm ký tự ~ ở phía trước tên. Destructor cũng không có kiểu trả về.

```C++
class HinhChuNhat {
	public:
    double chieuDai;
    double chieuRong;

	// Constructor
    HinhChuNhat(){
        chieuDai = 10;
        chieuRong = 9;
    }

	// Destructor
    ~HinhChuNhat(){
        std::cout << "Destructor " << '\n';
    }

    // Hàm tính diện tích
    double tinhDienTich() {
        return chieuDai * chieuRong;
    }
   
};

```

### Static Keyword:

- Khi một property trong class được khai báo với từ khóa static, thì tất cả các object của class sẽ dùng chung địa chỉ của property này.

```C++

class HinhChuNhat {

public:
    double chieuDai;
    double chieuRong;
    
    static int var;
};

// Trước khi dùng được biến Static này, thì chúng ta cần phải khởi tạo nó bên ngoài trước
int HinhChuNhat::var;

int main()
{
    HinhChuNhat hinh1;
    HinhChuNhat hinh2;
    HinhChuNhat hinh3;

    cout << "address of chieu dai: " << &hinh1.chieuDai << '\n'; 
    cout << "address of chieu dai: " << &hinh2.chieuDai << '\n'; 
    cout << "address of chieu dai: " << &hinh3.chieuDai << '\n'; 

    cout << "address of var: " << &hinh1.var << '\n'; 
    cout << "address of var: " << &hinh2.var << '\n'; 
    cout << "address of var: " << &hinh3.var << '\n'; 

    return 0;
}

```

- Khi một method trong class được khai báo với từ khóa static:

> - Method này độc lập với bất kỳ đối tượng nào của lớp.
> - Method này có thể được gọi ngay cả khi không có đối tượng nào của class tồn tại.
> - Method này có thể được truy cập bằng cách sử dụng tên class thông qua toán tử :: .
> - Method này có thể truy cập các static property và các static method bên trong hoặc bên ngoài class.
> - Method có phạm vi bên trong class và không thể truy cập con trỏ đối tượng hiện tại.

```C++
#include <iostream>

using namespace std;

class HinhChuNhat
{
public:
    double chieuDai;
    double chieuRong;
    static int count; // Biến static, cần phải khai báo bên ngoài class trước khi dùng

    HinhChuNhat(int dai = 5, int rong = 4); // Constructor
    ~HinhChuNhat();		// Destructor

    double tinhDienTich();
    static void display(); // Method static => Có thể được gọi mà không cần tạo bất kỳ một object nào
};

HinhChuNhat::HinhChuNhat(int dai, int rong)
{
    chieuDai = dai;
    chieuRong = rong;
    count++;
}
HinhChuNhat::~HinhChuNhat()
{
    cout << "Destructor" << endl;
}

void HinhChuNhat::display()
{
    cout << "Number of object: " << count << endl;
}

int HinhChuNhat::count = 0;

int main()
{ 
    HinhChuNhat::display();

    return 0;
}

```
