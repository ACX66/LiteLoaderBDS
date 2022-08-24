/**
 * @file  IRandom.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IRandom.
 *
 */
class IRandom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IRANDOM
public:
    class IRandom& operator=(class IRandom const &) = delete;
    IRandom(class IRandom const &) = delete;
    IRandom() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~IRandom();
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @note   Virtual function table index: 2
     * @symbol 
     */
    virtual void __unk_vfn_2() = 0;
    /**
     * @note   Virtual function table index: 3
     * @symbol 
     */
    virtual void __unk_vfn_3() = 0;
    /**
     * @note   Virtual function table index: 4
     * @symbol 
     */
    virtual void __unk_vfn_4() = 0;
    /**
     * @note   Virtual function table index: 5
     * @symbol 
     */
    virtual void __unk_vfn_5() = 0;
    /**
     * @note   Virtual function table index: 6
     * @symbol 
     */
    virtual void __unk_vfn_6() = 0;
    /**
     * @note   Virtual function table index: 7
     * @symbol 
     */
    virtual void __unk_vfn_7() = 0;
    /**
     * @note   Virtual function table index: 8
     * @symbol 
     */
    virtual void __unk_vfn_8() = 0;
    /**
     * @note   Virtual function table index: 9
     * @symbol 
     */
    virtual void __unk_vfn_9() = 0;
    /**
     * @note   Virtual function table index: 10
     * @symbol ?forkPositional@IRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IRANDOM
#endif

};