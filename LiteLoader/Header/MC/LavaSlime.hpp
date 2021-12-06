// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Slime.hpp"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_LAVASLIME
#include "Extra/LavaSlimeAPI.hpp"
#undef EXTRA_INCLUDE_PART_LAVASLIME
class LavaSlime : public Slime {
#include "Extra/LavaSlimeAPI.hpp"
public:
    /*0*/ virtual void reloadHardcoded(int /*enum enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*1*/ virtual ~LavaSlime();
    /*2*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual float getRidingHeight();
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual bool isInLava() const;
    /*10*/ virtual float getCameraOffset() const;
    /*11*/ virtual void __unk_vfn_4();
    /*12*/ virtual float getBrightness(float) const;
    /*13*/ virtual void __unk_vfn_5();
    /*14*/ virtual void __unk_vfn_6();
    /*15*/ virtual void __unk_vfn_7();
    /*16*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*17*/ virtual bool isOnFire() const;
    /*18*/ virtual void __unk_vfn_8();
    /*19*/ virtual void __unk_vfn_9();
    /*20*/ virtual void __unk_vfn_10();
    /*21*/ virtual void __unk_vfn_11();
    /*22*/ virtual class Actor* findAttackTarget();
    /*23*/ virtual bool isValidTarget(class Actor*) const;
    /*24*/ virtual void adjustDamageAmount(int&) const;
    /*25*/ virtual void onTame();
    /*26*/ virtual void onFailedTame();
    /*27*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*28*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*29*/ virtual float getPickRadius();
    /*30*/ virtual void awardKillScore(class Actor&, int);
    /*31*/ virtual class HashedString const& queryEntityRenderer() const;
    /*32*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*33*/ virtual int getPortalWaitTime() const;
    /*34*/ virtual bool canChangeDimensions() const;
    /*35*/ virtual void __unk_vfn_12();
    /*36*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*37*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*38*/ virtual bool canBePulledIntoVehicle() const;
    /*39*/ virtual void __unk_vfn_13();
    /*40*/ virtual bool canSynchronizeNewEntity() const;
    /*41*/ virtual void __unk_vfn_14();
    /*42*/ virtual void __unk_vfn_15();
    /*43*/ virtual bool isWorldBuilder() const;
    /*44*/ virtual void __unk_vfn_16();
    /*45*/ virtual bool isAdventure() const;
    /*46*/ virtual bool canDestroyBlock(class Block const&) const;
    /*47*/ virtual void setAuxValue(int);
    /*48*/ virtual void stopSpinAttack();
    /*49*/ virtual void __unk_vfn_17();
    /*50*/ virtual void __unk_vfn_18();
    /*51*/ virtual void __unk_vfn_19();
    /*52*/ virtual void __unk_vfn_20();
    /*53*/ virtual void __unk_vfn_21();
    /*54*/ virtual void spawnAnim();
    /*55*/ virtual void aiStep();
    /*56*/ virtual bool checkSpawnRules(bool);
    /*57*/ virtual int getItemUseDuration() const;
    /*58*/ virtual float getItemUseStartupProgress() const;
    /*59*/ virtual float getItemUseIntervalProgress() const;
    /*60*/ virtual void __unk_vfn_22();
    /*61*/ virtual bool isAlliedTo(class Mob*);
    /*62*/ virtual void __unk_vfn_23();
    /*63*/ virtual int getArmorValue();
    /*64*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*65*/ virtual void onBorn(class Actor&, class Actor&);
    /*66*/ virtual int getAttackTime();
    /*67*/ virtual void __unk_vfn_24();
    /*68*/ virtual void jumpFromGround();
    /*69*/ virtual void _serverAiMobStep();
    /*70*/ virtual void __unk_vfn_25();
    /*71*/ virtual bool isDarkEnoughToSpawn() const;
    /*72*/ virtual bool canDealDamage();
    /*73*/ virtual bool doPlayLandSound();
    /*74*/ virtual void decreaseSquish();
    /*75*/ virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);
    /*
    inline bool isOnFire() const{
        bool (LavaSlime::*rv)() const;
        *((void**)&rv) = dlsym("?isOnFire@LavaSlime@@MEBA_NXZ");
        return (this->*rv)();
    }
    inline bool canDealDamage(){
        bool (LavaSlime::*rv)();
        *((void**)&rv) = dlsym("?canDealDamage@LavaSlime@@MEAA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:
};