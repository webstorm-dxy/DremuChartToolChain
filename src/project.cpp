#include <fstream>
#include <iostream>
#include <ostream>
#include <string>


#include "project.h"
#include "nlohmann/json.hpp"

using json = nlohmann::json;

Project::Project(){
    
    this->chart["Version"] = "20241221";
    this->chart["ProjectName"] = "no_named";
    std::cout<<chart<<std::endl;
}

void Project::test(){
    std::cout<<"Dremu Chart ToolChain Version 20241221"<<std::endl;
}

void Project::output_json_file(std::string out_path){
    std::ofstream file(out_path.append("/").append(this->chart["ProjectName"]).append(".json"));
    file<<this->chart<<std::endl;
    file.close();
}