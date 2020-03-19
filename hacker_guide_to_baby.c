/* Hackers guide to baby - version .02 */
#include <stdio.h>
#include <stdbool.h>
int main ()
{
int baby_age = 1;
bool cry, hungry, diaper, tired, parent_sleep_removal,baby_proof_everything, toys_everywhere;

baby_proof_everything = true;
toys_everywhere = true;

while(baby_age == 1 )
{
parent_sleep_removal = true;
entertain_and_play_with_baby();
	if (cry)
	{
		if (hungry)
			{
			feeding_time();
			}
		else if(dirty_diaper)
			{
			change_diaper();
			}
		else if (tired)
			{
			nappy_time();
			}
		else
			{
			emergency_cranky_baby_routine();
			}
	}
}
return 0;
}
