// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Enchant.hpp"
#define EXTRA_INCLUDE_PART_PROTECTIONENCHANT
#include "Extra/ProtectionEnchantAPI.hpp"
#undef EXTRA_INCLUDE_PART_PROTECTIONENCHANT
class ProtectionEnchant : public Enchant {
#include "Extra/ProtectionEnchantAPI.hpp"
public:
    /*0*/ virtual ~ProtectionEnchant();
    /*1*/ virtual int getMinCost(int) const;
    /*2*/ virtual int getMaxCost(int) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual int getMaxLevel() const;
    /*5*/ virtual int getDamageProtection(int, class ActorDamageSource const&) const;
    /*6*/ virtual float getDamageBonus(int, class Actor const&) const;
    /*7*/ virtual void doPostAttack(class Actor&, class Actor&, int) const;
    /*8*/ virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int) const;
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual void __unk_vfn_2();
    /*11*/ virtual void __unk_vfn_3();
    /*12*/ virtual void __unk_vfn_4();
    /*13*/ virtual bool _isValidEnchantmentTypeForCategory(int /*enum enum Enchant::Type*/) const;
    /*
    inline bool isProtectionEnchant() const{
        bool (ProtectionEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?isProtectionEnchant@ProtectionEnchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:
    MCAPI static float const THORNS_CHANCE_PER_LEVEL;
    MCAPI static std::vector<enum Enchant::Type> const VALID_ENCHANTMENTS;
};