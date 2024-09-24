#include <iostream>
#include <string>
#include "study_plan.cpp"

int main() {
  // Создание объекта класса StudyPlan
  StudyPlan plan("123", "Math", "Alex", 120, "Bachelor");

  // Вывод информации о плане
  std::cout << "Plan code: " << plan.getCode() << std::endl;
  std::cout << "Plan title: " << plan.getTitle() << std::endl;
  std::cout << "Full name of the person who completed the plan: " << plan.getName() << std::endl;
  std::cout << "Target number of accounting units: " << plan.getTarget_credit_units() << std::endl;
  std::cout << "Study degree: " << plan.getEducation_degree() << std::endl;

  // Установка количества дисциплин и суммы кредитных единиц
  plan.setNumber_desciplines(10);
  plan.setSumm_credit_units(100);

  // Запуск плана
  plan.start_plan();

  // Проверка состояния плана
  if (plan.getCondition()) {
    std::cout << "Plan started." << std::endl;
  } else {
    std::cout << "Plan not started." << std::endl;
  }

  return 0;
}