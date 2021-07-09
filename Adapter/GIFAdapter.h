//
// Created by isaca on 7/9/2021.
//

#ifndef ADAPTER_GIFADAPTER_H
#define ADAPTER_GIFADAPTER_H

#include "JPEG.h"
#include "GIF.h"

#define STARTFRAME 1

class GIFAdapter: public JPEG {
private:
    GIF targetGIF;
    int currentFrame = STARTFRAME;

    void updateName(){
        filename = targetGIF.getFilename() + "_" + std::to_string(currentFrame);
    }

public:
    GIFAdapter(GIF _gif): targetGIF(_gif) { updateName(); }

    void resetFrame() { currentFrame = STARTFRAME;}
    bool nextFrame() {
        if(currentFrame < targetGIF.getNumOfFrames()){
            currentFrame++;
            updateName();
            return 1;
        }
        else{
            currentFrame = STARTFRAME;
            updateName();
            return 0;
        }
    }

};


#endif //ADAPTER_GIFADAPTER_H
