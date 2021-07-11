//
// Created by isaca on 7/11/2021.
//

#include <iostream>
#include <time.h>
#include "lib/Box.h"

#define MAXLEAFBOXES 3
#define MAXLEAFPRODUCTS 6

#define NUMofRECIPIENTS 6
std::string recipients[NUMofRECIPIENTS] = {"Yana", "Christofor", "Kirito", "Anna", "Alex", "Marie Curie"};

#define NUMofPRODUCTS 10
std::string products[NUMofPRODUCTS] = {"Charger", "Phone", "Headphones", "Watch", "Microphone",
                                       "Flash drive", "CPU", "GPU", "RAM", "Keyboard"};

Product generateProduct() {
    int productID = rand() % NUMofPRODUCTS,
            recipientID = rand() % NUMofRECIPIENTS;

    return Product(products[productID], recipients[recipientID]);
}

Box generateBox() {
    int id = rand() % 100000,
        leafBoxes = rand() % MAXLEAFBOXES,
        leafProducts = rand() % MAXLEAFPRODUCTS;

    Box result = Box(id);

    while (leafBoxes--)
        result.addBox(generateBox());

    while (leafProducts--)
        result.addProduct(generateProduct());

    return result;
}

void walkBox(Box boxRoot){
    std::cout   << "Opening box #" << boxRoot.getID()
                << "\nwith " << boxRoot.getNumofBoxes() << " additional boxes inside and"
                << "\nwith " << boxRoot.getNumofProducts() << " additional products inside!\n";


    for(auto product: boxRoot.getProducts())
        std::cout << product.getName() << " for " << product.getRecipient() << '\n';

    for(auto box: boxRoot.getBoxes())
        walkBox(box);

}

int main() {
    srand(time(NULL));

    walkBox(generateBox());

}