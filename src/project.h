#ifndef PROJECT_H
#define PROJECT_H

/**
 * @brief Dremu项目管理器
 * @author HPCG
 * 
 */
#include <string>

#include "nlohmann/json.hpp"
#include "nlohmann/json_fwd.hpp"

class Project{
public:
    /**
     * @brief Construct a new Project object
     * 
     */
    Project();

    Project(std::string json_string);

    /**
     * @brief 测试函数，看C++中的代码可不可以被Python调用 
     * @author HPCG
     * 
     */
    void test();
    void check();

private:
    nlohmann::json chart;


};

#endif