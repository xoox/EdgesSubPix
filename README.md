Sub-Pixel Edge Detection using OpenCV 
===

# Description

- Edge detection operator return subpixel level edge position.
- Using Canny filter as differential operator.
- Implementing according to [Carsten Steger's method][1].
- Interpolation of second partial derivatives with [Facet Model method][2].

# API

```cpp
struct EdgePoints
{
    std::vector<cv::Point2f> points;  // edge location
    std::vector<float> direction;     // direction of the gradient in edge point, 
                                      // starting from y axis, counter-clockwise
    std::vector<float> response;      // amptitude of the gradient in edge point
};
// gray             - only support 8-bit grayscale
CV_EXPORTS void EdgesSubPix(cv::Mat &gray, double alpha, int low, int high,
                            int blocksize, EdgePoints &edge_points);
```

# License

3-clause BSD License

[1]:http://iuks.informatik.tu-muenchen.de/_media/members/steger/publications/1996/fgbv-96-03-steger.pdf
[2]:http://haralick.org/journals/topographic_primal_sketch.pdf
