// Programmer Name: Jennifer Isobe 
// Program Name: Assignment 2 Budget Program
// Date: 2/10/2024

#include <stdio.h>

int main(void) {

  // Declare and initialize variables
  double monthlyIncome = 0;
  double iraCost = 0;
  double rentCost = 0;
  double cellCost = 0;
  double electricCost = 0;
  double waterTrashCost = 0;
  double internetTvCost = 0;
  double naturalGasCost = 0;
  double studentLoanCost = 0;
  double transportCost = 0;
  double debtPaymentCost = 0;
  double healthInsuranceCost = 0;
  double groceryDiningCost = 0;
  double remainingAmount = 0;

  // Introduction and instructions for program
  printf("Welcome to Jennifer\'s monthly budget calculator!\n");

  printf("\nEnter your MONTHLY values below as dollars and cents, example (99.99)\n");

  // Get monthly income from user
  printf("\nEnter your monthly income      :$ ");
  scanf("%lf", &monthlyIncome);

  // Calculate and output IRA/401k cost to user
  iraCost = monthlyIncome * .15;
  printf("\n15%% IRA or 401k cost is        :$ %.2lf", iraCost);

  // Get expenses from user
  printf("\nEnter cost for mortgage/rent   :$ ");
  scanf("%lf", &rentCost);

  printf("Enter cost for cell phone      :$ ");
  scanf("%lf", &cellCost);

  printf("Enter electric bill            :$ ");
  scanf("%lf", &electricCost);

  printf("Enter city water/trash         :$ ");
  scanf("%lf", &waterTrashCost);

  printf("Enter internet/tv subscription :$ ");
  scanf("%lf", &internetTvCost);

  printf("Enter natural gas bill         :$ ");
  scanf("%lf", &naturalGasCost);

  printf("Enter student loan payment     :$ ");
  scanf("%lf", &studentLoanCost);

  printf("Enter transportation/car cost  :$ ");
  scanf("%lf", &transportCost);

  printf("Enter all other debt payment   :$ ");
  scanf("%lf", &debtPaymentCost);

  printf("Enter health insurance cost    :$ ");
  scanf("%lf", &healthInsuranceCost);

  printf("Groceries and dining           :$ ");
  scanf("%lf", &groceryDiningCost);

  // Calculate and output remaining amount (income - expenses)
  remainingAmount = monthlyIncome - iraCost - rentCost - cellCost - electricCost - waterTrashCost - internetTvCost - naturalGasCost - studentLoanCost - transportCost - debtPaymentCost - healthInsuranceCost - groceryDiningCost;

  printf("\nAmount remaining               :$ %.2lf", remainingAmount);


}