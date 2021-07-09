//
// Created by isaca on 7/8/2021.
//

#include <iostream>

#include "JPEGTransformator.h"
#include "GIFAdapter.h"

#define NUMofFRAMES 10

int main() {
    JPEG schoolJPEG(320, 240, "photo_de_la_scoala");
    GIF dogeGIF(400, 400, true, NUMofFRAMES, "Doge_meme");

    JPEGTransformator imageEnhancer;

    imageEnhancer.setTarget(schoolJPEG);
    imageEnhancer.transform();

    //imageEnhancer.setTarget(dogeGIF); - will cause an error

    GIFAdapter dogeAdapter(dogeGIF);

    do {
        imageEnhancer.setTarget(dogeAdapter);
        imageEnhancer.transform();
    } while (dogeAdapter.nextFrame());
}