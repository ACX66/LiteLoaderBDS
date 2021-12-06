// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#include "ScriptObject.hpp"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSIMULATEDPLAYER
#include "Extra/ScriptSimulatedPlayerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSIMULATEDPLAYER
class ScriptSimulatedPlayer : public ScriptObject {
#include "Extra/ScriptSimulatedPlayerAPI.hpp"
public:
    /*0*/ virtual ~ScriptSimulatedPlayer();
    /*1*/ virtual class Scripting::Result<std::string > getNameTag() const;
    /*2*/ virtual class Scripting::Result<void> setNameTag(std::string const&) const;
    /*3*/ virtual class Scripting::Result<bool> getSneaking() const;
    /*4*/ virtual class Scripting::Result<void> setSneaking(bool) const;

    MCAPI class Scripting::Result<bool> attack() const;
    MCAPI class Scripting::Result<bool> attackEntity(class ScriptActor const&) const;
    MCAPI class Scripting::Result<bool> destroyBlock(class BlockPos const&, int) const;
    MCAPI class Scripting::Result<float> getBodyRotation() const;
    MCAPI class Scripting::Result<struct ScriptPitchYawRotation> getHeadRotation();
    MCAPI class Scripting::Result<bool> interact() const;
    MCAPI class Scripting::Result<bool> interactWithBlock(class BlockPos const&, int) const;
    MCAPI class Scripting::Result<bool> interactWithEntity(class ScriptActor const&) const;
    MCAPI class Scripting::Result<bool> jump() const;
    MCAPI class Scripting::Result<void> lookAtBlock(class BlockPos const&) const;
    MCAPI class Scripting::Result<void> lookAtEntity(class ScriptActor const&) const;
    MCAPI class Scripting::Result<void> lookAtLocation(class Vec3 const&) const;
    MCAPI class Scripting::Result<void> move(float, float, float) const;
    MCAPI class Scripting::Result<void> moveRelative(float, float, float) const;
    MCAPI class Scripting::Result<void> moveToBlock(class BlockPos const&, float) const;
    MCAPI class Scripting::Result<void> moveToLocation(class Vec3 const&, float) const;
    MCAPI class Scripting::Result<struct ScriptNavigationResult> navigateToBlock(class BlockPos const&, float) const;
    MCAPI class Scripting::Result<struct ScriptNavigationResult> navigateToEntity(class ScriptActor const&, float) const;
    MCAPI class Scripting::Result<struct ScriptNavigationResult> navigateToLocation(class Vec3 const&, float) const;
    MCAPI class Scripting::Result<void> navigateToLocations(std::vector<class Vec3> const&, float) const;
    MCAPI class Scripting::Result<void> rotateBody(float) const;
    MCAPI class Scripting::Result<void> selectSlot(int) const;
    MCAPI class Scripting::Result<void> setBodyRotation(float) const;
    MCAPI class Scripting::Result<void> stopDestroyingBlock() const;
    MCAPI class Scripting::Result<void> stopInteracting() const;
    MCAPI class Scripting::Result<void> stopMoving() const;
    MCAPI class Scripting::Result<void> stopUsingItem() const;
    MCAPI class SimulatedPlayer* tryGetSimulatedPlayer() const;
    MCAPI class Scripting::Result<bool> useItem(class ScriptItemStack const&) const;
    MCAPI class Scripting::Result<bool> useItemInSlot(int) const;
    MCAPI class Scripting::Result<bool> useItemInSlotOnBlock(int, class BlockPos const&, int, float, float) const;
    MCAPI class Scripting::Result<bool> useItemOnBlock(class ScriptItemStack const&, class BlockPos const&, int, float, float) const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptSimulatedPlayer> bind(struct Scripting::Version);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptSimulatedPlayer> getHandle(class Player const&, class Scripting::WeakLifetimeScope const&);

protected:

private:
    MCAPI static class Vec3 _getFaceLocation(unsigned char, float, float);
    MCAPI static class gametest::BaseGameTestHelper const* _getHelper(class SimulatedPlayer const&);
    MCAPI static class std::optional<struct gametest::GameTestError> _toWorld(class SimulatedPlayer&, class BlockPos*, unsigned char*, class Vec3*);
    MCAPI static struct ScriptNavigationResult _worldToLocalNavigationResult(class SimulatedPlayer&, struct ScriptNavigationResult);
};