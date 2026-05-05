#include <string>

namespace log_line {

    // 任務 1：利用 ":" 定位來切出訊息
    std::string message(std::string line) {
        // 找到 ":" 的位置
        size_t colon_pos = line.find(":");
        // 從 ":" 之後兩個字元開始（跳過冒號與空格）擷取到最後
        return line.substr(colon_pos + 2);
    }

    // 任務 2：利用 "[]" 定位來切出等級
    std::string log_level(std::string line) {
        // 找到 "[" 和 "]" 的位置
        size_t start = line.find("[");
        size_t end = line.find("]");
        // 擷取括號中間的內容
        return line.substr(start + 1, end - start - 1);
    }

    // 任務 3：重新組合
    std::string reformat(std::string line) {
        // 直接使用上面兩個函式的結果進行拼接
        return message(line) + " (" + log_level(line) + ")";
    }

} // namespace log_line