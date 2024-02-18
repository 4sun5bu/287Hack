#define FWAIT    while(!(PINC & 0b00000001))
#define WAIT_PRQ while(!(PINC & 0b00000010))
#define ACK_PRQ  PORTA = PORTA & 0b11110111   
#define FREE_PRQ PORTA = PORTA | 0b00001000 

#define FLD32(d)    wrOpWr2(0xd900, (d)) 
#define FILD32(d)   wrOpWr2(0xdb00, (d))
#define FLD64(d)    wrOpwr4(0xdd00, (d))
#define FILD16(d)   wrOpWr1(0xdf00, (d))
#define FLD(i)      wrOp(0xd9c0 | ((i) & 0x03)) 

#define FST32       wrOpRd2(0xd910)
#define FIST32      wrOpRd2(0xdb10)
#define FST64       wrOpRd4(0xdd10)
#define FIST16      wrOpRD1(0xdf10)
#define FST(i)      wrOpc(0xddd0 | ((i) & 0x03))

#define FSTP32      wrOpRd2(0xd918)
#define FISTP32     wrOpRd2(0xdb18)
#define FSTP64      wrOpRd4(0xdd18)
#define FISTP16     wrOpRd1(0xdf18)
#define FSTP(i)     wrOpc(0xddd8 | ((i) & 0x03))
#define FXCH(i)     wrOpc(0xd9c8 | ((i) & 0x03))

#define FCOM(i)     wrOpc(0xd8d0 | ((i) & 0x03))
#define FCOMP(i)    wrOpc(0xd8d8 | ((i) & 0x03))
#define FCOMPP      wrOpc(0xded9)
#define FTST        wrOpc(0xd0e4)
#define FUCOM(i)    wrOpc(0xdde0 | ((i) & 0x03))
#define FUCOMP(i)   wrOpc(0xdde8 | ((i) & 0x03))
#define FUCOMPP     wrOpc(0xdae9)
#define FXAM        wrOpc(0xd9e5)

#define FLDZ        wrOpc(0xd9ee)
#define FLD1        wrOpc(0xd9e8)
#define FLDPI       wrOpc(0xd9eb)
#define FLDL2T      wrOpc(0xd9e9)
#define FLDL2E      wrOpc(0xd9ea)
#define FLDLG2      wrOpc(0xd9ec)
#define FLDLN2      wrOpc(0xd9ed)

#define FADD32(d)   wrOpWr2(0xd800, (d)) 
#define FIADD32(d)  wrOpWr2(0xde00, (d))
#define FADD64(d)   wrOpWr4(0xdc00, (d))
#define FIADD16(d)  wrOpWr1(0xda00, (d))
#define FADD(i)     wrOpc(0xd8c0 | ((i) & 0x03))  /* FADD ST, ST(i) */
#define FADDd(i)    wrOpc(0xdcc0 | ((i) & 0x03))  /* FADD ST(i), ST */
#define FADDPd(i)   wrOpc(0xdec0 | ((i) & 0x03))  /* FADDP ST(i), ST */

#define FSUB32(d)   wrOpWr2(0xd820, (d))
#define FISUB32(d)  wrOpWr2(0xde20, (d))
#define FSUB64(d)   wrOpWr4(0xdc20, (d))
#define FISUB16(d)  wrOpWr1(0xda20, (d))
#define FSUB(i)     wrOpc(0xd8e0 | ((i) & 0x03))  /* FSUB ST, ST(i) */
#define FSUBd(i)    wrOpc(0xdce8 | ((i) & 0x03))  /* FSUB ST(i), ST */
#define FSUBPd(i)   wrOpc(0x0de8 | ((i) & 0x03))  /* FSUBP ST(i), ST */
#define FSUBR32(d)  wrOpWr2(0xd828, (d)) 
#define FISUBR32(d) wrOpWr2(0xde28, (d))
#define FSUBR64(d)  wrOpWr4(0xdc28, (d))
#define FISUBR16(d) wrOpWr1(0xda28, (d))
#define FSUBR(i)    wrOpc(0xd8e8 | ((i) & 0x03))  /* FSUBR ST, ST(i) */
#define FSUBRd(i)   wrOpc(0xdce0 | ((i) & 0x03))  /* FSUBR ST(i), ST */
#define FSUBRPd(i)  wrOpc(0xdee0 | ((i) & 0x03))  /* FSUBRP ST(i), ST */

#define FMUL32(d)   wrOpWr2(0xd808, (d))          /* FMUL ST, m32 */
#define FIMUL32(d)  wrOpWr2(0xde08, (d))          /* FIMUL ST, m32 */
#define FMUL64(d)   wrOpWr4(0xdc08, (d))          /* FMUL ST, m64 */
#define FIMUL16(d)  wrOpWr1(0xda08, (d))          /* FIMUL ST, m16 */
#define FMUL(i)     wrOpc(0xd8c8 | ((i) & 0x03))  /* FMUL ST(0), ST(i) */
#define FMULd(i)    wrOpc(0xdcc8 | ((i) & 0x03))  /* FMUL ST(i), ST(0) */
#define FMULPd(i)   wrOpc(0xdec8 | ((i) & 0x03))  /* FMULP ST(i), ST(0) */

