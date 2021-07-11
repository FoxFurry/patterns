//
// Created by isaca on 7/11/2021.
//

#ifndef COMPOSITE_PRODUCT_H
#define COMPOSITE_PRODUCT_H

#include <string>

class Product {
protected:
    std::string productName,
                recipient;

public:
    Product(std::string name, std::string recipient):
                                                                productName(name),
                                                                recipient(recipient) {}
    Product() {}

    // Getters
    std::string getName() { return productName; }
    std::string getRecipient() { return recipient; }


    // Setters
    void setName(std::string val) { productName = val; }
    void setRecipient(std::string val) { recipient = val; }
};


#endif //COMPOSITE_PRODUCT_H
