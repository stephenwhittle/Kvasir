#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Cyclic redundancy check calculation      unit
    namespace CrcDr{    ///<Data register
        using Addr = Register::Address<0x40023000,0x00000000,0x00000000,std::uint32_t>;
        ///Data register bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dr{}; 
    }
    namespace CrcIdr{    ///<Independent data register
        using Addr = Register::Address<0x40023004,0xffffff00,0x00000000,std::uint32_t>;
        ///General-purpose 8-bit data register              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> idr{}; 
    }
    namespace CrcCr{    ///<Control register
        using Addr = Register::Address<0x40023008,0xffffff06,0x00000000,std::uint32_t>;
        ///Reverse output data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> revOut{}; 
        ///Reverse input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> revIn{}; 
        ///Polynomial size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> polysize{}; 
        ///RESET bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reset{}; 
    }
    namespace CrcInit{    ///<Initial CRC value
        using Addr = Register::Address<0x40023010,0x00000000,0x00000000,std::uint32_t>;
        ///Programmable initial CRC              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> crcInit{}; 
    }
    namespace CrcPol{    ///<polynomial
        using Addr = Register::Address<0x40023014,0x00000000,0x00000000,std::uint32_t>;
        ///Programmable polynomial
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> polynomialcoefficients{}; 
    }
}
