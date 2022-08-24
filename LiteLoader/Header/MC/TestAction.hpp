/**
 * @file  TestAction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IRequestAction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TestAction.
 *
 */
class TestAction : public IRequestAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTACTION
public:
    class TestAction& operator=(class TestAction const &) = delete;
    TestAction(class TestAction const &) = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~TestAction();
    /**
     * @note   Virtual function table index: 1
     * @symbol ?execute@TestAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
     */
    virtual void execute(class ServerLevel &, class Dimension &);
    /**
     * @note   Virtual function table index: 3
     * @symbol ??8TestAction@@UEBA_NAEAVIRequestAction@@@Z
     */
    virtual bool operator==(class IRequestAction &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TESTACTION
#endif
    /**
     * @symbol ??0TestAction@@QEAA@XZ
     */
    MCAPI TestAction();

};