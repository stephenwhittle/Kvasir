#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Oscillator
    namespace OscCr{    ///<OSC Control Register
        using Addr = Register::Address<0x40045000,0xffffff00,0x00000000,unsigned char>;
        ///OSC Initialization
        enum class OscinitVal {
            v0=0x00000000,     ///<Oscillator initialization not completes.
            v1=0x00000001,     ///<Oscillator initialization completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,OscinitVal> oscinit{}; 
        namespace OscinitValC{
            constexpr Register::FieldValue<decltype(oscinit)::Type,OscinitVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oscinit)::Type,OscinitVal::v1> v1{};
        }
        ///High Gain Oscillator Select
        enum class HgoVal {
            v0=0x00000000,     ///<Low power mode.
            v1=0x00000001,     ///<High gain mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HgoVal> hgo{}; 
        namespace HgoValC{
            constexpr Register::FieldValue<decltype(hgo)::Type,HgoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hgo)::Type,HgoVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///OSC Output Select
        enum class OscosVal {
            v0=0x00000000,     ///<External clock source from EXTAL pin is selected.
            v1=0x00000001,     ///<Oscillator clock source is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OscosVal> oscos{}; 
        namespace OscosValC{
            constexpr Register::FieldValue<decltype(oscos)::Type,OscosVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oscos)::Type,OscosVal::v1> v1{};
        }
        ///OSC Enable in Stop mode
        enum class OscstenVal {
            v0=0x00000000,     ///<OSC clock is disabled in stop.
            v1=0x00000001,     ///<OSC clock stays enabled in stop.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OscstenVal> oscsten{}; 
        namespace OscstenValC{
            constexpr Register::FieldValue<decltype(oscsten)::Type,OscstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oscsten)::Type,OscstenVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///OSC Enable
        enum class OscenVal {
            v0=0x00000000,     ///<OSC module disabled.
            v1=0x00000001,     ///<OSC module enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,OscenVal> oscen{}; 
        namespace OscenValC{
            constexpr Register::FieldValue<decltype(oscen)::Type,OscenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oscen)::Type,OscenVal::v1> v1{};
        }
    }
}
