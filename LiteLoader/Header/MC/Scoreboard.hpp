/**
 * @file  Scoreboard.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Player;
class Objective;
struct PlayerScore;

struct ScoreInfo {
    char filler[16];
    Objective* getObjective() {
        return dAccess<Objective*>(this, 0);
    }
    int getCount() {
        return dAccess<int>(this, 12);
    }
};
#undef BEFORE_EXTRA

/**
 * @brief MC class Scoreboard.
 *
 */
class Scoreboard {

#define AFTER_EXTRA
// Add new members to class
public:

    inline struct ScoreboardId const& createScoreboardId(std::string const& a0) {
        struct ScoreboardId const& (Scoreboard::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }

    inline struct ScoreboardId const& createScoreboardId(class Player const& a0) {
        struct ScoreboardId const& (Scoreboard::*rv)(class Player const&);
        *((void**)&rv) = dlsym("?createScoreboardId@ServerScoreboard@@UEAAAEBUScoreboardId@@AEBVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player const&>(a0));
    }

    LIAPI static Objective* newObjective(const std::string& objname, const std::string& displayName);
    //LIAPI static bool setDisplayObjective(const std::string& objname, const std::string& slot, int sort);
    //LIAPI static Objective* clearDisplayObjective(const std::string& slot);
    //LIAPI static Objective* getDisplayObjective(const std::string& slot);
    LIAPI static bool removeFromObjective(const std::string& objname, const std::string& id);
    LIAPI static bool removeFromObjective(const std::string& objname, Player* player);

    LIAPI static struct ScoreboardId& getOrCreateScoreboardId(std::string const& id);

    /**
     * Get the score of the id in the specified objective.
     * 
     * @param  objname  Objective name
     * @param  id       ScoreboardId name(string)
     * @return int      The score
     * @throws std::invalid_argument  if the objective is not found
     *         std::runtime_error     if cannot get or create id/cannot get scores
     * @note   If there is not a ScoreboardId named `id`, it will create a new one
     */
    LIAPI static int getScore(const std::string& objname, const std::string& id);
    /**
     * Get the score of the id in the specified objective.
     *
     * @param      objname  Objective name
     * @param      id       ScoreboardId name(string)
     * @param[out] score    The score
     * @return     bool     Success or not
     * @note   If there is not a ScoreboardId named `id`, it will create a new one
     */
    LIAPI static bool getScore(const std::string& objname, const std::string& id, int& score);
    LIAPI static std::optional<int> setScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> addScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> reduceScore(const std::string& objname, const std::string& id, int score);

    /**
     * Get the score of the player in the specified objective.
     *
     * @param  objname  Objective name
     * @param  player   The player
     * @return int      The score
     * @throws std::invalid_argument  if the objective is not found
     *         std::runtime_error     if cannot get or create id/cannot get scores
     */
    LIAPI static int getScore(const std::string& objname, Player* player);
    LIAPI static int getScore(Player* player, const std::string& objname);
    /**
     * Get the score of the player in the specified objective.
     *
     * @param      objname  Objective name
     * @param      player   The player
     * @param[out] score    The score
     * @return     bool     Success or not
     */
    LIAPI static bool getScore(const std::string& objname, Player* player, int& score);
    /**
     * Set the score of the player in the specified objective.
     * 
     * @param  objname  Objective name
     * @param  player   The player
     * @param  value    The score value to set
     * @return bool     Success or not
     */
    LIAPI static bool setScore(const std::string& objname, Player* player, int value);
    LIAPI static bool setScore(Player* player, const std::string& objname, int value);
    /**
     * Add the score of the player in the specified objective.
     *
     * @param  objname  Objective name
     * @param  player   The player
     * @param  value    The score value to add
     * @return bool     Success or not
     */
    LIAPI static bool addScore(const std::string& objname, Player* player, int value);
    LIAPI static bool addScore(Player* player, const std::string& objname, int value);
    /**
     * Reduce the score of the player in the specified objective.
     *
     * @param  objname  Objective name
     * @param  player   The player
     * @param  value    The score value to reduce
     * @return bool     Success or not
     */
    LIAPI static bool reduceScore(const std::string& objname, Player* player, int value);
    LIAPI static bool reduceScore(Player* player, const std::string& objname, int value);
    /**
     * Delete the score of the player from the specified objective.
     *
     * @param  objname  Objective name
     * @param  player   The player
     * @return bool     Success or not
     */
    LIAPI static bool deleteScore(const std::string& objname, Player* player);
    LIAPI static bool deleteScore(Player* player, const std::string& objname);

    LIAPI static bool scoreboardIdIsValid(ScoreboardId* id);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARD
public:
    class Scoreboard& operator=(class Scoreboard const &) = delete;
    Scoreboard(class Scoreboard const &) = delete;
    Scoreboard() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~Scoreboard();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?setDisplayObjective@Scoreboard@@UEAAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVObjective@@W4ObjectiveSortOrder@@@Z
     */
    virtual class DisplayObjective const * setDisplayObjective(std::string const &, class Objective const &, enum ObjectiveSortOrder);
    /**
     * @note   Virtual function table index: 2
     * @symbol ?clearDisplayObjective@Scoreboard@@UEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual class Objective * clearDisplayObjective(std::string const &);
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3();
    /**
     * @note   Virtual function table index: 4
     * @symbol 
     */
    virtual void __unk_vfn_4();
    /**
     * @note   Virtual function table index: 5
     * @symbol 
     */
    virtual void __unk_vfn_5();
    /**
     * @note   Virtual function table index: 6
     * @symbol ?onObjectiveAdded@Scoreboard@@UEAAXAEBVObjective@@@Z
     */
    virtual void onObjectiveAdded(class Objective const &);
    /**
     * @note   Virtual function table index: 7
     * @symbol ?onObjectiveRemoved@Scoreboard@@UEAAXAEAVObjective@@@Z
     */
    virtual void onObjectiveRemoved(class Objective &);
    /**
     * @note   Virtual function table index: 8
     * @symbol ?onScoreChanged@Scoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
     */
    virtual void onScoreChanged(struct ScoreboardId const &, class Objective const &);
    /**
     * @note   Virtual function table index: 9
     * @symbol 
     */
    virtual void __unk_vfn_9();
    /**
     * @note   Virtual function table index: 10
     * @symbol 
     */
    virtual void __unk_vfn_10();
    /**
     * @note   Virtual function table index: 11
     * @symbol 
     */
    virtual void __unk_vfn_11();
    /**
     * @note   Virtual function table index: 12
     * @symbol 
     */
    virtual void __unk_vfn_12();
    /**
     * @note   Virtual function table index: 13
     * @symbol 
     */
    virtual void __unk_vfn_13();
    /**
     * @note   Virtual function table index: 14
     * @symbol 
     */
    virtual void __unk_vfn_14();
    /**
     * @note   Virtual function table index: 15
     * @symbol ?isClientSide@Scoreboard@@MEBA_NXZ
     */
    virtual bool isClientSide() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARD
    /**
     * @note   Virtual function table index: -1
     * @symbol ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBVActor@@@Z
     */
    MCVAPI struct ScoreboardId const & createScoreboardId(class Actor const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI struct ScoreboardId const & createScoreboardId(std::string const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBVPlayer@@@Z
     */
    MCVAPI struct ScoreboardId const & createScoreboardId(class Player const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onPlayerIdentityUpdated@Scoreboard@@UEAAXAEBUPlayerScoreboardId@@@Z
     */
    MCVAPI void onPlayerIdentityUpdated(struct PlayerScoreboardId const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onPlayerJoined@Scoreboard@@UEAAXAEBVPlayer@@@Z
     */
    MCVAPI void onPlayerJoined(class Player const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?onPlayerScoreRemoved@Scoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
     */
    MCVAPI void onPlayerScoreRemoved(struct ScoreboardId const &, class Objective const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?setPacketSender@Scoreboard@@UEAAXPEAVPacketSender@@@Z
     */
    MCVAPI void setPacketSender(class PacketSender *);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?tick@Scoreboard@@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?writeToLevelStorage@Scoreboard@@UEAAXXZ
     */
    MCVAPI void writeToLevelStorage();
#endif
    /**
     * @symbol ??0Scoreboard@@QEAA@VCommandSoftEnumRegistry@@@Z
     */
    MCAPI Scoreboard(class CommandSoftEnumRegistry);
    /**
     * @symbol ?addObjective@Scoreboard@@QEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBVObjectiveCriteria@@@Z
     */
    MCAPI class Objective * addObjective(std::string const &, std::string const &, class ObjectiveCriteria const &);
    /**
     * @symbol ?addScoreListener@Scoreboard@@QEAAXAEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addScoreListener(class Player &, std::string const &);
    /**
     * @symbol ?applyPlayerOperation@Scoreboard@@QEAAHAEA_NAEAV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@AEBUScoreboardId@@AEAVObjective@@13W4CommandOperator@@@Z
     */
    MCAPI int applyPlayerOperation(bool &, std::vector<struct ScoreboardId> &, struct ScoreboardId const &, class Objective &, std::vector<struct ScoreboardId> &, class Objective &, enum CommandOperator);
    /**
     * @symbol ?clearScoreboardIdentity@Scoreboard@@QEAA_NAEBUScoreboardId@@@Z
     */
    MCAPI bool clearScoreboardIdentity(struct ScoreboardId const &);
    /**
     * @symbol ?forEachIdentityRef@Scoreboard@@QEAAXV?$function@$$A6AXAEAVScoreboardIdentityRef@@@Z@std@@@Z
     */
    MCAPI void forEachIdentityRef(class std::function<void (class ScoreboardIdentityRef &)>);
    /**
     * @symbol ?forEachObjective@Scoreboard@@QEAAXV?$function@$$A6AXAEAVObjective@@@Z@std@@@Z
     */
    MCAPI void forEachObjective(class std::function<void (class Objective &)>);
    /**
     * @symbol ?getCriteria@Scoreboard@@QEBAPEAVObjectiveCriteria@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class ObjectiveCriteria * getCriteria(std::string const &) const;
    /**
     * @symbol ?getCriteriaNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getCriteriaNames() const;
    /**
     * @symbol ?getDisplayInfoFiltered@Scoreboard@@QEBA?AV?$vector@UPlayerScore@@V?$allocator@UPlayerScore@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI std::vector<struct PlayerScore> getDisplayInfoFiltered(std::string const &) const;
    /**
     * @symbol ?getDisplayObjective@Scoreboard@@QEBAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class DisplayObjective const * getDisplayObjective(std::string const &) const;
    /**
     * @symbol ?getDisplayObjectiveSlotNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getDisplayObjectiveSlotNames() const;
    /**
     * @symbol ?getIdScores@Scoreboard@@QEBA?AV?$vector@UScoreInfo@@V?$allocator@UScoreInfo@@@std@@@std@@AEBUScoreboardId@@@Z
     */
    MCAPI std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const &) const;
    /**
     * @symbol ?getObjective@Scoreboard@@QEBAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class Objective * getObjective(std::string const &) const;
    /**
     * @symbol ?getObjectiveNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getObjectiveNames() const;
    /**
     * @symbol ?getObjectives@Scoreboard@@QEBA?AV?$vector@PEBVObjective@@V?$allocator@PEBVObjective@@@std@@@std@@XZ
     */
    MCAPI std::vector<class Objective const *> getObjectives() const;
    /**
     * @symbol ?getScoreboardEventCoordinator@Scoreboard@@QEAAAEAVScoreboardEventCoordinator@@XZ
     */
    MCAPI class ScoreboardEventCoordinator & getScoreboardEventCoordinator();
    /**
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct PlayerScoreboardId const &) const;
    /**
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(std::string const &) const;
    /**
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBVActor@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(class Actor const &) const;
    /**
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBVPlayer@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(class Player const &) const;
    /**
     * @symbol ?getScoreboardIdentityRef@Scoreboard@@QEAAPEAVScoreboardIdentityRef@@AEBUScoreboardId@@@Z
     */
    MCAPI class ScoreboardIdentityRef * getScoreboardIdentityRef(struct ScoreboardId const &);
    /**
     * @symbol ?getScoreboardIdentityRefs@Scoreboard@@QEBA?AV?$vector@VScoreboardIdentityRef@@V?$allocator@VScoreboardIdentityRef@@@std@@@std@@XZ
     */
    MCAPI std::vector<class ScoreboardIdentityRef> getScoreboardIdentityRefs() const;
    /**
     * @symbol ?getTrackedIds@Scoreboard@@QEBA?AV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct ScoreboardId> getTrackedIds() const;
    /**
     * @symbol ?isObjectiveDisplayed@Scoreboard@@QEBA_NAEBVObjective@@@Z
     */
    MCAPI bool isObjectiveDisplayed(class Objective const &) const;
    /**
     * @symbol ?modifyPlayerScore@Scoreboard@@QEAAHAEA_NAEBUScoreboardId@@AEAVObjective@@HW4PlayerScoreSetFunction@@@Z
     */
    MCAPI int modifyPlayerScore(bool &, struct ScoreboardId const &, class Objective &, int, enum PlayerScoreSetFunction);
    /**
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBUActorUniqueID@@@Z
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, struct ActorUniqueID const &);
    /**
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, std::string const &);
    /**
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBVCompoundTag@@@Z
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(class CompoundTag const &);
    /**
     * @symbol ?removeObjective@Scoreboard@@QEAA_NPEAVObjective@@@Z
     */
    MCAPI bool removeObjective(class Objective *);
    /**
     * @symbol ?removeScoreListener@Scoreboard@@QEAAXAEBVPlayer@@@Z
     */
    MCAPI void removeScoreListener(class Player const &);
    /**
     * @symbol ?removeScoreListener@Scoreboard@@QEAAXAEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void removeScoreListener(class Player const &, std::string const &);
    /**
     * @symbol ?replaceFakePlayer@Scoreboard@@QEAAXAEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI void replaceFakePlayer(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @symbol ?resetPlayerScore@Scoreboard@@QEAAXAEBUScoreboardId@@@Z
     */
    MCAPI void resetPlayerScore(struct ScoreboardId const &);
    /**
     * @symbol ?resetPlayerScore@Scoreboard@@QEAAXAEBUScoreboardId@@AEAVObjective@@@Z
     */
    MCAPI void resetPlayerScore(struct ScoreboardId const &, class Objective &);
MCAPI static std::string const DEFAULT_CRITERIA;
MCAPI static std::string const DISPLAY_SLOT_BELOWNAME;
MCAPI static std::string const DISPLAY_SLOT_LIST;
MCAPI static std::string const DISPLAY_SLOT_SIDEBAR;
MCAPI static char const * OBJECTIVES_ENUM;
    /**
     * @symbol ?shouldClearScoresOnDeath@Scoreboard@@SA_NAEBVActor@@@Z
     */
    MCAPI static bool shouldClearScoresOnDeath(class Actor const &);

//protected:
    /**
     * @symbol ?_addLoadedCriteria@Scoreboard@@IEAAXV?$unique_ptr@VObjectiveCriteria@@U?$default_delete@VObjectiveCriteria@@@std@@@std@@@Z
     */
    MCAPI void _addLoadedCriteria(std::unique_ptr<class ObjectiveCriteria>);
    /**
     * @symbol ?_addLoadedObjective@Scoreboard@@IEAAXV?$unique_ptr@VObjective@@U?$default_delete@VObjective@@@std@@@std@@@Z
     */
    MCAPI void _addLoadedObjective(std::unique_ptr<class Objective>);
    /**
     * @symbol ?_getCriteriaMap@Scoreboard@@IEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjectiveCriteria@@U?$default_delete@VObjectiveCriteria@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjectiveCriteria@@U?$default_delete@VObjectiveCriteria@@@std@@@2@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<std::string, std::unique_ptr<class ObjectiveCriteria>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ObjectiveCriteria>>>> const & _getCriteriaMap() const;
    /**
     * @symbol ?_getObjectiveMap@Scoreboard@@IEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjective@@U?$default_delete@VObjective@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjective@@U?$default_delete@VObjective@@@std@@@2@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<std::string, std::unique_ptr<class Objective>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class Objective>>>> const & _getObjectiveMap() const;

//private:
    /**
     * @symbol ?_init@Scoreboard@@AEAAXXZ
     */
    MCAPI void _init();

protected:

private:

};