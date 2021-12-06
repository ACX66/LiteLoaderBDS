// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include "../Global.h"
#define EXTRA_INCLUDE_PART_COMPLEXINVENTORYTRANSACTION
#include "Extra/ComplexInventoryTransactionAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMPLEXINVENTORYTRANSACTION
class ComplexInventoryTransaction {
#include "Extra/ComplexInventoryTransactionAPI.hpp"
public:
    /*0*/ virtual ~ComplexInventoryTransaction();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void postLoadItems(class BlockPalette&, bool);
    /*4*/ virtual int /*enum enum InventoryTransactionError*/ handle(class Player&, bool) const;
    /*5*/ virtual void onTransactionError(class Player&, int /*enum enum InventoryTransactionError*/) const;
    /*
    inline void write(class BinaryStream& a0) const{
        void (ComplexInventoryTransaction::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?write@ComplexInventoryTransaction@@UEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    inline void read(class ReadOnlyBinaryStream& a0){
        void (ComplexInventoryTransaction::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?read@ComplexInventoryTransaction@@UEAAXAEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    */
    MCAPI static std::unique_ptr<class ComplexInventoryTransaction> fromType(enum ComplexInventoryTransaction::Type);
    MCAPI static std::unique_ptr<class ComplexInventoryTransaction> fromType(enum ComplexInventoryTransaction::Type, class InventoryTransaction const&);
    MCAPI static std::string const getTransactionTypeName(enum ComplexInventoryTransaction::Type);

protected:

private:
    MCAPI static class BidirectionalUnorderedMap<enum ComplexInventoryTransaction::Type, std::string > const transactionTypeMap;
};