#define FDIV32(d)   wrOpWr2(0xd830, (d))
#define FIDIV32(d)  wrOpWr2(0xde30, (d))
#define FDIV64(d)   wrOpWr4(0xdc30, (d))
#define FIDIV16(d)  wrOpWr1(0xda30, (d))
#define FDIV(i)     wrOpc(0xd8f0 | ((i) & 0x03))  /* FDIV ST, ST(i) */
#define FDIVd(i)    wrOpc(0xdcf8 | ((i) & 0x03))  /* FDIV ST(i), ST */
#define FDIVPd(i)   wrOpc(0x0df8 | ((i) & 0x03))  /* FDIVP ST(i), ST */
#define FDIVR32(d)  wrOpWr2(0xd838, (d))
#define FIDIVR32(d) wrOpWr2(0xde38, (d))
#define FDIVR64(d)  wrOpWr4(0xdc38, (d))
#define FIDIVR16(d) wrOpWr1(0xda38, (d))
#define FDIVR(i)    wrOpc(0xd8f8 | ((i) & 0x03))  /* FDIVR ST, ST(i) */
#define FDIVRd(i)   wrOpc(0xdcf0 | ((i) & 0x03))  /* FSUBR ST(i), ST */
#define FDIVRPd(i)  wrOpc(0xdef0 | ((i) & 0x03))  /* FSUBRP ST(i), ST */

#define FSQRT     wrOpc(0xd9fa)
#define FSCALE    wrOpc(0xd9fd)
#define FPREM     wrOpc(0xd9f8)
#define FPREM1    wrOpc(0xd9f5)
#define FRNDINT   wrOpc(0xd9fc)
#define FXTRACT   wrOpc(0xd0f4)
#define FABS      wrOpc(0xd9e1)
#define FCHS      wrOpc(0xd9e0)

#define FCOS      wrOpc(0xd9ff)
#define FPTAN     wrOpc(0xd9f2)
#define FPATAN    wrOpc(0xd9f3)
#define FSIN      wrOpc(0xd9fe)
#define FSINCOS   wrOpc(0xd9fb)
#define F2XM1     wrOpc(0xd9f0)
#define FYL2XM    wrOpc(0xd9f1)
#define FYL2XP1   wrOpc(0xd9f9)

#define FINIT     wrOpc(0xdbe3)
#define FSETPM    wrOpc(0xdbe4)
#define FRSTPM    wrOpc(0xdbf4)
#define FSTSWR    wrOpRdCS(0xdfe0)                /* FSTSW AX */
#define FLDCW     wrOpWr1(0xd928, (d))
#define FSTCW     wrOpRdCS(0xd938)
#define FSTSW     wrOpRdCS(0xdd38)
#define FCLEX     wrOpc(0xdbe2)   

#define FINCSTP   wrOpc(0xd9f7)
#define FDECSTP   wrOpc(0xd9f6)
#define FFREE(i)  wrOpc(0xddc0 | ((i) & 0x03))
#define FNOP      wrOpc(0xd9d0)

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  DDRA = 0xff;    /* PORTA OUTPUT */
  DDRC = 0x00;    /* PORTC INPUT */
  PORTF = 0xff;   /* PORTF PULUP */
  DDRF = 0x00;    /* PORTF INPUT */
  PORTK = 0xff;   /* PORTK PULLUP */
  DDRK = 0x00;    /* PORTK INPUT */
  PORTA = 0b01111111; 

  Serial.begin(9600);
}

unsigned din() {
  DDRF = 0x00;
  DDRK = 0x00;
  //PORTF = 0xff;   /* Pull up */
  //PORTK = 0xff;   /* Pull up */
  return (PINF << 8) | PINK;
}

void dout(unsigned data) {
  DDRF = 0xff;
  DDRK = 0xff;
  PORTF = data >> 8;
  PORTK = data & 0xff;
}

void rstFPU() {
  PORTA = 0b01111111;
  delay(1);
  PORTA = 0b01101111;
  delay(1);
  FWAIT;
}

int chkError() {
  return PINC & 0b00000100;
}

void wrOp(unsigned opc) {
  unsigned swapped;
  swapped = (opc << 8) | (opc >> 8);
  PORTA = 0b11101000; /* NPS2=H CMD0=L CMD1=L NPS#=L */ 
  dout(swapped);      /* opc */
  PORTA = 0b10101000; /* NPS2=H CMD0=L CMD1=L NPS#=L NPWR#=L */  
  PORTA = 0b01101000; /* NPS2=L CMD0=L CMD1=L NPS#=L NPWR#=H */
}

unsigned rdCwSw() {
  unsigned data;
  PORTA = 0b11101000; /* NPS2=H CMD0=L CMD1=L NPS#=L */ 
  PORTA = 0b11001000; /* NPS2=H CMD0=L CMD1=L NPS#=L NPRD#=L */  
  data = din();       /* read data */
  PORTA = 0b01101000; /* NPS2=L CMD0=L CMD1=L NPS#=L NPRD#=H */
  return data;
}

