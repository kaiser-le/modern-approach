// loop is the iteration, not recursion
// loop need controlling expression
// break, continue and goto are both jump statement
// break jump to the end of loop
// continue jump to the start of loop
// goto jump to anyway labels
#include <stdio.h>

int main(void)
{
	int cmd;
	float balance = 0.0f, creddit, debit;

	printf("*** ACME checkbook-balancing program ***\n");
	printf("Commands: 0=clear, 1=credit, 2=debit, ");
	printf("3=balance, 4=exit\n\n");
	for (;;) {
		printf("Enter command: ");
		scanf("%d", &cmd);
		switch (cmd) {
		case 0:
			balance = 0.0f;
			break;
		case 1:
			printf("Enter amount of credit: ");
			scanf("%f", &creddit);
			balance += creddit;
			break;
		case 2:
			printf("Enter amount of debit: ");
			scanf("%f", &debit);
			balance -= debit;
			break;
		case 3:
			printf("Current balance: $%.2f\n", balance);
			break;
		case 4:
			return 0;
		default:
			printf("Commands: 0=clear, 1=credit, 2=debit, ");
			printf("3=balance, 4=exit\n\n");
			break;
		}
	}

	return 0;
}