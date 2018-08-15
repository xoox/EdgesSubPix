#ifndef __EDGES_SUBPIX_H__
#define __EDGES_SUBPIX_H__
#include <opencv2/opencv.hpp>

struct EdgePoints {
    std::vector<cv::Point2f> points;
    std::vector<float> direction;
    std::vector<float> response;
};
// only 8-bit
CV_EXPORTS void EdgesSubPix(
    cv::Mat& gray, double alpha, int low, int high, EdgePoints& edge_points);

CV_EXPORTS void DrawEdges(cv::Mat& rgb, cv::Mat& gray,
    const EdgePoints& edge_points, const cv::Scalar& color,
    const int scaleFactor = 2);

#endif // __EDGES_SUBPIX_H__
