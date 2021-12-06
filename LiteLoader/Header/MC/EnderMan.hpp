// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "Monster.hpp"
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_ENDERMAN
#include "Extra/EnderManAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENDERMAN
class EnderMan : public Monster {
#include "Extra/EnderManAPI.hpp"
public:
    /*0*/ virtual ~EnderMan();
    /*1*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void normalTick();
    /*6*/ virtual float getRidingHeight();
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual float getCameraOffset() const;
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual void __unk_vfn_5();
    /*12*/ virtual void playerTouch(class Player&);
    /*13*/ virtual void __unk_vfn_6();
    /*14*/ virtual void __unk_vfn_7();
    /*15*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*16*/ virtual void __unk_vfn_8();
    /*17*/ virtual void __unk_vfn_9();
    /*18*/ virtual void __unk_vfn_10();
    /*19*/ virtual void __unk_vfn_11();
    /*20*/ virtual bool isValidTarget(class Actor*) const;
    /*21*/ virtual void adjustDamageAmount(int&) const;
    /*22*/ virtual void onTame();
    /*23*/ virtual void onFailedTame();
    /*24*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*25*/ virtual bool shouldRender() const;
    /*26*/ virtual int /*enum enum LevelSoundEvent*/ getAmbientSound() const;
    /*27*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*28*/ virtual float getPickRadius();
    /*29*/ virtual void awardKillScore(class Actor&, int);
    /*30*/ virtual class HashedString const& queryEntityRenderer() const;
    /*31*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*32*/ virtual int getPortalWaitTime() const;
    /*33*/ virtual bool canChangeDimensions() const;
    /*34*/ virtual void __unk_vfn_12();
    /*35*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*36*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*37*/ virtual bool canBePulledIntoVehicle() const;
    /*38*/ virtual void __unk_vfn_13();
    /*39*/ virtual bool canSynchronizeNewEntity() const;
    /*40*/ virtual bool canBeAffectedByArrow(class MobEffectInstance const&) const;
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
    /*52*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*53*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*54*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*55*/ virtual void __unk_vfn_20();
    /*56*/ virtual void __unk_vfn_21();
    /*57*/ virtual void spawnAnim();
    /*58*/ virtual bool hurtEffects(class ActorDamageSource const&, int, bool, bool);
    /*59*/ virtual void aiStep();
    /*60*/ virtual bool checkSpawnRules(bool);
    /*61*/ virtual int getItemUseDuration() const;
    /*62*/ virtual float getItemUseStartupProgress() const;
    /*63*/ virtual float getItemUseIntervalProgress() const;
    /*64*/ virtual void __unk_vfn_22();
    /*65*/ virtual bool isAlliedTo(class Mob*);
    /*66*/ virtual void __unk_vfn_23();
    /*67*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*68*/ virtual void onBorn(class Actor&, class Actor&);
    /*69*/ virtual int getAttackTime();
    /*70*/ virtual void __unk_vfn_24();
    /*71*/ virtual void newServerAiStep();
    /*72*/ virtual void _serverAiMobStep();
    /*73*/ virtual void __unk_vfn_25();

    MCAPI class Block const& getCarryingBlock();
    MCAPI void setCarryingBlock(class Block const&);
    MCAPI static class std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_ATTACKING;
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACKING_UUID;
    MCAPI static class std::set<class Block const* , struct std::less<class Block const* >, class std::allocator<class Block const* > > mMayTake;
    MCAPI static void shutdown();

protected:

private:
    MCAPI static bool mMayTakeIsSetup;
};