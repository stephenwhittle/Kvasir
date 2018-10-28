#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System configuration controller and      Comparator
    namespace SyscfgCompCfgr1{    ///<SYSCFG configuration register          1
        using Addr = Register::Address<0x40010000,0xfffffcfc,0x00000000,std::uint32_t>;
        ///Boot mode selected by the boot pins              status bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bootMode{}; 
        ///Memory mapping selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> memMode{}; 
    }
    namespace SyscfgCompCfgr2{    ///<SYSCFG configuration register          2
        using Addr = Register::Address<0x40010004,0xffffc0fe,0x00000000,std::uint32_t>;
        ///I2C2 Fm+ drive capability enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> i2c2Fmp{}; 
        ///I2C1 Fm+ drive capability enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> i2c1Fmp{}; 
        ///Fm+ drive capability on PB9 enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> i2cPb9Fmp{}; 
        ///Fm+ drive capability on PB8 enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> i2cPb8Fmp{}; 
        ///Fm+ drive capability on PB7 enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> i2cPb7Fmp{}; 
        ///Fm+ drive capability on PB6 enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> i2cPb6Fmp{}; 
        ///Firewall disable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fwdisen{}; 
    }
    namespace SyscfgCompExticr1{    ///<external interrupt configuration register          1
        using Addr = Register::Address<0x40010008,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 0 to              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        ///EXTI x configuration (x = 0 to              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        ///EXTI x configuration (x = 0 to              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        ///EXTI x configuration (x = 0 to              3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
    }
    namespace SyscfgCompExticr2{    ///<external interrupt configuration register          2
        using Addr = Register::Address<0x4001000c,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 4 to              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        ///EXTI x configuration (x = 4 to              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        ///EXTI x configuration (x = 4 to              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        ///EXTI x configuration (x = 4 to              7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
    }
    namespace SyscfgCompExticr3{    ///<external interrupt configuration register          3
        using Addr = Register::Address<0x40010010,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 8 to              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        ///EXTI10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        ///EXTI x configuration (x = 8 to              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        ///EXTI x configuration (x = 8 to              11)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
    }
    namespace SyscfgCompExticr4{    ///<external interrupt configuration register          4
        using Addr = Register::Address<0x40010014,0xffff0000,0x00000000,std::uint32_t>;
        ///EXTI x configuration (x = 12 to              15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        ///EXTI14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        ///EXTI13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        ///EXTI12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
    }
    namespace SyscfgCompCfgr3{    ///<SYSCFG configuration register          3
        using Addr = Register::Address<0x40010020,0x03ffccce,0x00000000,std::uint32_t>;
        ///REF_CTRL lock bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> refLock{}; 
        ///VREFINT ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vrefintRdyf{}; 
        ///VREFINT for comparator ready              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vrefintCompRdyf{}; 
        ///VREFINT for ADC ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> vrefintAdcRdyf{}; 
        ///Sensor for ADC ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sensorAdcRdyf{}; 
        ///VREFINT for 48 MHz RC oscillator ready              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> refRc48mhzRdyf{}; 
        ///VREFINT reference for 48 MHz RC              oscillator enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enrefRc48mhz{}; 
        ///VREFINT reference for comparator 2              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enbufVrefintComp{}; 
        ///Sensor reference for ADC enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> enbufSensorAdc{}; 
        ///VREFINT reference for ADC enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enbufBgapAdc{}; 
        ///BGAP_ADC connection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> selVrefOut{}; 
        ///Vref Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enBgap{}; 
    }
    namespace SyscfgCompComp1Csr{    ///<Comparator 1 control and status          register
        using Addr = Register::Address<0x40010018,0x3fff6ece,0x00000000,std::uint32_t>;
        ///COMP1_CSR register lock              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp1lock{}; 
        ///Comparator 1 output status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp1value{}; 
        ///Comparator 1 polarity selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp1polarity{}; 
        ///Comparator 1 LPTIM input propagation              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> comp1lptimin1{}; 
        ///Comparator 1 window mode selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> comp1wm{}; 
        ///Comparator 1 Input Minus connection              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> comp1innsel{}; 
        ///Comparator 1 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp1en{}; 
    }
    namespace SyscfgCompComp2Csr{    ///<Comparator 2 control and status          register
        using Addr = Register::Address<0x4001001c,0x7fef4886,0x00000000,std::uint32_t>;
        ///COMP2_CSR register lock              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp2lock{}; 
        ///Comparator 2 output status              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> comp2value{}; 
        ///Comparator 2 polarity selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> comp2polarity{}; 
        ///Comparator 2 LPTIM input 1 propagation              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> comp2lptimin1{}; 
        ///Comparator 2 LPTIM input 2 propagation              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> comp2lptimin2{}; 
        ///Comparator 2 Input Plus connection              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> comp2inpsel{}; 
        ///Comparator 2 Input Minus connection              configuration bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> comp2innsel{}; 
        ///Comparator 2 power mode selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> comp2speed{}; 
        ///Comparator 2 enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> comp2en{}; 
    }
}
