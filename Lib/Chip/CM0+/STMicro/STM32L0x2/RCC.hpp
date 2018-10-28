#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Reset and clock control
    namespace RccCr{    ///<Clock control register
        using Addr = Register::Address<0x40021000,0xfcc0fcc0,0x00000000,std::uint32_t>;
        ///PLL clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pllrdy{}; 
        ///PLL enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pllon{}; 
        ///TC/LCD prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> rtcpre{}; 
        ///Clock security system on HSE enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> csslseon{}; 
        ///HSE clock bypass bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> hsebyp{}; 
        ///HSE clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hserdy{}; 
        ///HSE clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> hseon{}; 
        ///MSI clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msirdy{}; 
        ///MSI clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msion{}; 
        ///HSI16DIVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsi16divf{}; 
        ///HSI16DIVEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hsi16diven{}; 
        ///Internal high-speed clock ready              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsi16rdyf{}; 
        ///High-speed internal clock enable bit for              some IP kernels
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsi16keron{}; 
        ///16 MHz high-speed internal clock              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsi16on{}; 
        ///16 MHz high-speed internal clock output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> hsi16outen{}; 
    }
    namespace RccIcscr{    ///<Internal clock sources calibration          register
        using Addr = Register::Address<0x40021004,0x00000000,0x00000000,std::uint32_t>;
        ///MSI clock trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> msitrim{}; 
        ///MSI clock calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> msical{}; 
        ///MSI clock ranges
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> msirange{}; 
        ///High speed internal clock              trimming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> hsi16trim{}; 
        ///nternal high speed clock              calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsi16cal{}; 
    }
    namespace RccCrrcr{    ///<Clock recovery RC register
        using Addr = Register::Address<0x40021008,0xffff00f8,0x00000000,std::uint32_t>;
        ///48 MHz HSI clock              calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsi48cal{}; 
        ///48MHz HSI clock ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hsi48rdy{}; 
        ///48MHz HSI clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hsi48on{}; 
        ///48 MHz HSI clock divided by 6 output              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsi48div6en{}; 
    }
    namespace RccCfgr{    ///<Clock configuration register
        using Addr = Register::Address<0x4002100c,0x80024000,0x00000000,std::uint32_t>;
        ///Microcontroller clock output              prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> mcopre{}; 
        ///Microcontroller clock output              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> mcosel{}; 
        ///PLL output division
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> plldiv{}; 
        ///PLL multiplication factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> pllmul{}; 
        ///PLL entry clock source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pllsrc{}; 
        ///Wake-up from stop clock              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> stopwuck{}; 
        ///APB high-speed prescaler              (APB2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,unsigned> ppre2{}; 
        ///APB low-speed prescaler              (APB1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ppre1{}; 
        ///AHB prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> hpre{}; 
        ///System clock switch status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sws{}; 
        ///System clock switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sw{}; 
    }
    namespace RccCier{    ///<Clock interrupt enable          register
        using Addr = Register::Address<0x40021010,0xffffff00,0x00000000,std::uint32_t>;
        ///LSE CSS interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csslse{}; 
        ///HSI48 ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hsi48rdyie{}; 
        ///MSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msirdyie{}; 
        ///PLL ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllrdyie{}; 
        ///HSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyie{}; 
        ///HSI16 ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsi16rdyie{}; 
        ///LSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyie{}; 
        ///LSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyie{}; 
    }
    namespace RccCifr{    ///<Clock interrupt flag register
        using Addr = Register::Address<0x40021014,0xfffffe00,0x00000000,std::uint32_t>;
        ///Clock Security System Interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csshsef{}; 
        ///LSE Clock Security System Interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csslsef{}; 
        ///HSI48 ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hsi48rdyf{}; 
        ///MSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msirdyf{}; 
        ///PLL ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllrdyf{}; 
        ///HSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyf{}; 
        ///HSI16 ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsi16rdyf{}; 
        ///LSE ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyf{}; 
        ///LSI ready interrupt flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyf{}; 
    }
    namespace RccCicr{    ///<Clock interrupt clear register
        using Addr = Register::Address<0x40021018,0xfffffe00,0x00000000,std::uint32_t>;
        ///Clock Security System Interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csshsec{}; 
        ///LSE Clock Security System Interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> csslsec{}; 
        ///HSI48 ready Interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> hsi48rdyc{}; 
        ///MSI ready Interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msirdyc{}; 
        ///PLL ready Interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pllrdyc{}; 
        ///HSE ready Interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hserdyc{}; 
        ///HSI16 ready Interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsi16rdyc{}; 
        ///LSE ready Interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lserdyc{}; 
        ///LSI ready Interrupt clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsirdyc{}; 
    }
    namespace RccIoprstr{    ///<GPIO reset register
        using Addr = Register::Address<0x4002101c,0xffffff60,0x00000000,std::uint32_t>;
        ///I/O port H reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iophrst{}; 
        ///I/O port D reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iopdrst{}; 
        ///I/O port A reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iopcrst{}; 
        ///I/O port B reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iopbrst{}; 
        ///I/O port A reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ioparst{}; 
        ///I/O port E reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ioperst{}; 
    }
    namespace RccAhbrstr{    ///<AHB peripheral reset register
        using Addr = Register::Address<0x40021020,0xfeeeeefe,0x00000000,std::uint32_t>;
        ///Crypto module reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cryprst{}; 
        ///Random Number Generator module              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rngrst{}; 
        ///Touch Sensing reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> touchrst{}; 
        ///Test integration module              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcrst{}; 
        ///Memory interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mifrst{}; 
        ///DMA reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmarst{}; 
    }
    namespace RccApb2rstr{    ///<APB2 peripheral reset register
        using Addr = Register::Address<0x40021024,0xffbfadda,0x00000000,std::uint32_t>;
        ///DBG reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgrst{}; 
        ///USART1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1rst{}; 
        ///SPI 1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1rst{}; 
        ///ADC interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adcrst{}; 
        ///TIM22 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tm12rst{}; 
        ///TIM21 timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim21rst{}; 
        ///System configuration controller              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgrst{}; 
    }
    namespace RccApb1rstr{    ///<APB1 peripheral reset register
        using Addr = Register::Address<0x40021028,0x0701b7cc,0x00000000,std::uint32_t>;
        ///Low power timer reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1rst{}; 
        ///DAC interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacrst{}; 
        ///Power interface reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrrst{}; 
        ///Clock recovery system              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crsrst{}; 
        ///USB reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///I2C2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2rst{}; 
        ///I2C1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1rst{}; 
        ///LPUART1 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> lpuart1rst{}; 
        ///UART2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lpuart12rst{}; 
        ///SPI2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2rst{}; 
        ///Window watchdog reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdrst{}; 
        ///Timer 6 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6rst{}; 
        ///Timer2 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2rst{}; 
        ///Timer3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3rst{}; 
        ///Timer 7 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7rst{}; 
        ///USART4 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> usart4rst{}; 
        ///USART5 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> usart5rst{}; 
        ///I2C3 reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> i2c3rst{}; 
    }
    namespace RccIopenr{    ///<GPIO clock enable register
        using Addr = Register::Address<0x4002102c,0xffffff60,0x00000000,std::uint32_t>;
        ///I/O port H clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iophen{}; 
        ///I/O port D clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iopden{}; 
        ///IO port A clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iopcen{}; 
        ///IO port B clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iopben{}; 
        ///IO port A clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iopaen{}; 
        ///I/O port E clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iopeen{}; 
    }
    namespace RccAhbenr{    ///<AHB peripheral clock enable          register
        using Addr = Register::Address<0x40021030,0xfeeeeefe,0x00000000,std::uint32_t>;
        ///Crypto clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> crypen{}; 
        ///Random Number Generator clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rngen{}; 
        ///Touch Sensing clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> touchen{}; 
        ///CRC clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcen{}; 
        ///NVM interface clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mifen{}; 
        ///DMA clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmaen{}; 
    }
    namespace RccApb2enr{    ///<APB2 peripheral clock enable          register
        using Addr = Register::Address<0x40021034,0xffbfad5a,0x00000000,std::uint32_t>;
        ///DBG clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgen{}; 
        ///USART1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1en{}; 
        ///SPI1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1en{}; 
        ///ADC clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adcen{}; 
        ///MiFaRe Firewall clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mifien{}; 
        ///TIM22 timer clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim22en{}; 
        ///TIM21 timer clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim21en{}; 
        ///System configuration controller clock              enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgen{}; 
    }
    namespace RccApb1enr{    ///<APB1 peripheral clock enable          register
        using Addr = Register::Address<0x40021038,0x0701b7cc,0x00000000,std::uint32_t>;
        ///Low power timer clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1en{}; 
        ///DAC interface clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacen{}; 
        ///Power interface clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwren{}; 
        ///Clock recovery system clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crsen{}; 
        ///USB clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usben{}; 
        ///I2C2 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2en{}; 
        ///I2C1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1en{}; 
        ///LPUART1 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> lpuart1en{}; 
        ///UART2 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2en{}; 
        ///SPI2 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2en{}; 
        ///Window watchdog clock enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgen{}; 
        ///Timer 6 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6en{}; 
        ///Timer2 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2en{}; 
        ///Timer3 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3en{}; 
        ///Timer 7 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7en{}; 
        ///USART4 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> usart4en{}; 
        ///USART5 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> usart5en{}; 
        ///I2C3 clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> i2c3en{}; 
    }
    namespace RccIopsmen{    ///<GPIO clock enable in sleep mode          register
        using Addr = Register::Address<0x4002103c,0xffffff60,0x00000000,std::uint32_t>;
        ///IOPHSMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iophsmen{}; 
        ///IOPDSMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iopdsmen{}; 
        ///IOPCSMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iopcsmen{}; 
        ///IOPBSMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iopbsmen{}; 
        ///IOPASMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iopasmen{}; 
        ///Port E clock enable during Sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iopesmen{}; 
    }
    namespace RccAhbsmenr{    ///<AHB peripheral clock enable in sleep mode          register
        using Addr = Register::Address<0x40021040,0xfeeeecfe,0x00000000,std::uint32_t>;
        ///Crypto clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> crypsmen{}; 
        ///Random Number Generator clock enable              during sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rngsmen{}; 
        ///Touch Sensing clock enable during sleep              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> touchsmen{}; 
        ///CRC clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> crcsmen{}; 
        ///SRAM interface clock enable during sleep              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sramsmen{}; 
        ///NVM interface clock enable during sleep              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mifsmen{}; 
        ///DMA clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dmasmen{}; 
    }
    namespace RccApb2smenr{    ///<APB2 peripheral clock enable in sleep mode          register
        using Addr = Register::Address<0x40021044,0xffbfadda,0x00000000,std::uint32_t>;
        ///DBG clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dbgsmen{}; 
        ///USART1 clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> usart1smen{}; 
        ///SPI1 clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1smen{}; 
        ///ADC clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> adcsmen{}; 
        ///TIM22 timer clock enable during sleep              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim22smen{}; 
        ///TIM21 timer clock enable during sleep              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tim21smen{}; 
        ///System configuration controller clock              enable during sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> syscfgsmen{}; 
    }
    namespace RccApb1smenr{    ///<APB1 peripheral clock enable in sleep mode          register
        using Addr = Register::Address<0x40021048,0x0701b7cc,0x00000000,std::uint32_t>;
        ///Low power timer clock enable during              sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lptim1smen{}; 
        ///DAC interface clock enable during sleep              mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dacsmen{}; 
        ///Power interface clock enable during              sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pwrsmen{}; 
        ///Clock recovery system clock enable              during sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> crssmen{}; 
        ///USB clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> usbsmen{}; 
        ///I2C2 clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> i2c2smen{}; 
        ///I2C1 clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> i2c1smen{}; 
        ///LPUART1 clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> lpuart1smen{}; 
        ///UART2 clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> usart2smen{}; 
        ///SPI2 clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2smen{}; 
        ///Window watchdog clock enable during              sleep mode bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> wwdgsmen{}; 
        ///Timer 6 clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tim6smen{}; 
        ///Timer2 clock enable during sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tim2smen{}; 
        ///Timer3 clock enable during Sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tim3smen{}; 
        ///Timer 7 clock enable during Sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim7smen{}; 
        ///USART4 clock enable during Sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> usart4smen{}; 
        ///USART5 clock enable during Sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> usart5smen{}; 
        ///2C3 clock enable during Sleep mode              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> i2c3smen{}; 
    }
    namespace RccCcipr{    ///<Clock configuration register
        using Addr = Register::Address<0x4002104c,0xfbf0c3f0,0x00000000,std::uint32_t>;
        ///48 MHz HSI48 clock source selection              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> hsi48msel{}; 
        ///Low Power Timer clock source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> lptim1sel1{}; 
        ///LPTIM1SEL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> lptim1sel0{}; 
        ///I2C1 clock source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> i2c1sel1{}; 
        ///I2C1SEL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> i2c1sel0{}; 
        ///LPUART1 clock source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lpuart1sel1{}; 
        ///LPUART1SEL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lpuart1sel0{}; 
        ///USART2 clock source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usart2sel1{}; 
        ///USART2SEL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usart2sel0{}; 
        ///USART1 clock source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usart1sel1{}; 
        ///USART1SEL0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usart1sel0{}; 
        ///I2C3 clock source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> i2c3sel{}; 
    }
    namespace RccCsr{    ///<Control and status register
        using Addr = Register::Address<0x40021050,0x00f080fc,0x00000000,std::uint32_t>;
        ///Low-power reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lpwrstf{}; 
        ///Window watchdog reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> wwdgrstf{}; 
        ///Independent watchdog reset              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iwdgrstf{}; 
        ///Software reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sftrstf{}; 
        ///POR/PDR reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> porrstf{}; 
        ///PIN reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> pinrstf{}; 
        ///OBLRSTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> oblrstf{}; 
        ///Remove reset flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmvf{}; 
        ///RTC software reset bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rtcrst{}; 
        ///RTC clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rtcen{}; 
        ///RTC and LCD clock source selection              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> rtcsel{}; 
        ///CSS on LSE failure detection              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> csslsed{}; 
        ///CSSLSEON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> csslseon{}; 
        ///LSEDRV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> lsedrv{}; 
        ///External low-speed oscillator bypass              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lsebyp{}; 
        ///External low-speed oscillator ready              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lserdy{}; 
        ///External low-speed oscillator enable              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lseon{}; 
        ///Internal low-speed oscillator ready              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lsirdy{}; 
        ///Internal low-speed oscillator              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lsion{}; 
    }
}
