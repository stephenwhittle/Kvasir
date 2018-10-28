#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//System control block
    namespace ScbCpuid{    ///<CPUID base register
        using Addr = Register::Address<0xe000ed00,0x00000000,0x00000000,std::uint32_t>;
        ///Revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> revision{}; 
        ///Part number of the              processor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> partno{}; 
        ///Reads as 0xF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> architecture{}; 
        ///Variant number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> variant{}; 
        ///Implementer code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> implementer{}; 
    }
    namespace ScbIcsr{    ///<Interrupt control and state          register
        using Addr = Register::Address<0xe000ed04,0x61b80600,0x00000000,std::uint32_t>;
        ///Active vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> vectactive{}; 
        ///Return to base level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rettobase{}; 
        ///Pending vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,12),Register::ReadWriteAccess,unsigned> vectpending{}; 
        ///Interrupt pending flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> isrpending{}; 
        ///SysTick exception clear-pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pendstclr{}; 
        ///SysTick exception set-pending              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pendstset{}; 
        ///PendSV clear-pending bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> pendsvclr{}; 
        ///PendSV set-pending bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pendsvset{}; 
        ///NMI set-pending bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> nmipendset{}; 
    }
    namespace ScbVtor{    ///<Vector table offset register
        using Addr = Register::Address<0xe000ed08,0x0000007f,0x00000000,std::uint32_t>;
        ///Vector table base offset              field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> tbloff{}; 
    }
    namespace ScbAircr{    ///<Application interrupt and reset control          register
        using Addr = Register::Address<0xe000ed0c,0x00007ff9,0x00000000,std::uint32_t>;
        ///VECTCLRACTIVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vectclractive{}; 
        ///SYSRESETREQ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sysresetreq{}; 
        ///ENDIANESS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> endianess{}; 
        ///Register key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> vectkeystat{}; 
    }
    namespace ScbScr{    ///<System control register
        using Addr = Register::Address<0xe000ed10,0xffffffe9,0x00000000,std::uint32_t>;
        ///SLEEPONEXIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sleeponexit{}; 
        ///SLEEPDEEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sleepdeep{}; 
        ///Send Event on Pending bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> seveonpend{}; 
    }
    namespace ScbCcr{    ///<Configuration and control          register
        using Addr = Register::Address<0xe000ed14,0xfffffce4,0x00000000,std::uint32_t>;
        ///Configures how the processor enters              Thread mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nonbasethrdena{}; 
        ///USERSETMPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usersetmpend{}; 
        ///UNALIGN_ TRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unalignTrp{}; 
        ///DIV_0_TRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> div0Trp{}; 
        ///BFHFNMIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bfhfnmign{}; 
        ///STKALIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stkalign{}; 
    }
    namespace ScbShpr2{    ///<System handler priority          registers
        using Addr = Register::Address<0xe000ed1c,0x00ffffff,0x00000000,std::uint32_t>;
        ///Priority of system handler              11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri11{}; 
    }
    namespace ScbShpr3{    ///<System handler priority          registers
        using Addr = Register::Address<0xe000ed20,0x0000ffff,0x00000000,std::uint32_t>;
        ///Priority of system handler              14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> pri14{}; 
        ///Priority of system handler              15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> pri15{}; 
    }
}
