#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//External interrupt/event      controller
    namespace ExtiImr{    ///<Interrupt mask register          (EXTI_IMR)
        using Addr = Register::Address<0x40010400,0xc8000000,0x00000000,std::uint32_t>;
        ///Interrupt Mask on line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> im0{}; 
        ///Interrupt Mask on line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> im1{}; 
        ///Interrupt Mask on line 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> im2{}; 
        ///Interrupt Mask on line 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> im3{}; 
        ///Interrupt Mask on line 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> im4{}; 
        ///Interrupt Mask on line 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> im5{}; 
        ///Interrupt Mask on line 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> im6{}; 
        ///Interrupt Mask on line 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> im7{}; 
        ///Interrupt Mask on line 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> im8{}; 
        ///Interrupt Mask on line 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> im9{}; 
        ///Interrupt Mask on line 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> im10{}; 
        ///Interrupt Mask on line 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> im11{}; 
        ///Interrupt Mask on line 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> im12{}; 
        ///Interrupt Mask on line 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> im13{}; 
        ///Interrupt Mask on line 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> im14{}; 
        ///Interrupt Mask on line 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> im15{}; 
        ///Interrupt Mask on line 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> im16{}; 
        ///Interrupt Mask on line 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> im17{}; 
        ///Interrupt Mask on line 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> im18{}; 
        ///Interrupt Mask on line 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> im19{}; 
        ///Interrupt Mask on line 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> im20{}; 
        ///Interrupt Mask on line 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> im21{}; 
        ///Interrupt Mask on line 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> im22{}; 
        ///Interrupt Mask on line 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> im23{}; 
        ///Interrupt Mask on line 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> im24{}; 
        ///Interrupt Mask on line 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> im25{}; 
        ///Interrupt Mask on line 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> im26{}; 
        ///Interrupt Mask on line 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> im28{}; 
        ///Interrupt Mask on line 27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> im29{}; 
    }
    namespace ExtiEmr{    ///<Event mask register (EXTI_EMR)
        using Addr = Register::Address<0x40010404,0xc8000000,0x00000000,std::uint32_t>;
        ///Event Mask on line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> em0{}; 
        ///Event Mask on line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> em1{}; 
        ///Event Mask on line 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> em2{}; 
        ///Event Mask on line 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> em3{}; 
        ///Event Mask on line 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> em4{}; 
        ///Event Mask on line 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> em5{}; 
        ///Event Mask on line 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> em6{}; 
        ///Event Mask on line 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> em7{}; 
        ///Event Mask on line 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> em8{}; 
        ///Event Mask on line 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> em9{}; 
        ///Event Mask on line 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> em10{}; 
        ///Event Mask on line 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> em11{}; 
        ///Event Mask on line 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> em12{}; 
        ///Event Mask on line 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> em13{}; 
        ///Event Mask on line 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> em14{}; 
        ///Event Mask on line 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> em15{}; 
        ///Event Mask on line 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> em16{}; 
        ///Event Mask on line 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> em17{}; 
        ///Event Mask on line 18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> em18{}; 
        ///Event Mask on line 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> em19{}; 
        ///Event Mask on line 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> em20{}; 
        ///Event Mask on line 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> em21{}; 
        ///Event Mask on line 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> em22{}; 
        ///Event Mask on line 23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> em23{}; 
        ///Event Mask on line 24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> em24{}; 
        ///Event Mask on line 25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> em25{}; 
        ///Event Mask on line 26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> em26{}; 
        ///Event Mask on line 28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> em28{}; 
        ///Event Mask on line 29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> em29{}; 
    }
    namespace ExtiRtsr{    ///<Rising Trigger selection register          (EXTI_RTSR)
        using Addr = Register::Address<0x40010408,0xff840000,0x00000000,std::uint32_t>;
        ///Rising trigger event configuration of              line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rt0{}; 
        ///Rising trigger event configuration of              line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rt1{}; 
        ///Rising trigger event configuration of              line 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rt2{}; 
        ///Rising trigger event configuration of              line 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rt3{}; 
        ///Rising trigger event configuration of              line 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rt4{}; 
        ///Rising trigger event configuration of              line 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rt5{}; 
        ///Rising trigger event configuration of              line 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rt6{}; 
        ///Rising trigger event configuration of              line 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rt7{}; 
        ///Rising trigger event configuration of              line 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rt8{}; 
        ///Rising trigger event configuration of              line 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rt9{}; 
        ///Rising trigger event configuration of              line 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rt10{}; 
        ///Rising trigger event configuration of              line 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rt11{}; 
        ///Rising trigger event configuration of              line 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rt12{}; 
        ///Rising trigger event configuration of              line 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rt13{}; 
        ///Rising trigger event configuration of              line 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rt14{}; 
        ///Rising trigger event configuration of              line 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rt15{}; 
        ///Rising trigger event configuration of              line 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rt16{}; 
        ///Rising trigger event configuration of              line 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rt17{}; 
        ///Rising trigger event configuration of              line 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rt19{}; 
        ///Rising trigger event configuration of              line 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rt20{}; 
        ///Rising trigger event configuration of              line 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rt21{}; 
        ///Rising trigger event configuration of              line 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rt22{}; 
    }
    namespace ExtiFtsr{    ///<Falling Trigger selection register          (EXTI_FTSR)
        using Addr = Register::Address<0x4001040c,0xff840000,0x00000000,std::uint32_t>;
        ///Falling trigger event configuration of              line 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ft0{}; 
        ///Falling trigger event configuration of              line 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ft1{}; 
        ///Falling trigger event configuration of              line 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ft2{}; 
        ///Falling trigger event configuration of              line 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ft3{}; 
        ///Falling trigger event configuration of              line 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ft4{}; 
        ///Falling trigger event configuration of              line 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ft5{}; 
        ///Falling trigger event configuration of              line 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ft6{}; 
        ///Falling trigger event configuration of              line 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ft7{}; 
        ///Falling trigger event configuration of              line 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ft8{}; 
        ///Falling trigger event configuration of              line 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ft9{}; 
        ///Falling trigger event configuration of              line 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ft10{}; 
        ///Falling trigger event configuration of              line 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ft11{}; 
        ///Falling trigger event configuration of              line 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ft12{}; 
        ///Falling trigger event configuration of              line 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ft13{}; 
        ///Falling trigger event configuration of              line 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ft14{}; 
        ///Falling trigger event configuration of              line 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ft15{}; 
        ///Falling trigger event configuration of              line 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ft16{}; 
        ///Falling trigger event configuration of              line 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ft17{}; 
        ///Falling trigger event configuration of              line 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ft19{}; 
        ///Falling trigger event configuration of              line 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ft20{}; 
        ///Falling trigger event configuration of              line 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ft21{}; 
        ///Falling trigger event configuration of              line 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ft22{}; 
    }
    namespace ExtiSwier{    ///<Software interrupt event register          (EXTI_SWIER)
        using Addr = Register::Address<0x40010410,0xff840000,0x00000000,std::uint32_t>;
        ///Software Interrupt on line              0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swi0{}; 
        ///Software Interrupt on line              1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swi1{}; 
        ///Software Interrupt on line              2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> swi2{}; 
        ///Software Interrupt on line              3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> swi3{}; 
        ///Software Interrupt on line              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swi4{}; 
        ///Software Interrupt on line              5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> swi5{}; 
        ///Software Interrupt on line              6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swi6{}; 
        ///Software Interrupt on line              7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swi7{}; 
        ///Software Interrupt on line              8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swi8{}; 
        ///Software Interrupt on line              9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> swi9{}; 
        ///Software Interrupt on line              10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> swi10{}; 
        ///Software Interrupt on line              11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> swi11{}; 
        ///Software Interrupt on line              12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> swi12{}; 
        ///Software Interrupt on line              13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> swi13{}; 
        ///Software Interrupt on line              14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> swi14{}; 
        ///Software Interrupt on line              15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swi15{}; 
        ///Software Interrupt on line              16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> swi16{}; 
        ///Software Interrupt on line              17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> swi17{}; 
        ///Software Interrupt on line              19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> swi19{}; 
        ///Software Interrupt on line              20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> swi20{}; 
        ///Software Interrupt on line              21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> swi21{}; 
        ///Software Interrupt on line              22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> swi22{}; 
    }
    namespace ExtiPr{    ///<Pending register (EXTI_PR)
        using Addr = Register::Address<0x40010414,0xff840000,0x00000000,std::uint32_t>;
        ///Pending bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pif0{}; 
        ///Pending bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pif1{}; 
        ///Pending bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pif2{}; 
        ///Pending bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pif3{}; 
        ///Pending bit 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pif4{}; 
        ///Pending bit 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pif5{}; 
        ///Pending bit 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pif6{}; 
        ///Pending bit 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pif7{}; 
        ///Pending bit 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pif8{}; 
        ///Pending bit 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pif9{}; 
        ///Pending bit 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pif10{}; 
        ///Pending bit 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pif11{}; 
        ///Pending bit 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pif12{}; 
        ///Pending bit 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pif13{}; 
        ///Pending bit 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pif14{}; 
        ///Pending bit 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pif15{}; 
        ///Pending bit 16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pif16{}; 
        ///Pending bit 17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pif17{}; 
        ///Pending bit 19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pif19{}; 
        ///Pending bit 20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pif20{}; 
        ///Pending bit 21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pif21{}; 
        ///Pending bit 22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> pif22{}; 
    }
}
