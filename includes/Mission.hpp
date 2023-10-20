# ifndef MISSION_HPP
# define MISSION_HPP

#include <string>

class Mission
{
private:
    std::string         goal;
    const std::string   deadline;
    bool                is_done;
public:
    Mission(const std::string& goal, const std::string& deadline);
    const std::string&  getGoal(void) const ;
    const std::string&  getDeadLine(void) const ;
    const bool&         isDone(void) const ;
    void                doneThisGoal(void);
};

# endif