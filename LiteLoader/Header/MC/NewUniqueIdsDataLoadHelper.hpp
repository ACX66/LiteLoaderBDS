/**
 * @file  NewUniqueIdsDataLoadHelper.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "InternalComponentRegistry.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NewUniqueIdsDataLoadHelper.
 *
 */
class NewUniqueIdsDataLoadHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEWUNIQUEIDSDATALOADHELPER
public:
    class NewUniqueIdsDataLoadHelper& operator=(class NewUniqueIdsDataLoadHelper const &) = delete;
    NewUniqueIdsDataLoadHelper(class NewUniqueIdsDataLoadHelper const &) = delete;
    NewUniqueIdsDataLoadHelper() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~NewUniqueIdsDataLoadHelper();
    /**
     * @note   Virtual function table index: 1
     * @symbol 
     */
    virtual void __unk_vfn_1();
    /**
     * @note   Virtual function table index: 2
     * @symbol 
     */
    virtual void __unk_vfn_2();
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
     * @symbol 
     */
    virtual void __unk_vfn_6();
    /**
     * @note   Virtual function table index: 7
     * @symbol 
     */
    virtual void __unk_vfn_7();
    /**
     * @note   Virtual function table index: 8
     * @symbol 
     */
    virtual void __unk_vfn_8();
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
     * @symbol ?loadActorUniqueID@NewUniqueIdsDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
     */
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    /**
     * @note   Virtual function table index: 14
     * @symbol ?loadOwnerID@NewUniqueIdsDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
     */
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);
    /**
     * @note   Virtual function table index: 15
     * @symbol ?loadActorInternalComponentInfo@NewUniqueIdsDataLoadHelper@@UEAAPEBUComponentInfo@InternalComponentRegistry@@AEBV?$unordered_map@VHashedString@@UComponentInfo@InternalComponentRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UComponentInfo@InternalComponentRegistry@@@std@@@5@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
     */
    virtual struct InternalComponentRegistry::ComponentInfo const * loadActorInternalComponentInfo(class std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct InternalComponentRegistry::ComponentInfo>>> const &, std::string const &);
    /**
     * @note   Virtual function table index: 16
     * @symbol ?getType@NewUniqueIdsDataLoadHelper@@UEBA?AW4DataLoadHelperType@@XZ
     */
    virtual enum DataLoadHelperType getType() const;
    /**
     * @note   Virtual function table index: 17
     * @symbol ?shouldResetTime@NewUniqueIdsDataLoadHelper@@UEAA_NXZ
     */
    virtual bool shouldResetTime();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEWUNIQUEIDSDATALOADHELPER
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadBlockPosition@NewUniqueIdsDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
     */
    MCVAPI class BlockPos loadBlockPosition(class BlockPos const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadBlockPositionOffset@NewUniqueIdsDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
     */
    MCVAPI class BlockPos loadBlockPositionOffset(class BlockPos const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadDirection@NewUniqueIdsDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
     */
    MCVAPI class Vec3 loadDirection(class Vec3 const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadDirection@NewUniqueIdsDataLoadHelper@@UEAA?AW4Type@Direction@@W423@@Z
     */
    MCVAPI enum Direction::Type loadDirection(enum Direction::Type);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadFacingID@NewUniqueIdsDataLoadHelper@@UEAAEE@Z
     */
    MCVAPI unsigned char loadFacingID(unsigned char);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadMirror@NewUniqueIdsDataLoadHelper@@UEAA?AW4Mirror@@W42@@Z
     */
    MCVAPI enum Mirror loadMirror(enum Mirror);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadPosition@NewUniqueIdsDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
     */
    MCVAPI class Vec3 loadPosition(class Vec3 const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadRotation@NewUniqueIdsDataLoadHelper@@UEAA?AW4Rotation@@W42@@Z
     */
    MCVAPI enum Rotation loadRotation(enum Rotation);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadRotationDegreesX@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     */
    MCVAPI float loadRotationDegreesX(float);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadRotationDegreesY@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     */
    MCVAPI float loadRotationDegreesY(float);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadRotationRadiansX@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     */
    MCVAPI float loadRotationRadiansX(float);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?loadRotationRadiansY@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
     */
    MCVAPI float loadRotationRadiansY(float);
#endif
    /**
     * @symbol ??0NewUniqueIdsDataLoadHelper@@QEAA@AEAVILevel@@@Z
     */
    MCAPI NewUniqueIdsDataLoadHelper(class ILevel &);

};