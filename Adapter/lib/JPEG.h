//
// Created by isaca on 7/9/2021.
//

#ifndef ADAPTER_JPEG_H
#define ADAPTER_JPEG_H

#include <string>

class JPEG {
protected:
    std::string filename;

    int height = 0,
        width = 0;

public:
    JPEG(int _height, int _width, std::string _filename):
                                                    height(_height),
                                                    width(_width),
                                                    filename(_filename) {}
    JPEG(JPEG const &source):
                        height(source.height),
                        width(source.width),
                        filename(source.filename) {}
    JPEG(){}

    // Getters
    int getHeight() { return height; }
    int getWidth() { return width; }
    std::string getFilename() { return filename; }

    // Setters
    void setHeight(int _h) { height = _h; }
    void setWidth(int _w) { width = _w; }
    void setFilename(std::string _f) { filename = _f; }
};


#endif //ADAPTER_JPEG_H
