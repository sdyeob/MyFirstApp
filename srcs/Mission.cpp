#include "../includes/Mission.hpp"

Mission::Mission(const std::string& goal, const std::string& deadline)
    : goal(goal), deadline(deadline) { is_done = 0; }

const std::string&  Mission::getGoal(void) const 
{
    return (goal);
}

const std::string&  Mission::getDeadLine(void) const 
{
    return (deadline);
}

const bool&         Mission::isDone(void) const 
{
    return(is_done);
}

void                Mission::doneThisGoal(void)
{
    is_done = 1;
}