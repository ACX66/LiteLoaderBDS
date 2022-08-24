/**
 * @file  CompactionListenerEnv.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompactionListenerEnv.
 *
 */
class CompactionListenerEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPACTIONLISTENERENV
public:
    class CompactionListenerEnv& operator=(class CompactionListenerEnv const &) = delete;
    CompactionListenerEnv(class CompactionListenerEnv const &) = delete;
    CompactionListenerEnv() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~CompactionListenerEnv();
    /**
     * @note   Virtual function table index: 14
     * @symbol ?Schedule@CompactionListenerEnv@@UEAAXP6AXPEAX@Z0@Z
     */
    virtual void Schedule(void ( *)(void *), void *);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPACTIONLISTENERENV
#endif
    /**
     * @symbol ??0CompactionListenerEnv@@QEAA@PEAVEnv@leveldb@@@Z
     */
    MCAPI CompactionListenerEnv(class leveldb::Env *);
    /**
     * @symbol ?setCompactionCallback@CompactionListenerEnv@@QEAAXV?$function@$$A6AXW4CompactionStatus@@@Z@std@@@Z
     */
    MCAPI void setCompactionCallback(class std::function<void (enum CompactionStatus)>);

};