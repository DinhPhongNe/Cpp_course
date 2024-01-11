#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

class StudentAdmissionSystem {
private:
    std::vector<std::string> nguyen_vong;
    std::string so_bao_danh;
    std::string ten;
    std::string tinh_thanh;
    std::string truong_du_thi;
    std::string phong_du_thi;
    float toan;
    float van;
    float anh;
    std::string ten_mon_chuyen;
    float diem_mon_chuyen;

    bool generate_captcha() {
        srand(time(0));
        std::string captcha;
        for (int i = 0; i < 7; ++i) {
            char c = '0' + rand() % 62;
            if (c > '9') {
                c += 7;
            }
            if (c > 'Z') {
                c += 6;
            }
            captcha.push_back(c);
        }
        std::cout << "Hãy nhập theo CAPTCHA sau đây: " << captcha << std::endl;
        std::string user_input;
        std::cin >> user_input;
        return user_input == captcha;
    }

    float get_valid_score(const std::string& subject) {
        float score;
        while (true) {
            std::cout << "Nhập điểm môn " << subject << ": ";
            std::cin >> score;
            if (score >= 0 && score <= 10) {
                return score;
            } else {
                std::cout << "Điểm môn " << subject << " không hợp lệ. Vui lòng nhập lại!" << std::endl;
            }
        }
    }

public:
    void run() {
        std::cout << "=== CHƯƠNG TRÌNH TÍNH ĐIỂM CHUẨN ĐẬU VÀO TRƯỜNG CẤP 3 ===" << std::endl;
        if (generate_captcha()) {
            std::string username, password;
            std::cout << " === VUI LÒNG ĐĂNG NHẬP === " << std::endl;
            while (true) {
                std::cout << "Nhập tên tài khoản: ";
                std::cin >> username;
                std::cout << "Nhập mật khẩu tài khoản: ";
                std::cin >> password;
                if (username == "student1" && password == "password1") {
                    std::cout << "Đăng nhập thành công" << std::endl;
                    break;
                } else {
                    std::cout << "Đăng nhập không thành công" << std::endl;
                }
            }

                std::cout << " === Vui lòng nhập thông tin thí sinh === " << std::endl;
                std::cout << "Nhập số báo danh: ";
                std::cin >> so_bao_danh;
                std::cout << "Nhập họ và tên: ";
                std::cin >> ten;
                std::cout << "Nhập tỉnh/ Thành phố: ";
                std::cin >> tinh_thanh;
                std::cout << "Nhập tên trường dự thi: ";
                std::cin >> truong_du_thi;
                std::cout << "Nhập số phòng dự thi: ";
                std::cin >> phong_du_thi;

            std::cout << "=== ĐIỂM MÔN THƯỜNG ===" << std::endl;
            std::cout << " === Vui lòng nhập điểm từng môn === " << std::endl;
            toan = get_valid_score("Toán");
            van = get_valid_score("Văn");
            anh = get_valid_score("Anh");

            std::cout << "=== ĐIỂM MÔN CHUYÊN ===" << std::endl;
            std::cout << "Chọn môn chuyên của bạn:" << std::endl;
            std::cout << "1. Toán" << std::endl;
            std::cout << "2. Văn" << std::endl;
            std::cout << "3. Anh" << std::endl;
            std::cout << "Nhập lựa chọn của bạn (1-3): ";
            int choice;
            std::cin >> choice;
            switch (choice) {
                case 1:
                    ten_mon_chuyen = "Toán";
                    break;
                case 2:
                    ten_mon_chuyen = "Văn";
                    break;
                case 3:
                    ten_mon_chuyen = "Anh";
                    break;
                default:
                    std::cout << "Lựa chọn không hợp lệ. Vui lòng nhập lại (1-3): " << std::endl;
                    break;
            }
            std::cout << "Nhập điểm môn " << ten_mon_chuyen << ": ";
            std::cin >> diem_mon_chuyen;

            std::cout << "=== NGUYỆN VỌNG VÀ ĐIỂM CHUẨN ===" << std::endl;
            for (int i = 0; i < 3; ++i) {
                std::string ten_nv;
                float diem_chuan_nv;
                std::cout << "Nhập tên trường nguyện vọng " << i + 1 << ": ";
                std::cin >> ten_nv;
                std::cout << "Nhập điểm chuẩn nguyện vọng " << i + 1 << ": ";
                std::cin >> diem_chuan_nv;
                nguyen_vong.push_back(ten_nv + " (Điểm chuẩn: " + std::to_string(diem_chuan_nv) + ")");
            }

            float tong_diem = toan + van + anh + (diem_mon_chuyen * 2);
            std::cout << "\n=== THÔNG TIN - KẾT QUẢ THI ===" << std::endl;
            std::cout << "Số báo danh: " << so_bao_danh << std::endl;
            std::cout << "Họ và tên: " << ten << std::endl;
            std::cout << "Tỉnh/ Thành phố: " << tinh_thanh << std::endl;
            std::cout << "Trường dự thi: " << truong_du_thi << std::endl;
            std::cout << "Số phòng dự thi: " << phong_du_thi << std::endl;
            std::cout << "Điểm môn chuyên: " << diem_mon_chuyen << std::endl;
            std::cout << "Điểm tổng: " << tong_diem << std::endl;

            std::cout << "\n=== KẾT QUẢ NGUYỆN VỌNG ===" << std::endl;
            bool passed = false;
            for (const std::string& nv : nguyen_vong) {
                std::cout << nv << std::endl;
                if (tong_diem >= std::stof(nv.substr(nv.find_last_of(" ") + 1))) {
                    std::cout << "Kết quả xét tuyển: Đậu nguyện vọng!" << std::endl;
                    passed = true;
                    break;
                }
            }
            if (!passed) {
                std::cout << "Kết quả xét tuyển: Không đậu vào bất kỳ nguyện vọng nào!" << std::endl;
                std::cout << "Hẹn gặp bạn vào kì thi năm sau, chúc may mắn!" << std::endl;
            }
        }
    }
};

int main() {
    StudentAdmissionSystem admission_system;
    admission_system.run();
    return 0;
}
