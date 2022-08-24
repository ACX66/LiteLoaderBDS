/**
 * @file  NullSoundPlayer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NullSoundPlayer.
 *
 */
class NullSoundPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSOUNDPLAYER
public:
    class NullSoundPlayer& operator=(class NullSoundPlayer const &) = delete;
    NullSoundPlayer(class NullSoundPlayer const &) = delete;
    NullSoundPlayer() = delete;
#endif

public:
    /**
     * @note   Virtual function table index: 0
     * @symbol 
     */
    virtual ~NullSoundPlayer();
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
     * @symbol ?getCurrentlyPlayingMusicName@NullSoundPlayer@@UEAA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName();
    /**
     * @note   Virtual function table index: 16
     * @symbol 
     */
    virtual void __unk_vfn_16();
    /**
     * @note   Virtual function table index: 17
     * @symbol ?registerLoop@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXAEAULoopingSoundState@@@Z@3@MM@Z
     */
    virtual unsigned __int64 registerLoop(std::string const &, class std::function<void (struct LoopingSoundState &)>, float, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSOUNDPLAYER
    /**
     * @note   Virtual function table index: -1
     * @symbol ?fadeOut@NullSoundPlayer@@UEAAX_KM@Z
     */
    MCVAPI void fadeOut(unsigned __int64, float);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?fadeToStopMusic@NullSoundPlayer@@UEAAXM@Z
     */
    MCVAPI void fadeToStopMusic(float);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?getItem@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@AEAVSoundItem@@@Z
     */
    MCVAPI bool getItem(std::string const &, class Core::Path const &, class SoundItem &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isLoadingMusic@NullSoundPlayer@@UEBA_NXZ
     */
    MCVAPI bool isLoadingMusic() const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isPlayingMusic@NullSoundPlayer@@UEBA_NAEBVPath@Core@@@Z
     */
    MCVAPI bool isPlayingMusic(class Core::Path const &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isPlayingMusicEvent@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI bool isPlayingMusicEvent(std::string const &) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?isPlayingSound@NullSoundPlayer@@UEBA_N_K@Z
     */
    MCVAPI bool isPlayingSound(unsigned __int64) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?play@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     */
    MCVAPI unsigned __int64 play(std::string const &, class Vec3 const &, float, float);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?playAttached@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXAEAUSoundInstanceProperties@@@Z@3@@Z
     */
    MCVAPI unsigned __int64 playAttached(std::string const &, class std::function<void (struct SoundInstanceProperties &)> &&);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MAEAI@Z
     */
    MCVAPI void playMusic(std::string const &, float, unsigned int &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
     */
    MCVAPI void playMusic(std::string const &, float);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?playUI@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MM@Z
     */
    MCVAPI unsigned __int64 playUI(std::string const &, float, float);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?setMusicVolumeMultiplier@NullSoundPlayer@@UEAAXM@Z
     */
    MCVAPI void setMusicVolumeMultiplier(float);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?stop@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void stop(std::string const &);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?stop@NullSoundPlayer@@UEAAX_K@Z
     */
    MCVAPI void stop(unsigned __int64);
    /**
     * @note   Virtual function table index: -1
     * @symbol ?stopAllDelayedSoundActions@NullSoundPlayer@@UEAAXXZ
     */
    MCVAPI void stopAllDelayedSoundActions();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?stopAllSounds@NullSoundPlayer@@UEAAXXZ
     */
    MCVAPI void stopAllSounds();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?stopMusic@NullSoundPlayer@@UEAAXXZ
     */
    MCVAPI void stopMusic();
    /**
     * @note   Virtual function table index: -1
     * @symbol ?tryGetLoopingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@ULoopingSoundAttributes@@@std@@_K@Z
     */
    MCVAPI class std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(unsigned __int64) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?tryGetPlayingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@UPlayingSoundAttributes@@@std@@_K@Z
     */
    MCVAPI class std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(unsigned __int64) const;
    /**
     * @note   Virtual function table index: -1
     * @symbol ?unregisterLoop@NullSoundPlayer@@UEAAX_K_N@Z
     */
    MCVAPI void unregisterLoop(unsigned __int64, bool);
#endif

};