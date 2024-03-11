#include <opencv2/opencv.hpp>

int main() {
    cv::VideoCapture cap(0);

    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open camera." << std::endl;
        return -1;
    }

    cv::namedWindow("Face Detection", cv::WINDOW_NORMAL);

    cv::CascadeClassifier faceCascade;
    if (!faceCascade.load("haarcascades/haarcascade_frontalface_default.xml")) {
        std::cerr << "Error: Could not load face cascade." << std::endl;
        return -1;
    }

    while (true) {
        cv::Mat frame;
        cap >> frame;

        if (frame.empty()) {
            std::cerr << "Error: Empty frame." << std::endl;
            break;
        }

        cv::Mat gray;
        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);

        std::vector<cv::Rect> faces;
        faceCascade.detectMultiScale(gray, faces, 1.1, 4);

        for (const auto& face : faces) {
            cv::rectangle(frame, face, cv::Scalar(255, 0, 0), 2);

            std::cout << "Face Detected" << std::endl;
            break;
        }

        cv::imshow("Face Detection", frame);

        if (cv::waitKey(1) == 27) {
            break;
        }
    }

    cap.release();
    cv::destroyAllWindows();

    return 0;
}
