/**
 * @file  ActorHasTargetTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorHasTargetTest.
 *
 */
class ActorHasTargetTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHASTARGETTEST
public:
    class ActorHasTargetTest& operator=(class ActorHasTargetTest const &) = delete;
    ActorHasTargetTest(class ActorHasTargetTest const &) = delete;
    ActorHasTargetTest() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~ActorHasTargetTest();
    /**
     * @note   Virtual function table index: 2
     * @symbol ?evaluate@ActorHasTargetTest@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @note   Virtual function table index: 4
     * @symbol ?getName@ActorHasTargetTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORHASTARGETTEST
#endif

};