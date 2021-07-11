//
// Created by isaca on 7/11/2021.
//

#ifndef COMPOSITE_BOX_H
#define COMPOSITE_BOX_H

#include "Product.h"
#include <vector>

class Box {
private:
    const int id;
    int boxNumber = 0,
        productNumber = 0;
    std::vector<Box> boxes;
    std::vector<Product> products;

public:
    Box(int newID): id(newID) {}

    void addBox(const Box& newBox) { boxes.push_back(newBox); boxNumber++; }
    void addProduct(const Product& newProduct) { products.push_back(newProduct); productNumber++; }

    // Getters
    int getID(){ return id; }
    int getNumofBoxes() { return boxNumber; }
    int getNumofProducts(){ return productNumber; }
    std::vector<Box> getBoxes(){ return boxes; }
    std::vector<Product> getProducts(){ return products; }
};


#endif //COMPOSITE_BOX_H
