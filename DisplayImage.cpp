#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    std::string imagePath = "您的图片文件路径"; // 设置图片文件路径

    cv::Mat image = cv::imread(imagePath); // 读取图片

    if (image.empty()) { // 检查图片是否成功加载
        std::cout << "无法打开图像文件" << std::endl;
        return -1;
    }

    cv::namedWindow("Image", cv::WINDOW_NORMAL); // 创建一个窗口用于显示图像
    cv::imshow("Image", image); // 在窗口中显示图像

    cv::waitKey(0); // 等待用户按下任意键

    return 0;
}