void wrData(unsigned data) {
  PORTA = 0b11101001; /* NPS2=H CMD0=H CMD1=L NPS#=L */
  dout(data);         /* opc */
  PORTA = 0b10101001; /* NPS2=H CMD0=H CMD1=L NPS#=L NPWR#=L */  
  PORTA = 0b01101001; /* NPS2=L CMD0=H CMD1=L NPS#=L NPWR#=H */
  din(); 
}

unsigned rdData() {
  unsigned data;
  PORTA = 0b11101001; /* NPS2=H CMD0=H CMD1=L NPS#=L */ 
  PORTA = 0b11001001; /* NPS2=H CMD0=H CMD1=L NPS#=L NPRD#=L */  
  data = din();       /* read data */
  PORTA = 0b01101001; /* NPS2=L CMD0=H CMD1=L NPS#=L NPRD#=H */
  return data;
}

void wrExc(unsigned data) {
  PORTA = 0b11101010; /* NPS2=H CMD0=L CMD1=H NPS#=L */ 
  dout(data);         /* data */
  PORTA = 0b10101010; /* NPS2=H CMD0=L CMD1=H NPS#=L NPWR#=L */  
  PORTA = 0b01101010; /* NPS2=L CMD0=L CMD1=H NPS#=L NPWR#=H */
  din(); 
}

void wrOpc(unsigned opc) {
  wrOp(opc);
  FWAIT;
}

void wrOpWr1(unsigned opc, unsigned d) {
  wrOp(opc);
  WAIT_PRQ;
  ACK_PRQ;
  wrData(d);
  FREE_PRQ;
  FWAIT;
}

void wrOpWr2(unsigned opc, unsigned long d) {
  wrOp(opc);
  WAIT_PRQ;
  ACK_PRQ;
  wrData(d & 0xffff);
  WAIT_PRQ;
  wrData(d >> 16);
  FREE_PRQ;
  FWAIT;
}

void wrOpWr4(unsigned opc, unsigned long long d) {
  wrOp(opc);
  WAIT_PRQ;
  ACK_PRQ;
  wrData(d & 0xffff);
  WAIT_PRQ;
  wrData(d >> 16);
  WAIT_PRQ;
  wrData(d >> 32);
  WAIT_PRQ;
  wrData(d >> 48);
  FREE_PRQ;
  FWAIT;
}

unsigned wrOpRd1(unsigned opc) {
  unsigned d;

  wrOp(opc);
  WAIT_PRQ;
  ACK_PRQ;
  d = rdData();
  FREE_PRQ;
  return d;
}

unsigned long wrOpRd2(unsigned opc) {
  unsigned long d1, d0;

  wrOp(opc);
  WAIT_PRQ;
  ACK_PRQ;
  d0 = rdData();
  WAIT_PRQ;
  d1 = rdData();
  FREE_PRQ;
  return (d1 << 16 | d0);
}

unsigned long long wrOpRd4(unsigned opc) {
  unsigned long long d3, d2, d1, d0;

  wrOp(opc);
  WAIT_PRQ;
  ACK_PRQ;
  d0 = rdData();
  WAIT_PRQ;
  d1 = rdData();
  WAIT_PRQ;
  d2 = rdData();
  WAIT_PRQ;
  d3 = rdData();
  FREE_PRQ;
  return ((d3 << 48) | (d2 << 32) | (d1 << 16) | d0);
}

unsigned wrOpRdCS(unsigned opc) {
  unsigned d;

  wrOp(opc);
  d = rdCwSw();
  FWAIT;
  return d;
}

void loop() { 
  int x, y, i;
  unsigned long ca, cb, t, a, b;
  unsigned long d;
  float v;

  rstFPU();
  
  for (y = -12; y <= 12; y++) {
    for (x = -39; x <= 39; x++) {
      FWAIT;
      FILD16(x);
      FMUL32(0x3d3b98c8);
      ca = FSTP32;
      FILD16(y);
      FMUL32(0x3daaa8eb);
      cb = FSTP32;
      a = ca;
      b = cb;

      for (i = 0; i <= 15; i++) {
        //t = a * a - b * b + ca;
        FLD32(b);
        FMUL(0);
        FLD32(a);
        FMUL(0);
        FSUB(1);
        FADD32(ca);
        t = FSTP32;
        FFREE(0);

        //b = 2 * a * b + cb;
        FILD16(2);
        FMUL32(a);
        FMUL32(b);
        FADD32(cb);
        b = FSTP32;
        a = t;

        // v = a * a + b * b;
        FLD32(a);
        FMUL(0);
        FLD32(b);
        FMUL(0);
        FADD(1);
        d = FSTP32;
        FFREE(0);
        memcpy(&v, &d, 4);
        if (v > 4)
          break;
      }
      if (i <= 15) {
        if (i > 9)
          i += 7;
        Serial.write(0x30 + i);
      } else {
        Serial.print(" ");
      }
    }
    Serial.print("\n");  
  }

  Serial.println(millis());
  while(1);
} 
