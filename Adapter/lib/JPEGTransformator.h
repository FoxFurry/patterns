//
// Created by isaca on 7/9/2021.
//

#ifndef ADAPTER_JPEGTRANSFORMATOR_H
#define ADAPTER_JPEGTRANSFORMATOR_H

#include "JPEG.h"
#include <iostream>

class JPEGTransformator: public JPEG{
private:
    JPEG targetJPEG;

public:
    JPEGTransformator(const JPEG& image): targetJPEG(image) {}
    JPEGTransformator(){}

    void transform(){
        std::cout << "Transforming JPEG image <" << targetJPEG.getFilename() << ">\n";
    }

    void setTarget(const JPEG& newTarget) { targetJPEG = newTarget; }
};


#endif //ADAPTER_JPEGTRANSFORMATOR_H
