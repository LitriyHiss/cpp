#include <iostream>
#include <string>

class StudyPlan {
private:
    std::string code;
    std::string title;
    std::string name;
    int target_credit_units;
    std::string education_degree;
    int number_desciplines;
    int summ_credit_units;
    bool condition;

public:
    // Конструктор
    StudyPlan(std::string code, std::string title, std::string name, int target_credit_units, std::string education_degree)
        : code(code), title(title), name(name), target_credit_units(target_credit_units), education_degree(education_degree), number_desciplines(0), summ_credit_units(0), condition(false) {}

    // Геттеры и сеттеры
    std::string getCode() { return code; }
    void setCode(std::string code) { this->code = code; }

    std::string getTitle() { return title; }
    void setTitle(std::string title) { this->title = title; }

    std::string getName() { return name; }
    void setName(std::string name) { this->name = name; }

    int getTarget_credit_units() { return target_credit_units; }
    void setTarget_credit_units(int target_credit_units) { this->target_credit_units = target_credit_units; }

    std::string getEducation_degree() { return education_degree; }
    void setEducation_degree(std::string education_degree) { this->education_degree = education_degree; }

    void setNumber_desciplines(int number_desciplines) { this->number_desciplines = number_desciplines; }
    int getNumber_desciplines() { return number_desciplines; }

    void setSumm_credit_units(int summ_credit_units) { this->summ_credit_units = summ_credit_units; }
    int getSumm_credit_units() { return summ_credit_units; }

    bool getCondition() { return condition; }

    // Ввести план в действие
    void start_plan() {
        if (number_desciplines == 0 && summ_credit_units == 0) {
            std::cout << "The number of disciplines and the sum of credit units cannot be equal to 0 at the same time." << std::endl;
            return;
        }

        if (summ_credit_units != target_credit_units) {
            std::cout << "The amount of credits does not match the target number of credits." << std::endl;
            return;
        }

        condition = true;
        std::cout << "Plan started." << std::endl;
    }
};