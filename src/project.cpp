#include <iostream>
#include <ostream>


#include "project.h"
#include "nlohmann/json.hpp"

using json = nlohmann::json;

Project::Project(){
    
    this->chart["Version"] = "20241221";
    std::cout<<chart<<std::endl;
}

void Project::test(){
    std::cout<<"Dremu Chart ToolChain Version 20241221"<<std::endl;
}