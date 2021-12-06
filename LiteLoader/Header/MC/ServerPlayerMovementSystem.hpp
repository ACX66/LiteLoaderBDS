// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_SERVERPLAYERMOVEMENTSYSTEM
#include "Extra/ServerPlayerMovementSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERVERPLAYERMOVEMENTSYSTEM
class ServerPlayerMovementSystem {
#include "Extra/ServerPlayerMovementSystemAPI.hpp"
public:
    /*0*/ virtual ~ServerPlayerMovementSystem();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void tick(class EntityRegistry&);

    MCAPI static void _foreachTransactionPacket(struct PlayerActionComponent const&, bool, class std::function<void (class InventoryTransactionPacket& )> const&);
    MCAPI static void _tickPlayerMovement(struct PlayerCurrentTickComponent const&, struct ServerPlayerMovementComponent&, class std::function<void (class PlayerAuthInputPacket const& )> const&);
    MCAPI static void onPlayerAuthInputPacket(struct ServerPlayerMovementComponent&, class PlayerAuthInputPacket const&);

protected:

private:
};