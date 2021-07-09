//
// Created by isaca on 7/9/2021.
//

#ifndef ADAPTER_GIF_H
#define ADAPTER_GIF_H

#include <string>

class GIF {
protected:
    std::string filename = "";

    int height = 0,
        width = 0,
        numOfFrames = 0;

    bool transparent = false;

public:
    GIF(int _height, int _width, bool _isTrans, int _numOfFrames, std::string _filename):
            height(_height),
            width(_width),
            transparent(_isTrans),
            numOfFrames(_numOfFrames),
            filename(_filename) {}
    GIF(){};

    // Getters
    int getHeight() { return height; }
    int getWidth() { return width; }
    int getNumOfFrames() { return numOfFrames; }
    bool isTransparent() { return transparent; }
    std::string getFilename() { return filename; }

    // Setters
    void setHeight(int _h) { height = _h; }
    void setWidth(int _w) { width = _w; }
    void setNumOfFrames(int _n) { numOfFrames = _n; }
    void setTransparent(bool _t) { transparent = _t; }
    void setFilename(std::string _f) { filename = _f; }
};


#endif //ADAPTER_GIF_H
