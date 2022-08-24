/**
 * @file  ItemPack.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemPack.
 *
 */
class ItemPack {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMPACK
public:
    class ItemPack& operator=(class ItemPack const &) = delete;
    ItemPack(class ItemPack const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMPACK
#endif
    /**
     * @symbol ??0ItemPack@@QEAA@XZ
     */
    MCAPI ItemPack();
    /**
     * @symbol ?add@ItemPack@@QEAAXAEBVRecipeIngredient@@H@Z
     */
    MCAPI void add(class RecipeIngredient const &, int);
    /**
     * @symbol ??1ItemPack@@QEAA@XZ
     */
    MCAPI ~ItemPack();

};