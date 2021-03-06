#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//I2C compatible Two-Wire Interface 0
    namespace Twi0TasksStartrx{    ///<Start TWI receive sequence
        using Addr = Register::Address<0x40003000,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0TasksStarttx{    ///<Start TWI transmit sequence
        using Addr = Register::Address<0x40003008,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0TasksStop{    ///<Stop TWI transaction
        using Addr = Register::Address<0x40003014,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0TasksSuspend{    ///<Suspend TWI transaction
        using Addr = Register::Address<0x4000301c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0TasksResume{    ///<Resume TWI transaction
        using Addr = Register::Address<0x40003020,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsStopped{    ///<TWI stopped
        using Addr = Register::Address<0x40003104,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsRxdready{    ///<TWI RXD byte received
        using Addr = Register::Address<0x40003108,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsTxdsent{    ///<TWI TXD byte sent
        using Addr = Register::Address<0x4000311c,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsError{    ///<TWI error
        using Addr = Register::Address<0x40003124,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsBb{    ///<TWI byte boundary, generated before each byte that is sent or received
        using Addr = Register::Address<0x40003138,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0EventsSuspended{    ///<TWI entered the suspended state
        using Addr = Register::Address<0x40003148,0xffffffff,0x00000000,unsigned>;
    }
    namespace Twi0Shorts{    ///<Shortcut register
        using Addr = Register::Address<0x40003200,0xfffffffc,0x00000000,unsigned>;
        ///Shortcut between EVENTS_BB event and TASKS_SUSPEND task
        enum class BbsuspendVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BbsuspendVal> bbSuspend{}; 
        namespace BbsuspendValC{
            constexpr Register::FieldValue<decltype(bbSuspend)::Type,BbsuspendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bbSuspend)::Type,BbsuspendVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_BB event and TASKS_STOP task
        enum class BbstopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BbstopVal> bbStop{}; 
        namespace BbstopValC{
            constexpr Register::FieldValue<decltype(bbStop)::Type,BbstopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bbStop)::Type,BbstopVal::enabled> enabled{};
        }
    }
    namespace Twi0Intenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40003304,0xfffbbd79,0x00000000,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_RXDREADY event
        enum class RxdreadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdreadyVal> rxdready{}; 
        namespace RxdreadyValC{
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TXDSENT event
        enum class TxdsentVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxdsentVal> txdsent{}; 
        namespace TxdsentValC{
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_BB event
        enum class BbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,BbVal> bb{}; 
        namespace BbValC{
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_SUSPENDED event
        enum class SuspendedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,SuspendedVal> suspended{}; 
        namespace SuspendedValC{
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::set> set{};
        }
    }
    namespace Twi0Intenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40003308,0xfffbbd79,0x00000000,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_STOPPED event
        enum class StoppedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,StoppedVal> stopped{}; 
        namespace StoppedValC{
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(stopped)::Type,StoppedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_RXDREADY event
        enum class RxdreadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxdreadyVal> rxdready{}; 
        namespace RxdreadyValC{
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdready)::Type,RxdreadyVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TXDSENT event
        enum class TxdsentVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TxdsentVal> txdsent{}; 
        namespace TxdsentValC{
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txdsent)::Type,TxdsentVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error)::Type,ErrorVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_BB event
        enum class BbVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,BbVal> bb{}; 
        namespace BbValC{
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(bb)::Type,BbVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_SUSPENDED event
        enum class SuspendedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,SuspendedVal> suspended{}; 
        namespace SuspendedValC{
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(suspended)::Type,SuspendedVal::clear> clear{};
        }
    }
    namespace Twi0Errorsrc{    ///<Error source
        using Addr = Register::Address<0x400034c4,0xfffffff8,0x00000000,unsigned>;
        ///Overrun error
        enum class OverrunVal {
            notpresent=0x00000000,     ///<Read: no overrun occured
            present=0x00000001,     ///<Read: overrun occured
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,OverrunVal> overrun{}; 
        namespace OverrunValC{
            constexpr Register::FieldValue<decltype(overrun)::Type,OverrunVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(overrun)::Type,OverrunVal::present> present{};
        }
        ///NACK received after sending the address (write '1' to clear)
        enum class AnackVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AnackVal> anack{}; 
        namespace AnackValC{
            constexpr Register::FieldValue<decltype(anack)::Type,AnackVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(anack)::Type,AnackVal::present> present{};
        }
        ///NACK received after sending a data byte (write '1' to clear)
        enum class DnackVal {
            notpresent=0x00000000,     ///<Read: error not present
            present=0x00000001,     ///<Read: error present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DnackVal> dnack{}; 
        namespace DnackValC{
            constexpr Register::FieldValue<decltype(dnack)::Type,DnackVal::notpresent> notpresent{};
            constexpr Register::FieldValue<decltype(dnack)::Type,DnackVal::present> present{};
        }
    }
    namespace Twi0Enable{    ///<Enable TWI
        using Addr = Register::Address<0x40003500,0xfffffff0,0x00000000,unsigned>;
        ///Enable or disable TWI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace Twi0Pselscl{    ///<Pin select for SCL
        using Addr = Register::Address<0x40003508,0x00000000,0x00000000,unsigned>;
        ///Pin number configuration for TWI SCL signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselscl{}; 
    }
    namespace Twi0Pselsda{    ///<Pin select for SDA
        using Addr = Register::Address<0x4000350c,0x00000000,0x00000000,unsigned>;
        ///Pin number configuration for TWI SDA signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pselsda{}; 
    }
    namespace Twi0Rxd{    ///<RXD register
        using Addr = Register::Address<0x40003518,0xffffff00,0x00000000,unsigned>;
        ///RXD register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxd{}; 
    }
    namespace Twi0Txd{    ///<TXD register
        using Addr = Register::Address<0x4000351c,0xffffff00,0x00000000,unsigned>;
        ///TXD register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Twi0Frequency{    ///<TWI frequency
        using Addr = Register::Address<0x40003524,0x00000000,0x00000000,unsigned>;
        ///TWI master clock frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> frequency{}; 
    }
    namespace Twi0Address{    ///<Address used in the TWI transfer
        using Addr = Register::Address<0x40003588,0xffffff80,0x00000000,unsigned>;
        ///Address used in the TWI transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> address{}; 
    }
}
