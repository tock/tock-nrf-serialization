#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/arm-none-eabi/4.8.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef unsigned int wchar_t;
# 8 "/usr/local/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 27 "/usr/lib/gcc/arm-none-eabi/4.8.2/../../../arm-none-eabi/include/machine/_default_types.h" 3
typedef signed char __int8_t;
typedef unsigned char __uint8_t;








typedef short int __int16_t;
typedef short unsigned int __uint16_t;
#line 55
typedef long int __int32_t;
typedef long unsigned int __uint32_t;
#line 77
typedef long long int __int64_t;
typedef long long unsigned int __uint64_t;
#line 104
typedef signed char __int_least8_t;
typedef unsigned char __uint_least8_t;
#line 126
typedef short int __int_least16_t;
typedef short unsigned int __uint_least16_t;
#line 144
typedef long int __int_least32_t;
typedef long unsigned int __uint_least32_t;
#line 158
typedef long long int __int_least64_t;
typedef long long unsigned int __uint_least64_t;








typedef int __intptr_t;
typedef unsigned int __uintptr_t;
# 41 "/usr/lib/gcc/arm-none-eabi/4.8.2/../../../arm-none-eabi/include/stdint.h" 3
typedef __int8_t int8_t;
typedef __uint8_t uint8_t;




typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int16_t int16_t;
typedef __uint16_t uint16_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int32_t int32_t;
typedef __uint32_t uint32_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int64_t int64_t;
typedef __uint64_t uint64_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;










typedef int int_fast8_t;
typedef unsigned int uint_fast8_t;








typedef int int_fast16_t;
typedef unsigned int uint_fast16_t;








typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;








typedef long long int int_fast64_t;
typedef long long unsigned int uint_fast64_t;
#line 174
typedef long long int intmax_t;








typedef long long unsigned int uintmax_t;






typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;
# 283 "/usr/lib/gcc/arm-none-eabi/4.8.2/../../../arm-none-eabi/include/inttypes.h" 3
#line 280
typedef struct __nesc_unnamed4242 {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;
# 431 "/usr/local/lib/ncc/nesc_nx.h"
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 6 "/usr/lib/gcc/arm-none-eabi/4.8.2/../../../arm-none-eabi/include/sys/lock.h" 3
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 16 "/usr/lib/gcc/arm-none-eabi/4.8.2/../../../arm-none-eabi/include/sys/_types.h" 3
typedef long _off_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



__extension__ 
#line 31
typedef long long _off64_t;







typedef long _fpos_t;
#line 55
typedef signed int _ssize_t;
# 353 "/usr/lib/gcc/arm-none-eabi/4.8.2/include/stddef.h" 3
typedef unsigned int wint_t;
# 79 "/usr/lib/gcc/arm-none-eabi/4.8.2/../../../arm-none-eabi/include/sys/_types.h" 3
#line 71
typedef struct __nesc_unnamed4243 {

  int __count;
  union __nesc_unnamed4244 {

    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;




typedef void *_iconv_t;
# 22 "/usr/lib/gcc/arm-none-eabi/4.8.2/../../../arm-none-eabi/include/sys/reent.h" 3
typedef unsigned long __ULong;
#line 38
struct _reent;






struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
  void *_fnargs[32];
  void *_dso_handle[32];

  __ULong _fntypes;


  __ULong _is_cxa;
};










struct _atexit {
  struct _atexit *_next;
  int _ind;

  void (*_fns[32])(void );
  struct _on_exit_args _on_exit_args;
};
#line 115
struct __sbuf {
  unsigned char *_base;
  int _size;
};
#line 179
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void *_cookie;

  int (*_read)(struct _reent *arg_0x2b4e9b47b500, void *arg_0x2b4e9b47b7c0, char *arg_0x2b4e9b47ba80, int arg_0x2b4e9b47bd00);

  int (*_write)(struct _reent *arg_0x2b4e9b4824a0, void *arg_0x2b4e9b482760, const char *arg_0x2b4e9b482a60, int arg_0x2b4e9b482ce0);


  _fpos_t (*_seek)(struct _reent *arg_0x2b4e9b4804e0, void *arg_0x2b4e9b4807a0, _fpos_t arg_0x2b4e9b480a70, int arg_0x2b4e9b480cf0);
  int (*_close)(struct _reent *arg_0x2b4e9b47f4a0, void *arg_0x2b4e9b47f760);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
#line 285
typedef struct __sFILE __FILE;



struct _glue {

  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
#line 317
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
#line 569
struct _reent {

  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x2b4e9b493b60);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4245 {

    struct __nesc_unnamed4246 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
      _mbstate_t _mblen_state;
      _mbstate_t _mbtowc_state;
      _mbstate_t _wctomb_state;
      char _l64a_buf[8];
      char _signal_buf[24];
      int _getdate_err;
      _mbstate_t _mbrlen_state;
      _mbstate_t _mbrtowc_state;
      _mbstate_t _mbsrtowcs_state;
      _mbstate_t _wcrtomb_state;
      _mbstate_t _wcsrtombs_state;
      int _h_errno;
    } _reent;



    struct __nesc_unnamed4247 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**_sig_func)(int arg_0x2b4e9b499380);




  struct _glue __sglue;
  __FILE __sf[3];
};
#line 762
struct _reent;
struct _reent;
# 25 "/usr/lib/gcc/arm-none-eabi/4.8.2/../../../arm-none-eabi/include/string.h" 3
void *memset(void *arg_0x2b4e9b4a48d0, int arg_0x2b4e9b4a4b50, size_t arg_0x2b4e9b4a4e10);
# 34 "/usr/lib/gcc/arm-none-eabi/4.8.2/../../../arm-none-eabi/include/stdlib.h" 3
#line 30
typedef struct __nesc_unnamed4248 {

  int quot;
  int rem;
} div_t;





#line 36
typedef struct __nesc_unnamed4249 {

  long quot;
  long rem;
} ldiv_t;








#line 45
typedef struct __nesc_unnamed4250 {

  long long int quot;
  long long int rem;
} lldiv_t;




typedef int (*__compar_fn_t)(const void *arg_0x2b4e9b4eb490, const void *arg_0x2b4e9b4eb790);
# 14 "/usr/lib/gcc/arm-none-eabi/4.8.2/../../../arm-none-eabi/include/math.h" 3
union __dmath {

  double d;
  __ULong i[2];
};

union __fmath {

  float f;
  __ULong i[1];
};


union __ldmath {

  long double ld;
  __ULong i[4];
};
#line 154
typedef float float_t;
typedef double double_t;
#line 519
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 574
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 25 "/home/tbauer/helena/stormport//tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4251 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/home/tbauer/helena/stormport//tos/types/TinyError.h"
enum __nesc_unnamed4252 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 54 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/cortexm4hardware.h"
typedef uint32_t __nesc_atomic_t;

__inline __nesc_atomic_t __nesc_atomic_start()  __attribute((always_inline)) ;
#line 70
__inline void __nesc_atomic_end(__nesc_atomic_t oldState)  __attribute((always_inline)) ;
#line 82
static __inline void __nesc_enable_interrupt() __attribute((always_inline)) ;
#line 94
static __inline void __nesc_disable_interrupt() __attribute((always_inline)) ;
# 19 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/systickhardware.h"
#line 7
typedef union __nesc_unnamed4253 {

  uint32_t flat;
  struct __nesc_unnamed4254 {

    uint32_t enable : 1;
    uint32_t tickint : 1;
    uint32_t clksource : 1;
    uint32_t reserved0 : 13;
    uint32_t countflag : 1;
    uint32_t reserved1 : 15;
  } __attribute((__packed__))  bits;
} systick_csr_t;







#line 21
typedef struct __nesc_unnamed4255 {

  systick_csr_t csr;
  uint32_t rvr;
  uint32_t cvr;
} 
systick_t;

systick_t volatile *const SYSTICK = (systick_t volatile *)0xE000E010;
# 50 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/sam4lpmhardware.h"
#line 42
typedef union __nesc_unnamed4256 {

  uint32_t flat;
  struct __nesc_unnamed4257 {

    uint32_t mcsel : 3;
    uint32_t reserved0 : 29;
  } __attribute((__packed__))  bits;
} pm_mcctrl_t;

enum __nesc_unnamed4258 {
  MCSEL_RCSYS, 
  MCSCEL_OSC0, 
  MCSEL_PLL, 
  MCSEL_DFLL, 
  MCSEL_RC80M, 
  MCSEL_RCFAST, 
  MCSEL_RC1M
};
#line 72
#line 62
typedef union __nesc_unnamed4259 {

  uint32_t flat;
  struct __nesc_unnamed4260 {

    uint32_t cpusel : 3;
    uint32_t reserved0 : 4;
    uint32_t cpudiv : 1;
    uint32_t reserved1 : 24;
  } __attribute((__packed__))  bits;
} pm_cpusel_t;
#line 84
#line 74
typedef union __nesc_unnamed4261 {

  uint32_t flat;
  struct __nesc_unnamed4262 {

    uint32_t pbsel : 3;
    uint32_t reserved0 : 4;
    uint32_t pbdiv : 1;
    uint32_t reserved1 : 24;
  } __attribute((__packed__))  bits;
} pm_pbxsel_t;









#line 86
typedef union __nesc_unnamed4263 {

  uint32_t flat;
  struct __nesc_unnamed4264 {

    uint32_t ocd : 1;
    uint32_t reserved0 : 31;
  } __attribute((__packed__))  bits;
} pm_cpumask_t;
#line 113
#line 96
typedef union __nesc_unnamed4265 {

  uint32_t flat;
  struct __nesc_unnamed4266 {

    uint32_t pdca : 1;
    uint32_t flashcalw : 1;
    uint32_t flashcalw_sram : 1;
    uint32_t usbc : 1;
    uint32_t crccu : 1;
    uint32_t apba : 1;
    uint32_t apbb : 1;
    uint32_t apbc : 1;
    uint32_t apbd : 1;
    uint32_t aesa : 1;
    uint32_t reserved0 : 22;
  } __attribute((__packed__))  bits;
} pm_hsbmask_t;
#line 146
#line 115
typedef union __nesc_unnamed4267 {

  uint32_t flat;
  struct __nesc_unnamed4268 {

    uint32_t iisc : 1;
    uint32_t spi : 1;
    uint32_t tc0 : 1;
    uint32_t tc1 : 1;
    uint32_t twim0 : 1;
    uint32_t twis0 : 1;
    uint32_t twim1 : 1;
    uint32_t twis1 : 1;
    uint32_t usart0 : 1;
    uint32_t usart1 : 1;
    uint32_t usart2 : 1;
    uint32_t usart3 : 1;
    uint32_t adcife : 1;
    uint32_t dacc : 1;
    uint32_t acifc : 1;
    uint32_t gloc : 1;
    uint32_t abdacb : 1;
    uint32_t trng : 1;
    uint32_t parc : 1;
    uint32_t catb : 1;
    uint32_t reserved0 : 1;
    uint32_t twim2 : 1;
    uint32_t twim3 : 1;
    uint32_t lcdca : 1;
    uint32_t reserved1 : 8;
  } __attribute((__packed__))  bits;
} pm_pbamask_t;
#line 162
#line 148
typedef union __nesc_unnamed4269 {

  uint32_t flat;
  struct __nesc_unnamed4270 {

    uint32_t flashcalw : 1;
    uint32_t hramc1 : 1;
    uint32_t hmatrix : 1;
    uint32_t pdca : 1;
    uint32_t crccu : 1;
    uint32_t usbc : 1;
    uint32_t pevc : 1;
    uint32_t reserved0 : 26;
  } __attribute((__packed__))  bits;
} pm_pbbmask_t;
#line 176
#line 164
typedef union __nesc_unnamed4271 {

  uint32_t flat;
  struct __nesc_unnamed4272 {

    uint32_t pm : 1;
    uint32_t chipid : 1;
    uint32_t scif : 1;
    uint32_t freqm : 1;
    uint32_t gpio : 1;
    uint32_t reserved0 : 27;
  } __attribute((__packed__))  bits;
} pm_pbcmask_t;
#line 191
#line 178
typedef union __nesc_unnamed4273 {

  uint32_t flat;
  struct __nesc_unnamed4274 {

    uint32_t bpm : 1;
    uint32_t bscif : 1;
    uint32_t ast : 1;
    uint32_t wdt : 1;
    uint32_t eic : 1;
    uint32_t picouart : 1;
    uint32_t reserved0 : 26;
  } __attribute((__packed__))  bits;
} pm_pbdmask_t;









#line 193
typedef union __nesc_unnamed4275 {

  uint32_t flat;
  struct __nesc_unnamed4276 {

    uint32_t mask : 7;
    uint32_t reserved0 : 25;
  } __attribute((__packed__))  bits;
} pm_pbadivmask_t;
#line 216
#line 203
typedef union __nesc_unnamed4277 {

  uint32_t flat;
  struct __nesc_unnamed4278 {

    uint32_t cfd : 1;
    uint32_t reserved0 : 4;
    uint32_t ckrdy : 1;
    uint32_t reserved1 : 2;
    uint32_t wake : 1;
    uint32_t reserved2 : 22;
    uint32_t ae : 1;
  } __attribute((__packed__))  bits;
} pm_interrupt_t;
#line 236
#line 218
typedef union __nesc_unnamed4279 {

  uint32_t flat;
  struct __nesc_unnamed4280 {

    uint32_t rstpun : 1;
    uint32_t catbrcmask : 1;
    uint32_t acifcrcmask : 1;
    uint32_t astrcmask : 1;
    uint32_t twisorcmask : 1;
    uint32_t twis1rcmask : 1;
    uint32_t pevcrcmask : 1;
    uint32_t adcifercmask : 1;
    uint32_t vregrcmask : 1;
    uint32_t fwbgref : 1;
    uint32_t fwbod18 : 1;
    uint32_t reserved1 : 21;
  } __attribute((__packed__))  bits;
} pm_ppcr_t;
#line 257
#line 238
typedef union __nesc_unnamed4281 {

  uint32_t flat;
  struct __nesc_unnamed4282 {

    uint32_t por : 1;
    uint32_t bod : 1;
    uint32_t ext : 1;
    uint32_t wdt : 1;
    uint32_t reserved0 : 2;
    uint32_t bkup : 1;
    uint32_t reserved1 : 1;
    uint32_t ocdrst : 1;
    uint32_t reserved2 : 1;
    uint32_t por33 : 1;
    uint32_t reserved3 : 2;
    uint32_t bod33 : 1;
    uint32_t reserved4 : 13;
  } __attribute((__packed__))  bits;
} pm_rcause_t;
#line 276
#line 259
typedef union __nesc_unnamed4283 {

  uint32_t flat;
  struct __nesc_unnamed4284 {

    uint32_t twis0 : 1;
    uint32_t twis1 : 1;
    uint32_t usbc : 1;
    uint32_t psok : 1;
    uint32_t bod18irq : 1;
    uint32_t bod33irq : 1;
    uint32_t lcdca : 1;
    uint32_t reserved0 : 9;
    uint32_t eic : 1;
    uint32_t ast : 1;
    uint32_t reserved1 : 14;
  } __attribute((__packed__))  bits;
} pm_wcause_t;
#line 292
#line 278
typedef union __nesc_unnamed4285 {

  uint32_t flat;
  struct __nesc_unnamed4286 {

    uint32_t osc : 1;
    uint32_t reserved0 : 7;
    uint32_t pll : 1;
    uint32_t reserved1 : 7;
    uint32_t fastrcosc : 5;
    uint32_t reserved2 : 3;
    uint32_t dfll : 1;
    uint32_t reserved3 : 7;
  } __attribute((__packed__))  bits;
} pm_fastsleep_t;
#line 343
#line 294
typedef struct __nesc_unnamed4287 {

  pm_mcctrl_t mcctrl;
  pm_cpusel_t cpusel;
  uint32_t reserved0[1];
  pm_pbxsel_t pbasel;
  pm_pbxsel_t pbbsel;
  pm_pbxsel_t pbcsel;
  pm_pbxsel_t pbdsel;
  uint32_t reserved1[1];

  pm_cpumask_t cpumask;
  pm_hsbmask_t hsbmask;
  pm_pbamask_t pbamask;
  pm_pbbmask_t pbbmask;
  pm_pbcmask_t pbcmask;
  pm_pbdmask_t pbdmask;
  uint32_t reserved2[2];

  pm_pbadivmask_t pbadivmask;
  uint32_t reserved3[4];
  uint32_t cfdctrl;
  uint32_t unlock;
  uint32_t reserved4[1];

  uint32_t reserved5[24];

  pm_interrupt_t ier;
  pm_interrupt_t idr;
  pm_interrupt_t imr;
  pm_interrupt_t isr;
  pm_interrupt_t icr;
  pm_interrupt_t sr;
  uint32_t reserved6[2];

  uint32_t reserved7[24];

  pm_ppcr_t ppcr;
  uint32_t reserved8[7];

  pm_rcause_t rcause;
  pm_wcause_t wcause;
  uint32_t awen;
  uint32_t protctrl;
  uint32_t reserved9[1];
  pm_fastsleep_t fastsleep;
  uint32_t reserved10[2];
} 

pm_t;

pm_t volatile *const PM = (pm_t volatile *)0x400E0000;
# 99 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/gpiohardware.h"
#line 5
typedef struct __nesc_unnamed4288 {

  uint32_t gper;
  uint32_t gpers;
  uint32_t gperc;
  uint32_t gpert;
  uint32_t pmr0;
  uint32_t pmr0s;
  uint32_t pmr0c;
  uint32_t pmr0t;

  uint32_t pmr1;
  uint32_t pmr1s;
  uint32_t pmr1c;
  uint32_t pmr1t;
  uint32_t pmr2;
  uint32_t pmr2s;
  uint32_t pmr2c;
  uint32_t pmr2t;

  uint32_t oder;
  uint32_t oders;
  uint32_t oderc;
  uint32_t odert;
  uint32_t ovr;
  uint32_t ovrs;
  uint32_t ovrc;
  uint32_t ovrt;

  uint32_t pvr;
  uint32_t reserved0[3];
  uint32_t puer;
  uint32_t puers;
  uint32_t puerc;
  uint32_t puert;

  uint32_t pder;
  uint32_t pders;
  uint32_t pderc;
  uint32_t pdert;
  uint32_t ier;
  uint32_t iers;
  uint32_t ierc;
  uint32_t iert;

  uint32_t imr0;
  uint32_t imr0s;
  uint32_t imr0c;
  uint32_t imr0t;
  uint32_t imr1;
  uint32_t imr1s;
  uint32_t imr1c;
  uint32_t imr1t;

  uint32_t gfer;
  uint32_t gfers;
  uint32_t gferc;
  uint32_t gfert;
  uint32_t ifr;
  uint32_t reserved1;
  uint32_t ifrc;
  uint32_t reserved2;

  uint32_t reserved3[8];

  uint32_t odcr0;
  uint32_t odcr0s;
  uint32_t odcr0c;
  uint32_t odcr0t;
  uint32_t odcr1;
  uint32_t odcr1s;
  uint32_t odcr1c;
  uint32_t odcr1t;

  uint32_t reserved4[4];
  uint32_t osrr0;
  uint32_t osrr0s;
  uint32_t osrr0c;
  uint32_t osrr0t;

  uint32_t reserved5[8];

  uint32_t ster;
  uint32_t sters;
  uint32_t sterc;
  uint32_t stert;
  uint32_t reserved6[4];

  uint32_t ever;
  uint32_t evers;
  uint32_t everc;
  uint32_t evert;
  uint32_t reserved7[112];
} 
gpio_port_t;

enum __nesc_unnamed4289 {
  GPIO_PORT0_ADDRESS = 0x400E1000, 
  GPIO_PORT1_ADDRESS = 0x400E1200, 
  GPIO_PORT2_ADDRESS = 0x400E1400
};

gpio_port_t volatile *const GPIO_PORT_A = (gpio_port_t volatile *)0x400E1000;
# 96 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/nvic/nvichardware.h"
#line 7
typedef union __nesc_unnamed4290 {

  uint32_t flat[3];
  struct __nesc_unnamed4291 {

    uint32_t hflashc : 1;
    uint32_t pdca0 : 1;
    uint32_t pdca1 : 1;
    uint32_t pdca2 : 1;
    uint32_t pdca3 : 1;
    uint32_t pdca4 : 1;
    uint32_t pdca5 : 1;
    uint32_t pdca6 : 1;
    uint32_t pdca7 : 1;
    uint32_t pdca8 : 1;
    uint32_t pdca9 : 1;
    uint32_t pdca10 : 1;
    uint32_t pdca11 : 1;
    uint32_t pdca12 : 1;
    uint32_t pdca13 : 1;
    uint32_t pdca14 : 1;
    uint32_t pdca15 : 1;
    uint32_t crccu : 1;
    uint32_t usbc : 1;
    uint32_t pevctr : 1;
    uint32_t pevcov : 1;
    uint32_t aesa : 1;
    uint32_t pm : 1;
    uint32_t scif : 1;
    uint32_t freqm : 1;
    uint32_t gpio0 : 1;
    uint32_t gpio1 : 1;
    uint32_t gpio2 : 1;
    uint32_t gpio3 : 1;
    uint32_t gpio4 : 1;
    uint32_t gpio5 : 1;
    uint32_t gpio6 : 1;

    uint32_t gpio7 : 1;
    uint32_t gpio8 : 1;
    uint32_t gpio9 : 1;
    uint32_t gpio10 : 1;
    uint32_t gpio11 : 1;
    uint32_t bpm : 1;
    uint32_t bscif : 1;
    uint32_t ast_alarm : 1;
    uint32_t ast_per : 1;
    uint32_t ast_ovf : 1;
    uint32_t ast_ready : 1;
    uint32_t ast_clkready : 1;
    uint32_t wdt : 1;
    uint32_t eic1 : 1;
    uint32_t eic2 : 1;
    uint32_t eic3 : 1;
    uint32_t eic4 : 1;
    uint32_t eic5 : 1;
    uint32_t eic6 : 1;
    uint32_t eic7 : 1;
    uint32_t eic8 : 1;
    uint32_t iisc : 1;
    uint32_t spi : 1;
    uint32_t tc00 : 1;
    uint32_t tc01 : 1;
    uint32_t tc02 : 1;
    uint32_t tc10 : 1;
    uint32_t tc11 : 1;
    uint32_t tc12 : 1;
    uint32_t twim0 : 1;
    uint32_t twis0 : 1;
    uint32_t twim1 : 1;

    uint32_t twis1 : 1;
    uint32_t usart0 : 1;
    uint32_t usart1 : 1;
    uint32_t usart2 : 1;
    uint32_t usart3 : 1;
    uint32_t adcife : 1;
    uint32_t dacc : 1;
    uint32_t acifc : 1;
    uint32_t abdacb : 1;
    uint32_t trng : 1;
    uint32_t parc : 1;
    uint32_t catb : 1;
    uint32_t reserved0 : 1;
    uint32_t twim2 : 1;
    uint32_t twim3 : 1;
    uint32_t lcdca : 1;
    uint32_t reserved1 : 17;
  } __attribute((__packed__))  bits;
} nvic_x_t;
#line 264
#line 98
typedef union __nesc_unnamed4292 {

  uint32_t flat[20];
  struct __nesc_unnamed4293 {

    uint32_t reserved0 : 4;
    uint32_t hflashc : 4;
    uint32_t reserved1 : 4;
    uint32_t pdca0 : 4;
    uint32_t reserved2 : 4;
    uint32_t pdca1 : 4;
    uint32_t reserved3 : 4;
    uint32_t pdca2 : 4;
    uint32_t reserved4 : 4;
    uint32_t pdca3 : 4;
    uint32_t reserved5 : 4;
    uint32_t pdca4 : 4;
    uint32_t reserved6 : 4;
    uint32_t pdca5 : 4;
    uint32_t reserved7 : 4;
    uint32_t pdca6 : 4;
    uint32_t reserved8 : 4;
    uint32_t pdca7 : 4;
    uint32_t reserved9 : 4;
    uint32_t pdca8 : 4;
    uint32_t reserved10 : 4;
    uint32_t pdca9 : 4;
    uint32_t reserved11 : 4;
    uint32_t pdca10 : 4;
    uint32_t reserved12 : 4;
    uint32_t pdca11 : 4;
    uint32_t reserved13 : 4;
    uint32_t pdca12 : 4;
    uint32_t reserved14 : 4;
    uint32_t pdca13 : 4;
    uint32_t reserved15 : 4;
    uint32_t pdca14 : 4;
    uint32_t reserved16 : 4;
    uint32_t pdca15 : 4;
    uint32_t reserved17 : 4;
    uint32_t crccu : 4;
    uint32_t reserved18 : 4;
    uint32_t usbc : 4;
    uint32_t reserved19 : 4;
    uint32_t pevctr : 4;
    uint32_t reserved20 : 4;
    uint32_t pevcov : 4;
    uint32_t reserved21 : 4;
    uint32_t aesa : 4;
    uint32_t reserved22 : 4;
    uint32_t pm : 4;
    uint32_t reserved23 : 4;
    uint32_t scif : 4;
    uint32_t reserved24 : 4;
    uint32_t freqm : 4;
    uint32_t reserved25 : 4;
    uint32_t gpio0 : 4;
    uint32_t reserved26 : 4;
    uint32_t gpio1 : 4;
    uint32_t reserved27 : 4;
    uint32_t gpio2 : 4;
    uint32_t reserved28 : 4;
    uint32_t gpio3 : 4;
    uint32_t reserved29 : 4;
    uint32_t gpio4 : 4;
    uint32_t reserved30 : 4;
    uint32_t gpio5 : 4;
    uint32_t reserved31 : 4;
    uint32_t gpio6 : 4;

    uint32_t reserved32 : 4;
    uint32_t gpio7 : 4;
    uint32_t reserved33 : 4;
    uint32_t gpio8 : 4;
    uint32_t reserved34 : 4;
    uint32_t gpio9 : 4;
    uint32_t reserved35 : 4;
    uint32_t gpio10 : 4;
    uint32_t reserved36 : 4;
    uint32_t gpio11 : 4;
    uint32_t reserved37 : 4;
    uint32_t bpm : 4;
    uint32_t reserved38 : 4;
    uint32_t bscif : 4;
    uint32_t reserved39 : 4;
    uint32_t ast_alarm : 4;
    uint32_t reserved40 : 4;
    uint32_t ast_per : 4;
    uint32_t reserved41 : 4;
    uint32_t ast_ovf : 4;
    uint32_t reserved42 : 4;
    uint32_t ast_ready : 4;
    uint32_t reserved43 : 4;
    uint32_t ast_clkready : 4;
    uint32_t reserved44 : 4;
    uint32_t wdt : 4;
    uint32_t reserved45 : 4;
    uint32_t eic1 : 4;
    uint32_t reserved46 : 4;
    uint32_t eic2 : 4;
    uint32_t reserved47 : 4;
    uint32_t eic3 : 4;
    uint32_t reserved48 : 4;
    uint32_t eic4 : 4;
    uint32_t reserved49 : 4;
    uint32_t eic5 : 4;
    uint32_t reserved50 : 4;
    uint32_t eic6 : 4;
    uint32_t reserved51 : 4;
    uint32_t eic7 : 4;
    uint32_t reserved52 : 4;
    uint32_t eic8 : 4;
    uint32_t reserved53 : 4;
    uint32_t iisc : 4;
    uint32_t reserved54 : 4;
    uint32_t spi : 4;
    uint32_t reserved55 : 4;
    uint32_t tc00 : 4;
    uint32_t reserved56 : 4;
    uint32_t tc01 : 4;
    uint32_t reserved57 : 4;
    uint32_t tc02 : 4;
    uint32_t reserved58 : 4;
    uint32_t tc10 : 4;
    uint32_t reserved59 : 4;
    uint32_t tc11 : 4;
    uint32_t reserved60 : 4;
    uint32_t tc12 : 4;
    uint32_t reserved61 : 4;
    uint32_t twim0 : 4;
    uint32_t reserved62 : 4;
    uint32_t twis0 : 4;
    uint32_t reserved63 : 4;
    uint32_t twim1 : 4;

    uint32_t reserved64 : 4;
    uint32_t twis1 : 4;
    uint32_t reserved65 : 4;
    uint32_t usart0 : 4;
    uint32_t reserved66 : 4;
    uint32_t usart1 : 4;
    uint32_t reserved67 : 4;
    uint32_t usart2 : 4;
    uint32_t reserved68 : 4;
    uint32_t usart3 : 4;
    uint32_t reserved69 : 4;
    uint32_t adcife : 4;
    uint32_t reserved70 : 4;
    uint32_t dacc : 4;
    uint32_t reserved71 : 4;
    uint32_t acifc : 4;
    uint32_t reserved72 : 4;
    uint32_t abdacb : 4;
    uint32_t reserved73 : 4;
    uint32_t trng : 4;
    uint32_t reserved74 : 4;
    uint32_t parc : 4;
    uint32_t reserved75 : 4;
    uint32_t catb : 4;
    uint32_t reserved76 : 12;
    uint32_t twim2 : 4;
    uint32_t reserved77 : 4;
    uint32_t twim3 : 4;
    uint32_t reserved78 : 4;
    uint32_t lcdca : 4;
  } __attribute((__packed__))  bits;
} nvic_pri_t;
#line 287
#line 268
typedef struct __nesc_unnamed4294 {


  nvic_x_t iser;
  uint32_t reserved0[5 + 24];

  nvic_x_t icer;
  uint32_t reserved1[5 + 24];

  nvic_x_t ispr;
  uint32_t reserved2[5 + 24];

  nvic_x_t icpr;
  uint32_t reserved3[5 + 24];

  nvic_x_t iabr;
  uint32_t reserved4[5 + 24 + 32];

  nvic_pri_t ipr;
} nvic_t;

nvic_t volatile *const NVIC = (nvic_t volatile *)0xE000E100;
# 40 "/usr/lib/gcc/arm-none-eabi/4.8.2/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 98
typedef __gnuc_va_list va_list;
# 7 "/home/tbauer/helena/stormport//tos/platforms/storm/lib/printf/printf.h"
int storm_vsnprintf(char *buffer, unsigned int buffer_len, const char *fmt, va_list va);
int storm_snprintf(char *buffer, unsigned int buffer_len, const char *fmt, ...);
int storm_printf(const char *fmt, ...);







void storm_trace(const char *arg_0x2b4e9bf43330);
void storm_trace8(uint8_t arg_0x2b4e9bf43bd0);
void storm_trace16(uint16_t arg_0x2b4e9bf424d0);
void storm_trace32(uint32_t arg_0x2b4e9bf42d90);
# 3 "ble.h"
typedef uint16_t uuid_t;
# 76 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/usarthardware.h"
#line 11
typedef enum __nesc_unnamed4295 {
  USART0_CLK_PA04 = ((0 << 16) | (4 << 8)) | 1, 
  USART0_RX_PA05 = ((0 << 16) | (5 << 8)) | 1, 
  USART0_RTS_PA06 = ((0 << 16) | (6 << 8)) | 1, 
  USART0_TX_PA07 = ((0 << 16) | (7 << 8)) | 1, 
  USART0_RTS_PA08 = ((0 << 16) | (8 << 8)) | 0, 
  USART0_CTS_PA09 = ((0 << 16) | (9 << 8)) | 0, 
  USART0_CLK_PA10 = ((0 << 16) | (10 << 8)) | 0, 
  USART0_RX_PA11 = ((0 << 16) | (11 << 8)) | 0, 
  USART0_TX_PA12 = ((0 << 16) | (12 << 8)) | 0, 
  USART1_RTS_PA13 = ((0 << 16) | (13 << 8)) | 0, 
  USART1_CLK_PA14 = ((0 << 16) | (14 << 8)) | 0, 
  USART1_RX_PA15 = ((0 << 16) | (15 << 8)) | 0, 
  USART1_TX_PA16 = ((0 << 16) | (16 << 8)) | 0, 
  USART2_RTS_PA17 = ((0 << 16) | (17 << 8)) | 0, 
  USART2_CLK_PA18 = ((0 << 16) | (18 << 8)) | 0, 
  USART2_RXD_PA19 = ((0 << 16) | (19 << 8)) | 0, 
  USART2_TXD_PA20 = ((0 << 16) | (20 << 8)) | 0, 
  USART1_CTS_PA21 = ((0 << 16) | (21 << 8)) | 1, 
  USART2_CTS_PA22 = ((0 << 16) | (22 << 8)) | 1, 
  USART2_RX_PA25 = ((0 << 16) | (25 << 8)) | 1, 
  USART2_TX_PA26 = ((0 << 16) | (26 << 8)) | 1, 





  USART0_RX_PB00 = ((1 << 16) | (0 << 8)) | 1, 
  USART0_TX_PB01 = ((1 << 16) | (1 << 8)) | 1, 
  USART1_RTS_PB02 = ((1 << 16) | (2 << 8)) | 1, 
  USART1_CLK_PB03 = ((1 << 16) | (3 << 8)) | 1, 
  USART1_RX_PB04 = ((1 << 16) | (4 << 8)) | 1, 
  USART1_TX_PB05 = ((1 << 16) | (5 << 8)) | 1, 
  USART3_RTS_PB06 = ((1 << 16) | (6 << 8)) | 0, 
  USART3_CTS_PB07 = ((1 << 16) | (7 << 8)) | 0, 
  USART3_CLK_PB08 = ((1 << 16) | (8 << 8)) | 0, 
  USART3_RX_PB09 = ((1 << 16) | (9 << 8)) | 0, 
  USART3_TX_PB10 = ((1 << 16) | (10 << 8)) | 0, 
  USART0_CTS_PB11 = ((1 << 16) | (11 << 8)) | 0, 
  USART0_RTS_PB12 = ((1 << 16) | (12 << 8)) | 0, 
  USART0_CLK_PB13 = ((1 << 16) | (13 << 8)) | 0, 
  USART0_RX_PB14 = ((1 << 16) | (14 << 8)) | 0, 
  USART0_TX_PB15 = ((1 << 16) | (15 << 8)) | 0, 
  USART0_CLK_PC00 = ((2 << 16) | (0 << 8)) | 1, 
  USART0_RTS_PC01 = ((2 << 16) | (1 << 8)) | 1, 
  USART0_CTS_PC02 = ((2 << 16) | (2 << 8)) | 1, 
  USART0_RX_PC02 = ((2 << 16) | (2 << 8)) | 2, 
  USART0_TX_PC03 = ((2 << 16) | (3 << 8)) | 2, 
  USART2_RTS_PC07 = ((2 << 16) | (7 << 8)) | 1, 
  USART2_CLK_PC08 = ((2 << 16) | (8 << 8)) | 1, 
  USART2_CTS_PC08 = ((2 << 16) | (8 << 8)) | 4, 
  USART3_RX_PC09 = ((2 << 16) | (9 << 8)) | 1, 
  USART3_TX_PC10 = ((2 << 16) | (10 << 8)) | 1, 
  USART2_RX_PC11 = ((2 << 16) | (11 << 8)) | 1, 
  USART2_TX_PC12 = ((2 << 16) | (12 << 8)) | 1, 
  USART3_RTS_PC13 = ((2 << 16) | (13 << 8)) | 1, 
  USART3_CLK_PC14 = ((2 << 16) | (14 << 8)) | 1, 
  USART1_RTS_PC24 = ((2 << 16) | (24 << 8)) | 0, 
  USART1_CLK_PC25 = ((2 << 16) | (25 << 8)) | 0, 
  USART1_RX_PC26 = ((2 << 16) | (26 << 8)) | 0, 
  USART1_TX_PC27 = ((2 << 16) | (27 << 8)) | 0, 
  USART3_RX_PC28 = ((2 << 16) | (28 << 8)) | 0, 
  USART3_TX_PC29 = ((2 << 16) | (29 << 8)) | 0, 
  USART3_RTS_PC30 = ((2 << 16) | (30 << 8)) | 0, 
  USART3_CLK_PC31 = ((2 << 16) | (31 << 8)) | 0
} usart_pin_t;
enum __nesc_unnamed4296 {
  TOS_UART_1200 = 1200, 
  TOS_UART_1800 = 1800, 
  TOS_UART_2400 = 2400, 
  TOS_UART_4800 = 4800, 
  TOS_UART_9600 = 9600, 
  TOS_UART_19200 = 19200, 
  TOS_UART_38400 = 38400, 
  TOS_UART_57600 = 57600, 
  TOS_UART_76800 = 76800, 
  TOS_UART_115200 = 115200, 
  TOS_UART_230400 = 230400, 
  TOS_UART_750000 = 750000, 
  TOS_UART_1500000 = 1500000, 
  TOS_UART_3000000 = 3000000
};

enum __nesc_unnamed4297 {
  TOS_UART_OFF, 
  TOS_UART_RONLY, 
  TOS_UART_TONLY, 
  TOS_UART_DUPLEX
};

enum __nesc_unnamed4298 {
  TOS_UART_PARITY_NONE, 
  TOS_UART_PARITY_EVEN, 
  TOS_UART_PARITY_ODD
};

typedef uint32_t uart_speed_t;
typedef uint8_t uart_parity_t;
typedef uint8_t uart_duplex_t;
#line 139
#line 111
typedef union __nesc_unnamed4299 {

  uint32_t flat;
  struct __nesc_unnamed4300 {

    uint32_t reserved0 : 2;
    uint32_t rstrx : 1;
    uint32_t rsttx : 1;
    uint32_t rxen : 1;
    uint32_t rxdis : 1;
    uint32_t txen : 1;
    uint32_t txdis : 1;
    uint32_t rststa : 1;
    uint32_t sttbrk : 1;
    uint32_t stpbrk : 1;
    uint32_t sttto : 1;
    uint32_t senda : 1;
    uint32_t rstit : 1;
    uint32_t rstnack : 1;
    uint32_t retto : 1;
    uint32_t dtren : 1;
    uint32_t dtrdis : 1;
    uint32_t rtsen_fcs : 1;
    uint32_t rtsdis_rcs : 1;
    uint32_t linabt : 1;
    uint32_t linwkup : 1;
    uint32_t reserved2 : 10;
  } __attribute((__packed__))  bits;
} usart_cr_t;
#line 168
#line 141
typedef union __nesc_unnamed4301 {

  uint32_t flat;
  struct __nesc_unnamed4302 {

    uint32_t mode : 4;
    uint32_t usclks : 2;
    uint32_t chrl : 2;
    uint32_t sync_cpha : 1;
    uint32_t par : 3;
    uint32_t nbstop : 2;
    uint32_t chmode : 2;
    uint32_t msbf_cpol : 1;
    uint32_t mode9 : 1;
    uint32_t clko : 1;
    uint32_t over : 1;
    uint32_t inack : 1;
    uint32_t dsnack : 1;
    uint32_t var_sync : 1;
    uint32_t invdata : 1;
    uint32_t max_iteration : 3;
    uint32_t reserved0 : 1;
    uint32_t filter : 1;
    uint32_t man : 1;
    uint32_t modsync : 1;
    uint32_t onebit : 1;
  } __attribute((__packed__))  bits;
} usart_mr_t;
#line 205
#line 170
typedef union __nesc_unnamed4303 {

  uint32_t flat;
  struct __nesc_unnamed4304 {

    uint32_t rxrdy : 1;
    uint32_t txrdy : 1;
    uint32_t rxbrk : 1;
    uint32_t reserved0 : 2;
    uint32_t ovre : 1;
    uint32_t frame : 1;
    uint32_t pare : 1;
    uint32_t timeout : 1;
    uint32_t txempty : 1;
    uint32_t iter_unre : 1;
    uint32_t reserved1 : 1;
    uint32_t rxbuff : 1;
    uint32_t nack_linbk : 1;
    uint32_t linid : 1;
    uint32_t lintc : 1;
    uint32_t riic : 1;
    uint32_t dsric : 1;
    uint32_t dcdic : 1;
    uint32_t ctsic : 1;
    uint32_t mane : 1;
    uint32_t reserved2 : 3;
    uint32_t manea : 1;
    uint32_t linbe : 1;
    uint32_t linisfe : 1;
    uint32_t linipe : 1;
    uint32_t lince : 1;
    uint32_t linsnre : 1;
    uint32_t linste : 1;
    uint32_t linhte : 1;
  } __attribute((__packed__))  bits;
} usart_ixr_t;
#line 244
#line 207
typedef union __nesc_unnamed4305 {

  uint32_t flat;
  struct __nesc_unnamed4306 {

    uint32_t rxrdy : 1;
    uint32_t txrdy : 1;
    uint32_t rxbrk : 1;
    uint32_t reserved0 : 2;
    uint32_t ovre : 1;
    uint32_t frame : 1;
    uint32_t pare : 1;
    uint32_t timeout : 1;
    uint32_t txempty : 1;
    uint32_t iter_unre : 1;
    uint32_t reserved1 : 1;
    uint32_t rxbuff : 1;
    uint32_t nack_linbk : 1;
    uint32_t linid : 1;
    uint32_t lintc : 1;
    uint32_t riic : 1;
    uint32_t dsric : 1;
    uint32_t dcdic : 1;
    uint32_t ctsic : 1;
    uint32_t ri : 1;
    uint32_t dsr : 1;
    uint32_t dcd : 1;
    uint32_t cts_linbls : 1;
    uint32_t manerr : 1;
    uint32_t linbe : 1;
    uint32_t linisfe : 1;
    uint32_t linipe : 1;
    uint32_t lince : 1;
    uint32_t linsnre : 1;
    uint32_t linste : 1;
    uint32_t linhte : 1;
  } __attribute((__packed__))  bits;
} usart_csr_t;
#line 256
#line 246
typedef union __nesc_unnamed4307 {

  uint32_t flat;
  struct __nesc_unnamed4308 {

    uint32_t rxchr : 9;
    uint32_t reserved0 : 6;
    uint32_t rxsynh : 1;
    uint32_t reserved1 : 16;
  } __attribute((__packed__))  bits;
} usart_rhr_t;
#line 268
#line 258
typedef union __nesc_unnamed4309 {

  uint32_t flat;
  struct __nesc_unnamed4310 {

    uint32_t txchr : 9;
    uint32_t reserved0 : 6;
    uint32_t txsynh : 1;
    uint32_t reserved1 : 16;
  } __attribute((__packed__))  bits;
} usart_thr_t;










#line 270
typedef union __nesc_unnamed4311 {

  uint32_t flat;
  struct __nesc_unnamed4312 {

    uint32_t cd : 16;
    uint32_t fp : 3;
    uint32_t reserved0 : 13;
  } __attribute((__packed__))  bits;
} usart_brgr_t;

enum __nesc_unnamed4313 {

  USART_MODE_NORMAL, 
  USART_MODE_RS486, 
  USART_MODE_HARDWARE_HANDSHAKE, 
  USART_MODE_MODEM, 
  USART_MODE_ISO7816_T0, 
  USART_MODE_ISO7816_T1, 
  USART_MODE_IRDA, 
  USART_MODE_LIN_MASTER, 
  USART_MODE_LIN_SLAVE, 
  USART_MODE_SPI_MASTER, 
  USART_MODE_SPI_SLAVE
};
#line 320
#line 296
typedef struct __nesc_unnamed4314 {

  usart_cr_t cr;
  usart_mr_t mr;
  usart_ixr_t ier;
  usart_ixr_t idr;
  usart_ixr_t imr;
  usart_csr_t csr;
  usart_rhr_t rhr;
  usart_thr_t thr;

  usart_brgr_t brgr;
  uint32_t rtor;
  uint32_t ttgr;
  uint32_t reserved0[5];

  uint32_t fidi;
  uint32_t ner;
  uint32_t reserved1;
  uint32_t ifr;
  uint32_t man;
  uint32_t linmr;
  uint32_t linir;
  uint32_t linbr;
} usart_t;

enum __nesc_unnamed4315 {

  USART_SIZE = 0x4000, 
  USART_BASE_ADDRESS = 0x40024000
};

usart_t volatile *const USART0 = (usart_t volatile *)(USART_BASE_ADDRESS + USART_SIZE * 0);
usart_t volatile *const USART1 = (usart_t volatile *)(USART_BASE_ADDRESS + USART_SIZE * 1);
usart_t volatile *const USART2 = (usart_t volatile *)(USART_BASE_ADDRESS + USART_SIZE * 2);
usart_t volatile *const USART3 = (usart_t volatile *)(USART_BASE_ADDRESS + USART_SIZE * 3);
# 33 "/home/tbauer/helena/stormport//tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 43 "/home/tbauer/helena/stormport//tos/types/Leds.h"
enum __nesc_unnamed4316 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
enum /*DemoAppC.Sam4lUSART2C*/Sam4lUSART2C__0____nesc_unnamed4317 {
  Sam4lUSART2C__0__USART2_ID = 0U
};
enum /*PlatformSerialC.Sam4lUSART3C*/Sam4lUSART3C__0____nesc_unnamed4318 {
  Sam4lUSART3C__0__USART3_ID = 0U
};
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t PlatformP__LedsInit__default__init(void );
# 39 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/Sam4LowPower.nc"
static void PlatformP__Sam4LowPower__customizePio(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t MoteClockP__Init__init(void );
# 53 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4Clock.nc"
static uint32_t HplSam4lClockP__HplSam4Clock__getMainClockSpeed(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t HplSam4lClockP__Init__init(void );
# 42 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4PeripheralClockCntl.nc"
static void /*HplSam4lClockC.PBA_USART2*/HplSam4PeripheralClockP__21__Cntl__enable(void );
#line 42
static void /*HplSam4lClockC.PBA_USART3*/HplSam4PeripheralClockP__22__Cntl__enable(void );
# 38 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/Sam4LowPower.nc"
static void McuSleepC__Sam4LowPower__configure(void );
# 76 "/home/tbauer/helena/stormport//tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 38 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/FunctionWrapper.nc"
static void McuSleepC__InterruptWrapper__postamble(void );
#line 37
static void McuSleepC__InterruptWrapper__preamble(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t NoInitC__Init__init(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__ByteIRQ__fired(void );
# 44 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
static void /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IO__makeInput(void );
# 54 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static error_t /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__enableFallingEdge(void );
#line 53
static error_t /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__enableRisingEdge(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__ByteIRQ__fired(void );
# 46 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
static void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__makeOutput(void );
#line 40
static void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__set(void );
static void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__clr(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__ByteIRQ__fired(void );
# 46 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
static void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__makeOutput(void );
#line 40
static void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__set(void );
static void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__clr(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__IRQ__default__fired(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__ByteIRQ__fired(void );
# 5 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPort.nc"
static void HplSam4lGeneralIOPortP__PortA__enableIRQ(uint8_t pin);
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void HplSam4lGeneralIOPortP__PortC_IRQ__default__fired(
# 14 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
uint8_t arg_0x2b4e9bd6bb90);
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void HplSam4lGeneralIOPortP__PortB_IRQ__default__fired(
# 12 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
uint8_t arg_0x2b4e9bd6c310);
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void HplSam4lGeneralIOPortP__PortA_IRQ__default__fired(
# 10 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
uint8_t arg_0x2b4e9bd6ea00);
# 46 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
static void NoGPIOP__nullio__makeOutput(void );
# 67 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/home/tbauer/helena/stormport//tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b4e9b64da40);
# 75 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/home/tbauer/helena/stormport//tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b4e9b64da40);
# 57 "/home/tbauer/helena/stormport//tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 60 "/home/tbauer/helena/stormport//tos/interfaces/Boot.nc"
static void DemoC__Boot__booted(void );
# 13 "BlePeripheral.nc"
static void DemoC__BlePeripheral__ready(void );


static void DemoC__BlePeripheral__connected(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void NrfBleP__Int__fired(void );
# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
static void NrfBleP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 6 "BlePeripheral.nc"
static void NrfBleP__BlePeripheral__initialize(void );

static error_t NrfBleP__BlePeripheral__startAdvertising(void );
# 75 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
static void NrfBleP__ready__runTask(void );
#line 75
static void NrfBleP__connected__runTask(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t /*HilSam4lUSARTC.arb0.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
static void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c4410);
# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
static void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c8c70);
# 75 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
static void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t /*HilSam4lUSARTC.arb1.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
static void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c4410);
# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
static void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__Resource__default__granted(
# 54 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c8c70);
# 75 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
static void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t /*HilSam4lUSARTC.arb2.Queue*/FcfsResourceQueueC__2__Init__init(void );
# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
static void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(
# 60 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c4410);
# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
static void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__Resource__default__granted(
# 54 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c8c70);
# 75 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
static void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__grantedTask__runTask(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t /*HilSam4lUSARTC.arb3.Queue*/FcfsResourceQueueC__3__Init__init(void );
# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
static void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__ResourceConfigure__default__configure(
# 60 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c4410);
# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
static void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__Resource__default__granted(
# 54 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c8c70);
# 75 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
static void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__grantedTask__runTask(void );
# 33 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
static bool /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__isTXRdy(void );
#line 28
static void /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__sendData(uint8_t d);





static bool /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__isRXRdy(void );
#line 27
static uint8_t /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__readData(void );





static bool /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__isTXRdy(void );
#line 28
static void /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__sendData(uint8_t d);





static bool /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__isRXRdy(void );
#line 27
static uint8_t /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__readData(void );





static bool /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__isTXRdy(void );
#line 28
static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__sendData(uint8_t d);
#line 9
static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableTX(void );
#line 25
static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__setSPIMode(uint8_t cpol, uint8_t cpha);








static bool /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__isRXRdy(void );
#line 12
static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableRX(void );
#line 7
static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableUSARTPin(usart_pin_t pin);
#line 27
static uint8_t /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__readData(void );


static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__setSPIBaudRate(uint32_t b);
#line 5
static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__initSPIMaster(void );
#line 29
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__setUartBaudRate(uint32_t b);
#line 13
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__disableRX(void );
#line 33
static bool /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__isTXRdy(void );
#line 28
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__sendData(uint8_t d);
#line 9
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableTX(void );
#line 34
static bool /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__isRXRdy(void );
#line 12
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableRX(void );
#line 7
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableUSARTPin(usart_pin_t pin);
#line 4
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__initUART(void );
#line 27
static uint8_t /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__readData(void );
#line 10
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__disableTX(void );
# 12 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static bool HplSam4lUSARTIRQP__usart2irq__isTXRdyIRQEnabled(void );
#line 9
static void HplSam4lUSARTIRQP__usart2irq__disableRXRdyIRQ(void );

static bool HplSam4lUSARTIRQP__usart2irq__isRXRdyIRQEnabled(void );
#line 8
static void HplSam4lUSARTIRQP__usart2irq__enableRXRdyIRQ(void );
#line 7
static void HplSam4lUSARTIRQP__usart2irq__disableTXRdyIRQ(void );
#line 6
static void HplSam4lUSARTIRQP__usart2irq__enableTXRdyIRQ(void );





static bool HplSam4lUSARTIRQP__usart3irq__isTXRdyIRQEnabled(void );
#line 9
static void HplSam4lUSARTIRQP__usart3irq__disableRXRdyIRQ(void );

static bool HplSam4lUSARTIRQP__usart3irq__isRXRdyIRQEnabled(void );
#line 7
static void HplSam4lUSARTIRQP__usart3irq__disableTXRdyIRQ(void );




static bool HplSam4lUSARTIRQP__usart0irq__isTXRdyIRQEnabled(void );
#line 9
static void HplSam4lUSARTIRQP__usart0irq__disableRXRdyIRQ(void );

static bool HplSam4lUSARTIRQP__usart0irq__isRXRdyIRQEnabled(void );
#line 7
static void HplSam4lUSARTIRQP__usart0irq__disableTXRdyIRQ(void );




static bool HplSam4lUSARTIRQP__usart1irq__isTXRdyIRQEnabled(void );
#line 9
static void HplSam4lUSARTIRQP__usart1irq__disableRXRdyIRQ(void );

static bool HplSam4lUSARTIRQP__usart1irq__isRXRdyIRQEnabled(void );
#line 7
static void HplSam4lUSARTIRQP__usart1irq__disableTXRdyIRQ(void );
# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__SpiPacket__default__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__RXRdyFired(void );
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__TXRdyFired(void );
# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__receivedByte(uint8_t byte);
#line 100
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__receiveDone(
#line 96
uint8_t * buf, 



uint16_t len, error_t error);
#line 58
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__sendDone(
#line 54
uint8_t * buf, 



uint16_t len, error_t error);
# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__SpiPacket__default__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__RXRdyFired(void );
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__TXRdyFired(void );
# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__receivedByte(uint8_t byte);
#line 100
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__receiveDone(
#line 96
uint8_t * buf, 



uint16_t len, error_t error);
#line 58
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__sendDone(
#line 54
uint8_t * buf, 



uint16_t len, error_t error);
# 70 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
static error_t /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__RXRdyFired(void );
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__TXRdyFired(void );
# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__receivedByte(uint8_t byte);
#line 100
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__receiveDone(
#line 96
uint8_t * buf, 



uint16_t len, error_t error);
#line 58
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__sendDone(
#line 54
uint8_t * buf, 



uint16_t len, error_t error);
# 46 "/home/tbauer/helena/stormport//tos/interfaces/UartByte.nc"
static error_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartByte__send(uint8_t byte);
# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__SpiPacket__default__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__RXRdyFired(void );
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__TXRdyFired(void );
# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__receivedByte(uint8_t byte);
#line 100
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__receiveDone(
#line 96
uint8_t * buf, 



uint16_t len, error_t error);
#line 58
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__sendDone(
#line 54
uint8_t * buf, 



uint16_t len, error_t error);
# 59 "/home/tbauer/helena/stormport//tos/interfaces/UartControl.nc"
static error_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartControl__setSpeed(uart_speed_t speed);
#line 76
static error_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartControl__setDuplexMode(uart_duplex_t duplex);
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t PlatformSerialP__Init__init(void );
#line 62
static error_t SerialPrintfP__Init__init(void );
# 46 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
static void PlatformP__Led0__makeOutput(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t PlatformP__RadioInit__init(void );
#line 62
static error_t PlatformP__IRQInit__init(void );
# 46 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
static void PlatformP__Led1__makeOutput(void );
#line 46
static void PlatformP__Led2__makeOutput(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t PlatformP__MoteClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 60 "/home/tbauer/helena/stormport//tos/platforms/storm/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
#line 74
static inline void PlatformP__Sam4LowPower__customizePio(void );



static inline error_t PlatformP__LedsInit__default__init(void );
# 52 "/home/tbauer/helena/stormport//tos/platforms/storm/MoteClockP.nc"
static inline error_t MoteClockP__Init__init(void );
# 53 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4lClockP.nc"
static inline error_t HplSam4lClockP__Init__init(void );
#line 86
static inline uint32_t HplSam4lClockP__HplSam4Clock__getMainClockSpeed(void );
# 50 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4PeripheralClockP.nc"
static inline void /*HplSam4lClockC.PBA_USART2*/HplSam4PeripheralClockP__21__Cntl__enable(void );
#line 50
static inline void /*HplSam4lClockC.PBA_USART3*/HplSam4PeripheralClockP__22__Cntl__enable(void );
# 39 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/Sam4LowPower.nc"
static void McuSleepC__Sam4LowPower__customizePio(void );
# 54 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/McuSleepC.nc"
enum McuSleepC____nesc_unnamed4319 {
  McuSleepC__S_AWAKE, 
  McuSleepC__S_SLEEP, 
  McuSleepC__S_WAIT, 
  McuSleepC__S_BACKUP
};
uint32_t McuSleepC__ps;

struct McuSleepC____nesc_unnamed4320 {
};



void sam4LowPowerConfigure(void )   ;



static inline void McuSleepC__Sam4LowPower__configure(void );




static inline uint32_t McuSleepC__getPowerState(void );









static inline void McuSleepC__commonSleep(void );


static inline void McuSleepC__commonResume(void );


static inline void McuSleepC__setupSleepMode(void );

static inline void McuSleepC__resumeFromSleepMode(void );


static inline void McuSleepC__setupWaitMode(void );
#line 131
static inline void McuSleepC__resumeFromWaitMode(void );
#line 185
static inline void McuSleepC__setupBackupMode(void );





static inline void McuSleepC__resumeFromBackupMode(void );







static inline void McuSleepC__McuSleep__sleep(void );
#line 246
static void McuSleepC__InterruptWrapper__preamble(void );
#line 273
static inline void McuSleepC__InterruptWrapper__postamble(void );
# 22 "/home/tbauer/helena/stormport//tos/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0____nesc_unnamed4321 {
  HplSam4lGeneralIOP__0__MASK = 1 << 0
};
#line 223
static inline void /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1____nesc_unnamed4322 {
  HplSam4lGeneralIOP__1__MASK = 1 << 1
};
#line 223
static inline void /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2____nesc_unnamed4323 {
  HplSam4lGeneralIOP__2__MASK = 1 << 2
};
#line 223
static inline void /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3____nesc_unnamed4324 {
  HplSam4lGeneralIOP__3__MASK = 1 << 3
};
#line 223
static inline void /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4____nesc_unnamed4325 {
  HplSam4lGeneralIOP__4__MASK = 1 << 4
};
#line 223
static inline void /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5____nesc_unnamed4326 {
  HplSam4lGeneralIOP__5__MASK = 1 << 5
};
#line 223
static inline void /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6____nesc_unnamed4327 {
  HplSam4lGeneralIOP__6__MASK = 1 << 6
};
#line 223
static inline void /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7____nesc_unnamed4328 {
  HplSam4lGeneralIOP__7__MASK = 1 << 7
};
#line 223
static inline void /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8____nesc_unnamed4329 {
  HplSam4lGeneralIOP__8__MASK = 1 << 8
};
#line 223
static inline void /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9____nesc_unnamed4330 {
  HplSam4lGeneralIOP__9__MASK = 1 << 9
};
#line 223
static inline void /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10____nesc_unnamed4331 {
  HplSam4lGeneralIOP__10__MASK = 1 << 10
};
#line 223
static inline void /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11____nesc_unnamed4332 {
  HplSam4lGeneralIOP__11__MASK = 1 << 11
};
#line 223
static inline void /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12____nesc_unnamed4333 {
  HplSam4lGeneralIOP__12__MASK = 1 << 12
};
#line 223
static inline void /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13____nesc_unnamed4334 {
  HplSam4lGeneralIOP__13__MASK = 1 << 13
};
#line 223
static inline void /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14____nesc_unnamed4335 {
  HplSam4lGeneralIOP__14__MASK = 1 << 14
};
#line 223
static inline void /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15____nesc_unnamed4336 {
  HplSam4lGeneralIOP__15__MASK = 1 << 15
};
#line 223
static inline void /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16____nesc_unnamed4337 {
  HplSam4lGeneralIOP__16__MASK = 1 << 16
};
#line 223
static inline void /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__fired(void );
# 5 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPort.nc"
static void /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__HplSam4lGeneralIOPort__enableIRQ(uint8_t pin);
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17____nesc_unnamed4338 {
  HplSam4lGeneralIOP__17__MASK = 1 << 17
};
#line 46
static inline void /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IO__makeInput(void );
#line 203
static inline error_t /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__enableRisingEdge(void );






static inline error_t /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__enableFallingEdge(void );
#line 225
static inline void /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18____nesc_unnamed4339 {
  HplSam4lGeneralIOP__18__MASK = 1 << 18
};
#line 223
static inline void /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19____nesc_unnamed4340 {
  HplSam4lGeneralIOP__19__MASK = 1 << 19
};
#line 223
static inline void /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20____nesc_unnamed4341 {
  HplSam4lGeneralIOP__20__MASK = 1 << 20
};
#line 223
static inline void /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21____nesc_unnamed4342 {
  HplSam4lGeneralIOP__21__MASK = 1 << 21
};
#line 223
static inline void /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22____nesc_unnamed4343 {
  HplSam4lGeneralIOP__22__MASK = 1 << 22
};
#line 223
static inline void /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23____nesc_unnamed4344 {
  HplSam4lGeneralIOP__23__MASK = 1 << 23
};
#line 223
static inline void /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24____nesc_unnamed4345 {
  HplSam4lGeneralIOP__24__MASK = 1 << 24
};
#line 223
static inline void /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25____nesc_unnamed4346 {
  HplSam4lGeneralIOP__25__MASK = 1 << 25
};
#line 223
static inline void /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26____nesc_unnamed4347 {
  HplSam4lGeneralIOP__26__MASK = 1 << 26
};
#line 223
static inline void /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27____nesc_unnamed4348 {
  HplSam4lGeneralIOP__27__MASK = 1 << 0
};
#line 223
static inline void /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28____nesc_unnamed4349 {
  HplSam4lGeneralIOP__28__MASK = 1 << 1
};
#line 223
static inline void /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29____nesc_unnamed4350 {
  HplSam4lGeneralIOP__29__MASK = 1 << 2
};
#line 223
static inline void /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30____nesc_unnamed4351 {
  HplSam4lGeneralIOP__30__MASK = 1 << 3
};
#line 223
static inline void /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31____nesc_unnamed4352 {
  HplSam4lGeneralIOP__31__MASK = 1 << 4
};
#line 223
static inline void /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32____nesc_unnamed4353 {
  HplSam4lGeneralIOP__32__MASK = 1 << 5
};
#line 223
static inline void /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33____nesc_unnamed4354 {
  HplSam4lGeneralIOP__33__MASK = 1 << 6
};
#line 223
static inline void /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34____nesc_unnamed4355 {
  HplSam4lGeneralIOP__34__MASK = 1 << 7
};
#line 223
static inline void /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35____nesc_unnamed4356 {
  HplSam4lGeneralIOP__35__MASK = 1 << 8
};
#line 223
static inline void /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36____nesc_unnamed4357 {
  HplSam4lGeneralIOP__36__MASK = 1 << 9
};
#line 223
static inline void /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37____nesc_unnamed4358 {
  HplSam4lGeneralIOP__37__MASK = 1 << 10
};
#line 223
static inline void /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38____nesc_unnamed4359 {
  HplSam4lGeneralIOP__38__MASK = 1 << 11
};
#line 223
static inline void /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39____nesc_unnamed4360 {
  HplSam4lGeneralIOP__39__MASK = 1 << 12
};
#line 223
static inline void /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40____nesc_unnamed4361 {
  HplSam4lGeneralIOP__40__MASK = 1 << 13
};
#line 223
static inline void /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41____nesc_unnamed4362 {
  HplSam4lGeneralIOP__41__MASK = 1 << 14
};
#line 223
static inline void /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42____nesc_unnamed4363 {
  HplSam4lGeneralIOP__42__MASK = 1 << 15
};
#line 223
static inline void /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43____nesc_unnamed4364 {
  HplSam4lGeneralIOP__43__MASK = 1 << 0
};
#line 223
static inline void /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44____nesc_unnamed4365 {
  HplSam4lGeneralIOP__44__MASK = 1 << 1
};
#line 223
static inline void /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45____nesc_unnamed4366 {
  HplSam4lGeneralIOP__45__MASK = 1 << 2
};
#line 223
static inline void /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46____nesc_unnamed4367 {
  HplSam4lGeneralIOP__46__MASK = 1 << 3
};
#line 223
static inline void /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47____nesc_unnamed4368 {
  HplSam4lGeneralIOP__47__MASK = 1 << 4
};
#line 223
static inline void /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48____nesc_unnamed4369 {
  HplSam4lGeneralIOP__48__MASK = 1 << 5
};
#line 223
static inline void /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49____nesc_unnamed4370 {
  HplSam4lGeneralIOP__49__MASK = 1 << 6
};
#line 223
static inline void /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50____nesc_unnamed4371 {
  HplSam4lGeneralIOP__50__MASK = 1 << 7
};








static inline void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__set(void );




static inline void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__clr(void );
#line 53
static inline void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__makeOutput(void );
#line 223
static inline void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51____nesc_unnamed4372 {
  HplSam4lGeneralIOP__51__MASK = 1 << 8
};
#line 223
static inline void /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52____nesc_unnamed4373 {
  HplSam4lGeneralIOP__52__MASK = 1 << 9
};
#line 223
static inline void /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53____nesc_unnamed4374 {
  HplSam4lGeneralIOP__53__MASK = 1 << 10
};








static inline void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__set(void );




static inline void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__clr(void );
#line 53
static inline void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__makeOutput(void );
#line 223
static inline void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54____nesc_unnamed4375 {
  HplSam4lGeneralIOP__54__MASK = 1 << 11
};
#line 223
static inline void /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55____nesc_unnamed4376 {
  HplSam4lGeneralIOP__55__MASK = 1 << 12
};
#line 223
static inline void /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56____nesc_unnamed4377 {
  HplSam4lGeneralIOP__56__MASK = 1 << 13
};
#line 223
static inline void /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57____nesc_unnamed4378 {
  HplSam4lGeneralIOP__57__MASK = 1 << 14
};
#line 223
static inline void /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58____nesc_unnamed4379 {
  HplSam4lGeneralIOP__58__MASK = 1 << 15
};
#line 223
static inline void /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59____nesc_unnamed4380 {
  HplSam4lGeneralIOP__59__MASK = 1 << 16
};
#line 223
static inline void /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60____nesc_unnamed4381 {
  HplSam4lGeneralIOP__60__MASK = 1 << 17
};
#line 223
static inline void /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61____nesc_unnamed4382 {
  HplSam4lGeneralIOP__61__MASK = 1 << 18
};
#line 223
static inline void /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62____nesc_unnamed4383 {
  HplSam4lGeneralIOP__62__MASK = 1 << 19
};
#line 223
static inline void /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63____nesc_unnamed4384 {
  HplSam4lGeneralIOP__63__MASK = 1 << 20
};
#line 223
static inline void /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64____nesc_unnamed4385 {
  HplSam4lGeneralIOP__64__MASK = 1 << 21
};
#line 223
static inline void /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65____nesc_unnamed4386 {
  HplSam4lGeneralIOP__65__MASK = 1 << 22
};
#line 223
static inline void /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66____nesc_unnamed4387 {
  HplSam4lGeneralIOP__66__MASK = 1 << 23
};
#line 223
static inline void /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67____nesc_unnamed4388 {
  HplSam4lGeneralIOP__67__MASK = 1 << 24
};
#line 223
static inline void /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68____nesc_unnamed4389 {
  HplSam4lGeneralIOP__68__MASK = 1 << 25
};
#line 223
static inline void /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69____nesc_unnamed4390 {
  HplSam4lGeneralIOP__69__MASK = 1 << 26
};
#line 223
static inline void /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70____nesc_unnamed4391 {
  HplSam4lGeneralIOP__70__MASK = 1 << 27
};
#line 223
static inline void /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71____nesc_unnamed4392 {
  HplSam4lGeneralIOP__71__MASK = 1 << 28
};
#line 223
static inline void /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72____nesc_unnamed4393 {
  HplSam4lGeneralIOP__72__MASK = 1 << 29
};
#line 223
static inline void /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73____nesc_unnamed4394 {
  HplSam4lGeneralIOP__73__MASK = 1 << 30
};
#line 223
static inline void /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__ByteIRQ__fired(void );
# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static void /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__IRQ__fired(void );
# 20 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
enum /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74____nesc_unnamed4395 {
  HplSam4lGeneralIOP__74__MASK = 1 << 31
};
#line 223
static inline void /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__IRQ__default__fired(void );

static inline void /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__ByteIRQ__fired(void );
# 38 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/FunctionWrapper.nc"
static void HplSam4lGeneralIOPortP__IRQWrapper__postamble(void );
#line 37
static void HplSam4lGeneralIOPortP__IRQWrapper__preamble(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void HplSam4lGeneralIOPortP__PortC_IRQ__fired(
# 14 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
uint8_t arg_0x2b4e9bd6bb90);
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void HplSam4lGeneralIOPortP__PortB_IRQ__fired(
# 12 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
uint8_t arg_0x2b4e9bd6c310);
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void HplSam4lGeneralIOPortP__PortA_IRQ__fired(
# 10 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
uint8_t arg_0x2b4e9bd6ea00);
#line 66
static void HplSam4lGeneralIOPortP__PortA__enableIRQ(uint8_t bit);
#line 121
static void HplSam4lGeneralIOPortP__PortA_IRQ__default__fired(uint8_t i);
static void HplSam4lGeneralIOPortP__PortB_IRQ__default__fired(uint8_t i);
static void HplSam4lGeneralIOPortP__PortC_IRQ__default__fired(uint8_t i);

void GPIO_0_Handler(void )   ;






void GPIO_1_Handler(void )   ;






void GPIO_2_Handler(void )   ;






void GPIO_3_Handler(void )   ;






void GPIO_4_Handler(void )   ;






void GPIO_5_Handler(void )   ;






void GPIO_6_Handler(void )   ;






void GPIO_7_Handler(void )   ;






void GPIO_8_Handler(void )   ;






void GPIO_9_Handler(void )   ;






void GPIO_10_Handler(void )   ;






void GPIO_11_Handler(void )   ;
# 31 "/home/tbauer/helena/stormport//tos/platforms/storm/NoGPIOP.nc"
static inline void NoGPIOP__nullio__makeOutput(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/home/tbauer/helena/stormport//tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/home/tbauer/helena/stormport//tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/home/tbauer/helena/stormport//tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/home/tbauer/helena/stormport//tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b4e9b64da40);
# 76 "/home/tbauer/helena/stormport//tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/home/tbauer/helena/stormport//tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4396 {

  SchedulerBasicP__NUM_TASKS = 6U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 6 "BlePeripheral.nc"
static void DemoC__BlePeripheral__initialize(void );

static error_t DemoC__BlePeripheral__startAdvertising(void );
# 46 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
static void DemoC__Led__makeOutput(void );
#line 40
static void DemoC__Led__set(void );
static void DemoC__Led__clr(void );
# 19 "DemoC.nc"
static inline void DemoC__Boot__booted(void );






static inline void DemoC__BlePeripheral__ready(void );




static inline void DemoC__BlePeripheral__connected(void );
# 54 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
static error_t NrfBleP__Int__enableFallingEdge(void );
#line 53
static error_t NrfBleP__Int__enableRisingEdge(void );
# 70 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
static error_t NrfBleP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 46 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
static void NrfBleP__CS__makeOutput(void );
#line 40
static void NrfBleP__CS__set(void );
static void NrfBleP__CS__clr(void );
# 13 "BlePeripheral.nc"
static void NrfBleP__BlePeripheral__ready(void );


static void NrfBleP__BlePeripheral__connected(void );
# 44 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
static void NrfBleP__IntPort__makeInput(void );
# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
static void NrfBleP__SpiHPL__enableTX(void );
#line 25
static void NrfBleP__SpiHPL__setSPIMode(uint8_t cpol, uint8_t cpha);
#line 12
static void NrfBleP__SpiHPL__enableRX(void );
#line 7
static void NrfBleP__SpiHPL__enableUSARTPin(usart_pin_t pin);
#line 30
static void NrfBleP__SpiHPL__setSPIBaudRate(uint32_t b);
#line 5
static void NrfBleP__SpiHPL__initSPIMaster(void );
# 67 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
static error_t NrfBleP__ready__postTask(void );
#line 67
static error_t NrfBleP__connected__postTask(void );
# 141 "NrfBleP.nc"
enum NrfBleP____nesc_unnamed4397 {
#line 141
  NrfBleP__ready = 0U
};
#line 141
typedef int NrfBleP____nesc_sillytask_ready[NrfBleP__ready];



enum NrfBleP____nesc_unnamed4398 {
#line 145
  NrfBleP__connected = 1U
};
#line 145
typedef int NrfBleP____nesc_sillytask_connected[NrfBleP__connected];
#line 24
uint8_t NrfBleP__txbuf[80];
uint8_t NrfBleP__rxbuf[80];
bool NrfBleP__spiready = 0;
bool NrfBleP__spiqueued = 0;

enum NrfBleP____nesc_unnamed4399 {

  NrfBleP__NUM_CHARS = 1U, 
  NrfBleP__NUM_SERVICES = 1U
};




#line 35
typedef struct NrfBleP____nesc_unnamed4400 {

  uuid_t UUID;
} NrfBleP__Char_t;
#line 94
static inline error_t NrfBleP__BlePeripheral__startAdvertising(void );
#line 110
static inline void NrfBleP__BlePeripheral__initialize(void );
#line 130
static inline void NrfBleP__Int__fired(void );










static inline void NrfBleP__ready__runTask(void );



static inline void NrfBleP__connected__runTask(void );



static inline void NrfBleP__SpiPacket__sendDone(uint8_t *txBuf, uint8_t *rxBuf, 
uint16_t len, error_t error);
# 49 "/home/tbauer/helena/stormport//tos/system/FcfsResourceQueueC.nc"
enum /*HilSam4lUSARTC.arb0.Queue*/FcfsResourceQueueC__0____nesc_unnamed4401 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*HilSam4lUSARTC.arb0.Queue*/FcfsResourceQueueC__0__resQ[0U];



static inline error_t /*HilSam4lUSARTC.arb0.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
static void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c4410);
# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
static void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c8c70);
#line 75
enum /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0____nesc_unnamed4402 {
#line 75
  ArbiterP__0__grantedTask = 2U
};
#line 75
typedef int /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0____nesc_unnamed4403 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0____nesc_unnamed4404 {
#line 68
  ArbiterP__0__default_owner_id = 0U
};
#line 69
enum /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0____nesc_unnamed4405 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__state = /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__resId = /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__reqResId;
#line 190
static inline void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);
#line 216
static inline void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);
# 49 "/home/tbauer/helena/stormport//tos/system/FcfsResourceQueueC.nc"
enum /*HilSam4lUSARTC.arb1.Queue*/FcfsResourceQueueC__1____nesc_unnamed4406 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*HilSam4lUSARTC.arb1.Queue*/FcfsResourceQueueC__1__resQ[0U];



static inline error_t /*HilSam4lUSARTC.arb1.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
static void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c4410);
# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
static void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c8c70);
#line 75
enum /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1____nesc_unnamed4407 {
#line 75
  ArbiterP__1__grantedTask = 3U
};
#line 75
typedef int /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1____nesc_unnamed4408 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1____nesc_unnamed4409 {
#line 68
  ArbiterP__1__default_owner_id = 0U
};
#line 69
enum /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1____nesc_unnamed4410 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__state = /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__resId = /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__reqResId;
#line 190
static inline void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 202
static inline void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id);
#line 216
static inline void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);
# 49 "/home/tbauer/helena/stormport//tos/system/FcfsResourceQueueC.nc"
enum /*HilSam4lUSARTC.arb2.Queue*/FcfsResourceQueueC__2____nesc_unnamed4411 {
#line 49
  FcfsResourceQueueC__2__NO_ENTRY = 0xFF
};
uint8_t /*HilSam4lUSARTC.arb2.Queue*/FcfsResourceQueueC__2__resQ[1U];



static inline error_t /*HilSam4lUSARTC.arb2.Queue*/FcfsResourceQueueC__2__Init__init(void );
# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
static void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__ResourceConfigure__configure(
# 60 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c4410);
# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
static void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__Resource__granted(
# 54 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c8c70);
#line 75
enum /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2____nesc_unnamed4412 {
#line 75
  ArbiterP__2__grantedTask = 4U
};
#line 75
typedef int /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2____nesc_sillytask_grantedTask[/*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__grantedTask];
#line 67
enum /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2____nesc_unnamed4413 {
#line 67
  ArbiterP__2__RES_CONTROLLED, ArbiterP__2__RES_GRANTING, ArbiterP__2__RES_IMM_GRANTING, ArbiterP__2__RES_BUSY
};
#line 68
enum /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2____nesc_unnamed4414 {
#line 68
  ArbiterP__2__default_owner_id = 1U
};
#line 69
enum /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2____nesc_unnamed4415 {
#line 69
  ArbiterP__2__NO_RES = 0xFF
};
uint8_t /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__state = /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__RES_CONTROLLED;
uint8_t /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__resId = /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__default_owner_id;
uint8_t /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__reqResId;
#line 190
static inline void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__grantedTask__runTask(void );
#line 202
static inline void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__Resource__default__granted(uint8_t id);
#line 216
static inline void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(uint8_t id);
# 49 "/home/tbauer/helena/stormport//tos/system/FcfsResourceQueueC.nc"
enum /*HilSam4lUSARTC.arb3.Queue*/FcfsResourceQueueC__3____nesc_unnamed4416 {
#line 49
  FcfsResourceQueueC__3__NO_ENTRY = 0xFF
};
uint8_t /*HilSam4lUSARTC.arb3.Queue*/FcfsResourceQueueC__3__resQ[1U];



static inline error_t /*HilSam4lUSARTC.arb3.Queue*/FcfsResourceQueueC__3__Init__init(void );
# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
static void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__ResourceConfigure__configure(
# 60 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c4410);
# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
static void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__Resource__granted(
# 54 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
uint8_t arg_0x2b4e9c0c8c70);
#line 75
enum /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3____nesc_unnamed4417 {
#line 75
  ArbiterP__3__grantedTask = 5U
};
#line 75
typedef int /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3____nesc_sillytask_grantedTask[/*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__grantedTask];
#line 67
enum /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3____nesc_unnamed4418 {
#line 67
  ArbiterP__3__RES_CONTROLLED, ArbiterP__3__RES_GRANTING, ArbiterP__3__RES_IMM_GRANTING, ArbiterP__3__RES_BUSY
};
#line 68
enum /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3____nesc_unnamed4419 {
#line 68
  ArbiterP__3__default_owner_id = 1U
};
#line 69
enum /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3____nesc_unnamed4420 {
#line 69
  ArbiterP__3__NO_RES = 0xFF
};
uint8_t /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__state = /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__RES_CONTROLLED;
uint8_t /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__resId = /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__default_owner_id;
uint8_t /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__reqResId;
#line 190
static inline void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__grantedTask__runTask(void );
#line 202
static inline void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__Resource__default__granted(uint8_t id);
#line 216
static inline void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__ResourceConfigure__default__configure(uint8_t id);
# 103 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline uint8_t /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__readData(void );



static inline void /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__sendData(uint8_t d);



static inline bool /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__isTXRdy(void );



static inline bool /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__isRXRdy(void );
#line 103
static inline uint8_t /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__readData(void );



static inline void /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__sendData(uint8_t d);



static inline bool /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__isTXRdy(void );



static inline bool /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__isRXRdy(void );
# 53 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4Clock.nc"
static uint32_t /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__MainClock__getMainClockSpeed(void );
# 42 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4PeripheralClockCntl.nc"
static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__ClockCtl__enable(void );
# 19 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableUSARTPin(usart_pin_t pin);
#line 31
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableTX(void );
#line 43
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableRX(void );
#line 94
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__initSPIMaster(void );








static inline uint8_t /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__readData(void );



static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__sendData(uint8_t d);



static inline bool /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__isTXRdy(void );



static inline bool /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__isRXRdy(void );
#line 128
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__setSPIBaudRate(uint32_t b);
#line 159
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__setSPIMode(uint8_t cpol, uint8_t cpha);
# 53 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4Clock.nc"
static uint32_t /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__MainClock__getMainClockSpeed(void );
# 42 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4PeripheralClockCntl.nc"
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__ClockCtl__enable(void );
# 19 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableUSARTPin(usart_pin_t pin);
#line 31
static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableTX(void );



static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__disableTX(void );







static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableRX(void );



static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__disableRX(void );
#line 84
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__initUART(void );
#line 103
static inline uint8_t /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__readData(void );



static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__sendData(uint8_t d);



static inline bool /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__isTXRdy(void );



static inline bool /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__isRXRdy(void );



static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__setUartBaudRate(uint32_t b);
# 38 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/FunctionWrapper.nc"
static void HplSam4lUSARTIRQP__IRQWrapper__postamble(void );
#line 37
static void HplSam4lUSARTIRQP__IRQWrapper__preamble(void );
# 33 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
static bool HplSam4lUSARTIRQP__usart1__isTXRdy(void );
static bool HplSam4lUSARTIRQP__usart1__isRXRdy(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static void HplSam4lUSARTIRQP__usart2irq__RXRdyFired(void );
static void HplSam4lUSARTIRQP__usart2irq__TXRdyFired(void );
# 33 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
static bool HplSam4lUSARTIRQP__usart2__isTXRdy(void );
static bool HplSam4lUSARTIRQP__usart2__isRXRdy(void );
# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static void HplSam4lUSARTIRQP__usart3irq__RXRdyFired(void );
static void HplSam4lUSARTIRQP__usart3irq__TXRdyFired(void );
#line 3
static void HplSam4lUSARTIRQP__usart0irq__RXRdyFired(void );
static void HplSam4lUSARTIRQP__usart0irq__TXRdyFired(void );
#line 3
static void HplSam4lUSARTIRQP__usart1irq__RXRdyFired(void );
static void HplSam4lUSARTIRQP__usart1irq__TXRdyFired(void );
# 33 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
static bool HplSam4lUSARTIRQP__usart0__isTXRdy(void );
static bool HplSam4lUSARTIRQP__usart0__isRXRdy(void );
#line 33
static bool HplSam4lUSARTIRQP__usart3__isTXRdy(void );
static bool HplSam4lUSARTIRQP__usart3__isRXRdy(void );
# 21 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
void USART0_Handler(void )   ;
#line 35
void USART1_Handler(void )   ;
#line 49
void USART2_Handler(void )   ;
#line 63
void USART3_Handler(void )   ;
#line 86
static inline void HplSam4lUSARTIRQP__usart0irq__disableTXRdyIRQ(void );








static inline void HplSam4lUSARTIRQP__usart0irq__disableRXRdyIRQ(void );



static inline bool HplSam4lUSARTIRQP__usart0irq__isRXRdyIRQEnabled(void );



static inline bool HplSam4lUSARTIRQP__usart0irq__isTXRdyIRQEnabled(void );
#line 120
static inline void HplSam4lUSARTIRQP__usart1irq__disableTXRdyIRQ(void );








static inline void HplSam4lUSARTIRQP__usart1irq__disableRXRdyIRQ(void );



static inline bool HplSam4lUSARTIRQP__usart1irq__isRXRdyIRQEnabled(void );



static inline bool HplSam4lUSARTIRQP__usart1irq__isTXRdyIRQEnabled(void );






static inline void HplSam4lUSARTIRQP__enableUSART2IRQ(void );



static inline void HplSam4lUSARTIRQP__usart2irq__enableTXRdyIRQ(void );




static inline void HplSam4lUSARTIRQP__usart2irq__disableTXRdyIRQ(void );



static inline void HplSam4lUSARTIRQP__usart2irq__enableRXRdyIRQ(void );




static inline void HplSam4lUSARTIRQP__usart2irq__disableRXRdyIRQ(void );



static inline bool HplSam4lUSARTIRQP__usart2irq__isRXRdyIRQEnabled(void );



static inline bool HplSam4lUSARTIRQP__usart2irq__isTXRdyIRQEnabled(void );
#line 186
static inline void HplSam4lUSARTIRQP__usart3irq__disableTXRdyIRQ(void );








static inline void HplSam4lUSARTIRQP__usart3irq__disableRXRdyIRQ(void );



static inline bool HplSam4lUSARTIRQP__usart3irq__isRXRdyIRQEnabled(void );



static inline bool HplSam4lUSARTIRQP__usart3irq__isTXRdyIRQEnabled(void );
# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__disableRXRdyIRQ(void );
#line 7
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__disableTXRdyIRQ(void );
# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__receivedByte(uint8_t byte);
#line 100
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__receiveDone(
#line 96
uint8_t * buf, 



uint16_t len, error_t error);
#line 58
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__sendDone(
#line 54
uint8_t * buf, 



uint16_t len, error_t error);
# 28 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart__sendData(uint8_t d);
#line 27
static uint8_t /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart__readData(void );
# 22 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
uint8_t */*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_buf = (void *)0;
uint16_t /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_len;
uint16_t /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_ptr;

uint8_t */*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_buf = (void *)0;
uint16_t /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_len;
uint16_t /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_ptr;

bool /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__forwardRXIRQ = FALSE;
bool /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__irqmode_spi = FALSE;
#line 304
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__RXRdyFired(void );
#line 341
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__sendDone(uint8_t *buf, uint16_t len, error_t error);
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__receiveDone(uint8_t *buf, uint16_t len, error_t error);
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__receivedByte(uint8_t byte);

static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__TXRdyFired(void );
#line 489
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__SpiPacket__default__sendDone(
#line 482
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__disableRXRdyIRQ(void );
#line 7
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__disableTXRdyIRQ(void );
# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__receivedByte(uint8_t byte);
#line 100
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__receiveDone(
#line 96
uint8_t * buf, 



uint16_t len, error_t error);
#line 58
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__sendDone(
#line 54
uint8_t * buf, 



uint16_t len, error_t error);
# 28 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart__sendData(uint8_t d);
#line 27
static uint8_t /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart__readData(void );
# 22 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
uint8_t */*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_buf = (void *)0;
uint16_t /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_len;
uint16_t /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_ptr;

uint8_t */*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_buf = (void *)0;
uint16_t /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_len;
uint16_t /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_ptr;

bool /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__forwardRXIRQ = FALSE;
bool /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__irqmode_spi = FALSE;
#line 304
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__RXRdyFired(void );
#line 341
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__sendDone(uint8_t *buf, uint16_t len, error_t error);
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__receiveDone(uint8_t *buf, uint16_t len, error_t error);
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__receivedByte(uint8_t byte);

static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__TXRdyFired(void );
#line 489
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__SpiPacket__default__sendDone(
#line 482
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__disableRXRdyIRQ(void );
#line 8
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__enableRXRdyIRQ(void );
#line 7
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__disableTXRdyIRQ(void );
#line 6
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__enableTXRdyIRQ(void );
# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__receivedByte(uint8_t byte);
#line 100
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__receiveDone(
#line 96
uint8_t * buf, 



uint16_t len, error_t error);
#line 58
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__sendDone(
#line 54
uint8_t * buf, 



uint16_t len, error_t error);
# 28 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart__sendData(uint8_t d);
#line 27
static uint8_t /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart__readData(void );
# 22 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
uint8_t */*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf = (void *)0;
uint16_t /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_len;
uint16_t /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_ptr;

uint8_t */*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf = (void *)0;
uint16_t /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_len;
uint16_t /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_ptr;

bool /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__forwardRXIRQ = FALSE;
bool /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__irqmode_spi = FALSE;
#line 304
static inline void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__RXRdyFired(void );
#line 341
static inline void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__sendDone(uint8_t *buf, uint16_t len, error_t error);
static inline void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__receiveDone(uint8_t *buf, uint16_t len, error_t error);
static inline void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__receivedByte(uint8_t byte);

static inline void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__TXRdyFired(void );
#line 463
static error_t /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__SpiPacket__send(
#line 452
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__disableRXRdyIRQ(void );
#line 7
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__disableTXRdyIRQ(void );
# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__receivedByte(uint8_t byte);
#line 100
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__receiveDone(
#line 96
uint8_t * buf, 



uint16_t len, error_t error);
#line 58
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__sendDone(
#line 54
uint8_t * buf, 



uint16_t len, error_t error);
# 29 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__setUartBaudRate(uint32_t b);
#line 13
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__disableRX(void );
#line 33
static bool /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__isTXRdy(void );
#line 28
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__sendData(uint8_t d);
#line 9
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__enableTX(void );


static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__enableRX(void );
#line 4
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__initUART(void );
#line 27
static uint8_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__readData(void );
#line 10
static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__disableTX(void );
# 22 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
uint8_t */*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_buf = (void *)0;
uint16_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_len;
uint16_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_ptr;

uint8_t */*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_buf = (void *)0;
uint16_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_len;
uint16_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_ptr;

bool /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__forwardRXIRQ = FALSE;
bool /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__irqmode_spi = FALSE;
#line 44
static inline error_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartByte__send(uint8_t byte);
#line 100
static inline error_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartControl__setSpeed(uart_speed_t speed);
#line 124
static inline error_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartControl__setDuplexMode(uart_duplex_t duplex);
#line 304
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__RXRdyFired(void );
#line 341
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__sendDone(uint8_t *buf, uint16_t len, error_t error);
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__receiveDone(uint8_t *buf, uint16_t len, error_t error);
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__receivedByte(uint8_t byte);

static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__TXRdyFired(void );
#line 489
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__SpiPacket__default__sendDone(
#line 482
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 7 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
static void PlatformSerialP__HplSam4lUSART__enableUSARTPin(usart_pin_t pin);
# 59 "/home/tbauer/helena/stormport//tos/interfaces/UartControl.nc"
static error_t PlatformSerialP__UartControl__setSpeed(uart_speed_t speed);
#line 76
static error_t PlatformSerialP__UartControl__setDuplexMode(uart_duplex_t duplex);
# 17 "/home/tbauer/helena/stormport//tos/platforms/storm/PlatformSerialP.nc"
static inline error_t PlatformSerialP__Init__init(void );
# 46 "/home/tbauer/helena/stormport//tos/interfaces/UartByte.nc"
static error_t SerialPrintfP__UartByte__send(uint8_t byte);
# 58 "/home/tbauer/helena/stormport//tos/platforms/storm/lib/printf/SerialPrintfP.nc"
static inline unsigned int SerialPrintfP__mini_strlen(const char *s);






static unsigned int SerialPrintfP__mini_itoa(int value, unsigned int radix, unsigned int uppercase, 
char *buffer, unsigned int zero_pad);
#line 132
int storm_vsnprintf(char *buffer, unsigned int buffer_len, const char *fmt, va_list va)   ;
#line 250
int storm_snprintf(char *buffer, unsigned int buffer_len, const char *fmt, ...)   ;










uint8_t SerialPrintfP__storm_printf_buffer[256];

int storm_printf(const char *fmt, ...)   ;
#line 280
static inline error_t SerialPrintfP__Init__init(void );




static uint32_t volatile *const SerialPrintfP__stim0_32 = (volatile uint32_t *)0xE0000000;
static uint8_t volatile *const SerialPrintfP__stim0_8 = (volatile uint8_t *)0xE0000000;

static uint32_t volatile *const SerialPrintfP__stim1_32 = (volatile uint32_t *)0xE0000004;
static uint16_t volatile *const SerialPrintfP__stim1_16 = (volatile uint16_t *)0xE0000004;
static uint8_t volatile *const SerialPrintfP__stim1_8 = (volatile uint8_t *)0xE0000004;



void storm_trace(const char *s)   ;








void storm_trace8(uint8_t v)   ;




void storm_trace16(uint16_t v)   ;




void storm_trace32(uint32_t v)   ;
# 56 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/cortexm4hardware.h"
__inline  __attribute((always_inline)) __nesc_atomic_t __nesc_atomic_start()
{
  __nesc_atomic_t oldState = 0;
  __nesc_atomic_t newState = 1;

#line 60
   __asm volatile (
  "mrs %[old], primask\n"
  "msr primask, %[new]\n" : 
  [old] "=&r"(oldState) : 
  [new] "r"(newState) : 
  "cc", "memory");

  return oldState;
}

__inline  __attribute((always_inline)) void __nesc_atomic_end(__nesc_atomic_t oldState)
{
   __asm volatile ("" :  :  : "memory");

   __asm volatile (
  "msr primask, %[old]" :  : 

  [old] "r"(oldState));}

# 37 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/FunctionWrapper.nc"
inline static void HplSam4lGeneralIOPortP__IRQWrapper__preamble(void ){
#line 37
  McuSleepC__InterruptWrapper__preamble();
#line 37
}
#line 37
# 94 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/McuSleepC.nc"
static inline void McuSleepC__resumeFromSleepMode(void )
#line 94
{
}

#line 131
static inline void McuSleepC__resumeFromWaitMode(void )
#line 131
{
}

#line 191
static inline void McuSleepC__resumeFromBackupMode(void )
#line 191
{
}

#line 89
static inline void McuSleepC__commonResume(void )
#line 89
{
}

# 223 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__MASK;
      /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__MASK;
      /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__MASK;
      /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__MASK;
      /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__MASK;
      /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__MASK;
      /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__MASK;
      /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__MASK;
      /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__MASK;
      /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__MASK;
      /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__MASK;
      /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__MASK;
      /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__MASK;
      /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__MASK;
      /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__MASK;
      /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__MASK;
      /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__MASK;
      /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__IRQ__fired();
    }
}

# 70 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
inline static error_t NrfBleP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__SpiPacket__send(txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 36 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__clr(void )
{
  ((gpio_port_t volatile *)1074664448)->ovrc = /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__MASK;
}

# 41 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
inline static void NrfBleP__CS__clr(void ){
#line 41
  /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__clr();
#line 41
}
#line 41
# 130 "NrfBleP.nc"
static inline void NrfBleP__Int__fired(void )
{
  if (NrfBleP__spiqueued) {
      NrfBleP__CS__clr();
      NrfBleP__SpiPacket__send(NrfBleP__txbuf, NrfBleP__rxbuf, 1);
      NrfBleP__spiready = 0;
    }
  else 
#line 136
    {
      NrfBleP__spiready = 1;
    }
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__fired(void ){
#line 68
  NrfBleP__Int__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__MASK;
      /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__fired();
    }
}

# 144 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline void HplSam4lUSARTIRQP__enableUSART2IRQ(void )
{
  NVIC->iser.flat[2] = 1 << 3;
}

#line 148
static inline void HplSam4lUSARTIRQP__usart2irq__enableTXRdyIRQ(void )
{
  HplSam4lUSARTIRQP__enableUSART2IRQ();
  USART2->ier.bits.txrdy = 1;
}

# 6 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__enableTXRdyIRQ(void ){
#line 6
  HplSam4lUSARTIRQP__usart2irq__enableTXRdyIRQ();
#line 6
}
#line 6
# 157 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline void HplSam4lUSARTIRQP__usart2irq__enableRXRdyIRQ(void )
{
  HplSam4lUSARTIRQP__enableUSART2IRQ();
  USART2->ier.bits.rxrdy = 1;
}

# 8 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__enableRXRdyIRQ(void ){
#line 8
  HplSam4lUSARTIRQP__usart2irq__enableRXRdyIRQ();
#line 8
}
#line 8
# 223 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__MASK;
      /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__MASK;
      /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__MASK;
      /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__MASK;
      /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__MASK;
      /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__MASK;
      /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__MASK;
      /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__MASK;
      /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663424)->ifr & ((gpio_port_t volatile *)1074663424)->ier) & /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__MASK) 
    {
      ((gpio_port_t volatile *)1074663424)->ifrc = /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__MASK;
      /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__IRQ__fired();
    }
}

# 273 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/McuSleepC.nc"
static inline void McuSleepC__InterruptWrapper__postamble(void )
#line 273
{
}

# 38 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/FunctionWrapper.nc"
inline static void HplSam4lGeneralIOPortP__IRQWrapper__postamble(void ){
#line 38
  McuSleepC__InterruptWrapper__postamble();
#line 38
}
#line 38
# 223 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__MASK;
      /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__MASK;
      /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__MASK;
      /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__MASK;
      /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__MASK;
      /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__MASK;
      /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__MASK;
      /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__MASK;
      /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__MASK;
      /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__MASK;
      /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__MASK;
      /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__MASK;
      /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__MASK;
      /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__MASK;
      /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__MASK;
      /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074663936)->ifr & ((gpio_port_t volatile *)1074663936)->ier) & /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__MASK) 
    {
      ((gpio_port_t volatile *)1074663936)->ifrc = /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__MASK;
      /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__MASK;
      /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__MASK;
      /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__MASK;
      /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__MASK;
      /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__MASK;
      /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__MASK;
      /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__MASK;
      /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__MASK;
      /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__MASK;
      /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__MASK;
      /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__MASK;
      /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__MASK;
      /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__MASK;
      /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__MASK;
      /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__MASK;
      /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__MASK;
      /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__MASK;
      /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__MASK;
      /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__MASK;
      /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__MASK;
      /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__MASK;
      /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__MASK;
      /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__MASK;
      /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__MASK;
      /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__MASK;
      /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__MASK;
      /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__MASK;
      /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__MASK;
      /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__MASK;
      /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__MASK;
      /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__MASK;
      /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__IRQ__fired();
    }
}

#line 223
static inline void /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__IRQ__default__fired(void )
#line 223
{
}

# 68 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static void /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__IRQ__fired(void ){
#line 68
  /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__IRQ__default__fired();
#line 68
}
#line 68
# 225 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__ByteIRQ__fired(void )
{
  if ((((gpio_port_t volatile *)1074664448)->ifr & ((gpio_port_t volatile *)1074664448)->ier) & /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__MASK) 
    {
      ((gpio_port_t volatile *)1074664448)->ifrc = /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__MASK;
      /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__IRQ__fired();
    }
}

# 124 "/home/tbauer/helena/stormport//tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/home/tbauer/helena/stormport//tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/home/tbauer/helena/stormport//tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 22 "/home/tbauer/helena/stormport//tos/system/NoInitC.nc"
static inline error_t NoInitC__Init__init(void )
#line 22
{
  return SUCCESS;
}

# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
inline static error_t PlatformP__RadioInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = NoInitC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 31 "/home/tbauer/helena/stormport//tos/platforms/storm/NoGPIOP.nc"
static inline void NoGPIOP__nullio__makeOutput(void )
{
}

# 46 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
inline static void PlatformP__Led2__makeOutput(void ){
#line 46
  NoGPIOP__nullio__makeOutput();
#line 46
}
#line 46
inline static void PlatformP__Led1__makeOutput(void ){
#line 46
  NoGPIOP__nullio__makeOutput();
#line 46
}
#line 46
inline static void PlatformP__Led0__makeOutput(void ){
#line 46
  NoGPIOP__nullio__makeOutput();
#line 46
}
#line 46
# 78 "/home/tbauer/helena/stormport//tos/platforms/storm/PlatformP.nc"
static inline error_t PlatformP__LedsInit__default__init(void )
{
  PlatformP__Led0__makeOutput();
  PlatformP__Led1__makeOutput();
  PlatformP__Led2__makeOutput();
  return SUCCESS;
}

# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__LedsInit__default__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 52 "/home/tbauer/helena/stormport//tos/platforms/storm/MoteClockP.nc"
static inline error_t MoteClockP__Init__init(void )
#line 52
{
#line 75
  return SUCCESS;
}

# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MoteClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
inline static error_t PlatformP__IRQInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MoteClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 60 "/home/tbauer/helena/stormport//tos/platforms/storm/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{



  PlatformP__IRQInit__init();
  PlatformP__MoteClockInit__init();

  PlatformP__LedsInit__init();
  PlatformP__RadioInit__init();

  return SUCCESS;
}

# 280 "/home/tbauer/helena/stormport//tos/platforms/storm/lib/printf/SerialPrintfP.nc"
static inline error_t SerialPrintfP__Init__init(void )
{
  return SUCCESS;
}

# 86 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4lClockP.nc"
static inline uint32_t HplSam4lClockP__HplSam4Clock__getMainClockSpeed(void )
{
  return 48000;
}

# 53 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4Clock.nc"
inline static uint32_t /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__MainClock__getMainClockSpeed(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = HplSam4lClockP__HplSam4Clock__getMainClockSpeed();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 119 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__setUartBaudRate(uint32_t b)
{



  uint32_t cd = /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__MainClock__getMainClockSpeed() * 625;

#line 125
  cd /= b * 10;
  ((volatile usart_t *)1073938432U)->brgr.bits.cd = cd;
}

# 29 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__setUartBaudRate(uint32_t b){
#line 29
  /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__setUartBaudRate(b);
#line 29
}
#line 29
# 100 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline error_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartControl__setSpeed(uart_speed_t speed)
{
  /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__setUartBaudRate((uint32_t )speed);
  return SUCCESS;
}

# 59 "/home/tbauer/helena/stormport//tos/interfaces/UartControl.nc"
inline static error_t PlatformSerialP__UartControl__setSpeed(uart_speed_t speed){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartControl__setSpeed(speed);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 43 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableRX(void )
{
  ((volatile usart_t *)1073938432U)->cr.bits.rxen = 1;
}

# 12 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__enableRX(void ){
#line 12
  /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableRX();
#line 12
}
#line 12
# 31 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableTX(void )
{
  ((volatile usart_t *)1073938432U)->cr.bits.txen = 1;
}

# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__enableTX(void ){
#line 9
  /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableTX();
#line 9
}
#line 9
#line 4
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__initUART(void ){
#line 4
  /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__initUART();
#line 4
}
#line 4
# 47 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__disableRX(void )
{
  ((volatile usart_t *)1073938432U)->cr.bits.rxdis = 1;
}

# 13 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__disableRX(void ){
#line 13
  /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__disableRX();
#line 13
}
#line 13
# 35 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__disableTX(void )
{
  ((volatile usart_t *)1073938432U)->cr.bits.txdis = 1;
}

# 10 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__disableTX(void ){
#line 10
  /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__disableTX();
#line 10
}
#line 10
# 124 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline error_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartControl__setDuplexMode(uart_duplex_t duplex)
{
  switch (duplex) 
    {
      case TOS_UART_OFF: 
        /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__disableRX();
      /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__disableTX();
      break;
      case TOS_UART_RONLY: 
        /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__initUART();
      /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__disableTX();
      /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__enableRX();
      break;
      case TOS_UART_TONLY: 
        /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__initUART();
      /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__enableTX();
      /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__disableRX();
      break;
      case TOS_UART_DUPLEX: 
        /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__initUART();
      /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__enableTX();
      /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__enableRX();
      break;
    }
  return SUCCESS;
}

# 76 "/home/tbauer/helena/stormport//tos/interfaces/UartControl.nc"
inline static error_t PlatformSerialP__UartControl__setDuplexMode(uart_duplex_t duplex){
#line 76
  unsigned char __nesc_result;
#line 76

#line 76
  __nesc_result = /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartControl__setDuplexMode(duplex);
#line 76

#line 76
  return __nesc_result;
#line 76
}
#line 76
# 7 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void PlatformSerialP__HplSam4lUSART__enableUSARTPin(usart_pin_t pin){
#line 7
  /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableUSARTPin(pin);
#line 7
}
#line 7
# 17 "/home/tbauer/helena/stormport//tos/platforms/storm/PlatformSerialP.nc"
static inline error_t PlatformSerialP__Init__init(void )
{

  PlatformSerialP__HplSam4lUSART__enableUSARTPin(USART3_TX_PB10);
  PlatformSerialP__HplSam4lUSART__enableUSARTPin(USART3_RX_PB09);

  PlatformSerialP__UartControl__setDuplexMode(TOS_UART_DUPLEX);
  PlatformSerialP__UartControl__setSpeed(115200);
  return SUCCESS;
}

# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformSerialP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, SerialPrintfP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PlatformP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 50 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4PeripheralClockP.nc"
static inline void /*HplSam4lClockC.PBA_USART3*/HplSam4PeripheralClockP__22__Cntl__enable(void )
{
  uint32_t shadow = * (uint32_t volatile *)((void volatile *)PM + 40U);

#line 53
  shadow |= 1 << 11;
  PM->unlock = 0xAA000000 | 40U;
  * (uint32_t volatile *)((void volatile *)PM + 40U) = shadow;
}

# 42 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4PeripheralClockCntl.nc"
inline static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__ClockCtl__enable(void ){
#line 42
  /*HplSam4lClockC.PBA_USART3*/HplSam4PeripheralClockP__22__Cntl__enable();
#line 42
}
#line 42
# 65 "/home/tbauer/helena/stormport//tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 202 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
static inline void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
inline static void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__Resource__granted(uint8_t arg_0x2b4e9c0c8c70){
#line 102
    /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__Resource__default__granted(arg_0x2b4e9c0c8c70);
#line 102
}
#line 102
# 216 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
static inline void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
inline static void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__ResourceConfigure__configure(uint8_t arg_0x2b4e9c0c4410){
#line 59
    /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__ResourceConfigure__default__configure(arg_0x2b4e9c0c4410);
#line 59
}
#line 59
# 190 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
static inline void /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__resId = /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__reqResId;
      /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__state = /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__ResourceConfigure__configure(/*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__resId);
  /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__Resource__granted(/*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__resId);
}




static inline void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
inline static void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__Resource__granted(uint8_t arg_0x2b4e9c0c8c70){
#line 102
    /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__Resource__default__granted(arg_0x2b4e9c0c8c70);
#line 102
}
#line 102
# 216 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
static inline void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
inline static void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__ResourceConfigure__configure(uint8_t arg_0x2b4e9c0c4410){
#line 59
    /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__ResourceConfigure__default__configure(arg_0x2b4e9c0c4410);
#line 59
}
#line 59
# 190 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
static inline void /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__resId = /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__reqResId;
      /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__state = /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__ResourceConfigure__configure(/*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__resId);
  /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__Resource__granted(/*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__resId);
}




static inline void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
inline static void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x2b4e9c0c8c70){
#line 102
    /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__Resource__default__granted(arg_0x2b4e9c0c8c70);
#line 102
}
#line 102
# 216 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
static inline void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
inline static void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x2b4e9c0c4410){
#line 59
    /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x2b4e9c0c4410);
#line 59
}
#line 59
# 190 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
static inline void /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__resId = /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__reqResId;
      /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__state = /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__resId);
  /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__Resource__granted(/*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__resId);
}




static inline void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/home/tbauer/helena/stormport//tos/interfaces/Resource.nc"
inline static void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x2b4e9c0c8c70){
#line 102
    /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x2b4e9c0c8c70);
#line 102
}
#line 102
# 216 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
static inline void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/home/tbauer/helena/stormport//tos/interfaces/ResourceConfigure.nc"
inline static void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2b4e9c0c4410){
#line 59
    /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x2b4e9c0c4410);
#line 59
}
#line 59
# 190 "/home/tbauer/helena/stormport//tos/system/ArbiterP.nc"
static inline void /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__resId = /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__reqResId;
      /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__state = /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__resId);
  /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__Resource__granted(/*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__resId);
}

# 31 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__set(void )
{
  ((gpio_port_t volatile *)1074664448)->ovrs = /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__MASK;
}

# 40 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
inline static void DemoC__Led__set(void ){
#line 40
  /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__set();
#line 40
}
#line 40
# 31 "DemoC.nc"
static inline void DemoC__BlePeripheral__connected(void )
{
  DemoC__Led__set();
}

# 16 "BlePeripheral.nc"
inline static void NrfBleP__BlePeripheral__connected(void ){
#line 16
  DemoC__BlePeripheral__connected();
#line 16
}
#line 16
# 145 "NrfBleP.nc"
static inline void NrfBleP__connected__runTask(void )
#line 145
{
  NrfBleP__BlePeripheral__connected();
}

#line 94
static inline error_t NrfBleP__BlePeripheral__startAdvertising(void )
#line 94
{
  NrfBleP__CS__clr();
  NrfBleP__txbuf[0] = 2;
  if (NrfBleP__spiready) {
      NrfBleP__SpiPacket__send(NrfBleP__txbuf, NrfBleP__rxbuf, 1);
    }
  else 
#line 99
    {
      NrfBleP__spiqueued = 1;
    }
  return SUCCESS;
}

# 8 "BlePeripheral.nc"
inline static error_t DemoC__BlePeripheral__startAdvertising(void ){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = NrfBleP__BlePeripheral__startAdvertising();
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 26 "DemoC.nc"
static inline void DemoC__BlePeripheral__ready(void )
{
  DemoC__BlePeripheral__startAdvertising();
}

# 13 "BlePeripheral.nc"
inline static void NrfBleP__BlePeripheral__ready(void ){
#line 13
  DemoC__BlePeripheral__ready();
#line 13
}
#line 13
# 141 "NrfBleP.nc"
static inline void NrfBleP__ready__runTask(void )
#line 141
{
  NrfBleP__BlePeripheral__ready();
}

# 53 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4lClockP.nc"
static inline error_t HplSam4lClockP__Init__init(void )
{
  SYSTICK->csr.bits.clksource = 1;
  SYSTICK->csr.bits.tickint = 0;
  SYSTICK->rvr = 0xFFFFFF;
  SYSTICK->csr.bits.enable = 1;
  return SUCCESS;
}

# 55 "/home/tbauer/helena/stormport//tos/system/FcfsResourceQueueC.nc"
static inline error_t /*HilSam4lUSARTC.arb0.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*HilSam4lUSARTC.arb0.Queue*/FcfsResourceQueueC__0__resQ, /*HilSam4lUSARTC.arb0.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*HilSam4lUSARTC.arb0.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

#line 55
static inline error_t /*HilSam4lUSARTC.arb1.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*HilSam4lUSARTC.arb1.Queue*/FcfsResourceQueueC__1__resQ, /*HilSam4lUSARTC.arb1.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*HilSam4lUSARTC.arb1.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

#line 55
static inline error_t /*HilSam4lUSARTC.arb2.Queue*/FcfsResourceQueueC__2__Init__init(void )
#line 55
{
  memset(/*HilSam4lUSARTC.arb2.Queue*/FcfsResourceQueueC__2__resQ, /*HilSam4lUSARTC.arb2.Queue*/FcfsResourceQueueC__2__NO_ENTRY, sizeof /*HilSam4lUSARTC.arb2.Queue*/FcfsResourceQueueC__2__resQ);
  return SUCCESS;
}

#line 55
static inline error_t /*HilSam4lUSARTC.arb3.Queue*/FcfsResourceQueueC__3__Init__init(void )
#line 55
{
  memset(/*HilSam4lUSARTC.arb3.Queue*/FcfsResourceQueueC__3__resQ, /*HilSam4lUSARTC.arb3.Queue*/FcfsResourceQueueC__3__NO_ENTRY, sizeof /*HilSam4lUSARTC.arb3.Queue*/FcfsResourceQueueC__3__resQ);
  return SUCCESS;
}

# 62 "/home/tbauer/helena/stormport//tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*HilSam4lUSARTC.arb3.Queue*/FcfsResourceQueueC__3__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*HilSam4lUSARTC.arb2.Queue*/FcfsResourceQueueC__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*HilSam4lUSARTC.arb1.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*HilSam4lUSARTC.arb0.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplSam4lClockP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 5 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPort.nc"
inline static void /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__HplSam4lGeneralIOPort__enableIRQ(uint8_t pin){
#line 5
  HplSam4lGeneralIOPortP__PortA__enableIRQ(pin);
#line 5
}
#line 5
# 210 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline error_t /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__enableFallingEdge(void )
{
  ((gpio_port_t volatile *)1074663424)->imr0c = /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__MASK;
  ((gpio_port_t volatile *)1074663424)->imr1s = /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__MASK;
  /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__HplSam4lGeneralIOPort__enableIRQ(17);
  return SUCCESS;
}

# 54 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static error_t NrfBleP__Int__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 203 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline error_t /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__enableRisingEdge(void )
{
  ((gpio_port_t volatile *)1074663424)->imr0s = /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__MASK;
  ((gpio_port_t volatile *)1074663424)->imr1c = /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__MASK;
  /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__HplSam4lGeneralIOPort__enableIRQ(17);
  return SUCCESS;
}

# 53 "/home/tbauer/helena/stormport//tos/interfaces/GpioInterrupt.nc"
inline static error_t NrfBleP__Int__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IRQ__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 46 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IO__makeInput(void )
{
  ((gpio_port_t volatile *)1074663424)->gpers = /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__MASK;
  ((gpio_port_t volatile *)1074663424)->oderc = /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__MASK;
  ((gpio_port_t volatile *)1074663424)->sters = /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__MASK;
}

# 44 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
inline static void NrfBleP__IntPort__makeInput(void ){
#line 44
  /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__IO__makeInput();
#line 44
}
#line 44
# 31 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__set(void )
{
  ((gpio_port_t volatile *)1074664448)->ovrs = /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__MASK;
}

# 40 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
inline static void NrfBleP__CS__set(void ){
#line 40
  /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__set();
#line 40
}
#line 40
# 53 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__makeOutput(void )
{
  ((gpio_port_t volatile *)1074664448)->gpers = /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__MASK;
  ((gpio_port_t volatile *)1074664448)->oders = /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__MASK;
  ((gpio_port_t volatile *)1074664448)->sterc = /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__MASK;
}

# 46 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
inline static void NrfBleP__CS__makeOutput(void ){
#line 46
  /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__IO__makeOutput();
#line 46
}
#line 46
# 43 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableRX(void )
{
  ((volatile usart_t *)1073922048U)->cr.bits.rxen = 1;
}

# 12 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void NrfBleP__SpiHPL__enableRX(void ){
#line 12
  /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableRX();
#line 12
}
#line 12
# 31 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableTX(void )
{
  ((volatile usart_t *)1073922048U)->cr.bits.txen = 1;
}

# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void NrfBleP__SpiHPL__enableTX(void ){
#line 9
  /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableTX();
#line 9
}
#line 9
# 53 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4Clock.nc"
inline static uint32_t /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__MainClock__getMainClockSpeed(void ){
#line 53
  unsigned long __nesc_result;
#line 53

#line 53
  __nesc_result = HplSam4lClockP__HplSam4Clock__getMainClockSpeed();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 128 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__setSPIBaudRate(uint32_t b)
{


  uint32_t cd = /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__MainClock__getMainClockSpeed() * 1000;

#line 133
  cd /= b;
  ((volatile usart_t *)1073922048U)->brgr.bits.cd = cd;
}

# 30 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void NrfBleP__SpiHPL__setSPIBaudRate(uint32_t b){
#line 30
  /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__setSPIBaudRate(b);
#line 30
}
#line 30
# 159 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__setSPIMode(uint8_t cpol, uint8_t cpha)
{
  ((volatile usart_t *)1073922048U)->mr.bits.msbf_cpol = cpol != 0;
  (

  (volatile usart_t *)1073922048U)->mr.bits.sync_cpha = cpha == 0;
}

# 25 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void NrfBleP__SpiHPL__setSPIMode(uint8_t cpol, uint8_t cpha){
#line 25
  /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__setSPIMode(cpol, cpha);
#line 25
}
#line 25
# 50 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4PeripheralClockP.nc"
static inline void /*HplSam4lClockC.PBA_USART2*/HplSam4PeripheralClockP__21__Cntl__enable(void )
{
  uint32_t shadow = * (uint32_t volatile *)((void volatile *)PM + 40U);

#line 53
  shadow |= 1 << 10;
  PM->unlock = 0xAA000000 | 40U;
  * (uint32_t volatile *)((void volatile *)PM + 40U) = shadow;
}

# 42 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/pm/HplSam4PeripheralClockCntl.nc"
inline static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__ClockCtl__enable(void ){
#line 42
  /*HplSam4lClockC.PBA_USART2*/HplSam4PeripheralClockP__21__Cntl__enable();
#line 42
}
#line 42
# 94 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__initSPIMaster(void )
{
  /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__ClockCtl__enable();
  ((volatile usart_t *)1073922048U)->mr.bits.chrl = 3;
  ((volatile usart_t *)1073922048U)->mr.bits.usclks = 0;
  ((volatile usart_t *)1073922048U)->mr.bits.mode = 0b1110;
  ((volatile usart_t *)1073922048U)->mr.bits.clko = 1;
  ((volatile usart_t *)1073922048U)->ttgr = 4;
}

# 5 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void NrfBleP__SpiHPL__initSPIMaster(void ){
#line 5
  /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__initSPIMaster();
#line 5
}
#line 5


inline static void NrfBleP__SpiHPL__enableUSARTPin(usart_pin_t pin){
#line 7
  /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableUSARTPin(pin);
#line 7
}
#line 7
# 110 "NrfBleP.nc"
static inline void NrfBleP__BlePeripheral__initialize(void )
{
  NrfBleP__SpiHPL__enableUSARTPin(USART2_TX_PC12);
  NrfBleP__SpiHPL__enableUSARTPin(USART2_RX_PC11);
  NrfBleP__SpiHPL__enableUSARTPin(USART2_CLK_PA18);
  NrfBleP__SpiHPL__initSPIMaster();
  NrfBleP__SpiHPL__setSPIMode(0, 0);
  NrfBleP__SpiHPL__setSPIBaudRate(20000);
  NrfBleP__SpiHPL__enableTX();
  NrfBleP__SpiHPL__enableRX();

  NrfBleP__CS__makeOutput();
  NrfBleP__CS__set();
  NrfBleP__IntPort__makeInput();
  NrfBleP__Int__enableRisingEdge();
  NrfBleP__Int__enableFallingEdge();
  NrfBleP__txbuf[0] = 1;
  NrfBleP__spiqueued = 1;
}

# 6 "BlePeripheral.nc"
inline static void DemoC__BlePeripheral__initialize(void ){
#line 6
  NrfBleP__BlePeripheral__initialize();
#line 6
}
#line 6
# 36 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__clr(void )
{
  ((gpio_port_t volatile *)1074664448)->ovrc = /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__MASK;
}

# 41 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
inline static void DemoC__Led__clr(void ){
#line 41
  /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__clr();
#line 41
}
#line 41
# 53 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOP.nc"
static inline void /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__makeOutput(void )
{
  ((gpio_port_t volatile *)1074664448)->gpers = /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__MASK;
  ((gpio_port_t volatile *)1074664448)->oders = /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__MASK;
  ((gpio_port_t volatile *)1074664448)->sterc = /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__MASK;
}

# 46 "/home/tbauer/helena/stormport//tos/interfaces/GeneralIO.nc"
inline static void DemoC__Led__makeOutput(void ){
#line 46
  /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__IO__makeOutput();
#line 46
}
#line 46
# 19 "DemoC.nc"
static inline void DemoC__Boot__booted(void )
{
  DemoC__Led__makeOutput();
  DemoC__Led__clr();
  DemoC__BlePeripheral__initialize();
}

# 60 "/home/tbauer/helena/stormport//tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  DemoC__Boot__booted();
#line 60
}
#line 60
# 94 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/cortexm4hardware.h"
static __inline __attribute((always_inline)) void __nesc_disable_interrupt()
{
  __nesc_atomic_t newState = 1;

   __asm volatile (
  "msr primask, %0" :  : 

  "r"(newState));}

#line 82
static __inline __attribute((always_inline)) void __nesc_enable_interrupt()
{
  __nesc_atomic_t newState = 0;

   __asm volatile (
  "msr primask, %0" :  : 

  "r"(newState));}

# 92 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/McuSleepC.nc"
static inline void McuSleepC__setupSleepMode(void )
#line 92
{
}

#line 185
static inline void McuSleepC__setupBackupMode(void )
#line 185
{
}

# 74 "/home/tbauer/helena/stormport//tos/platforms/storm/PlatformP.nc"
static inline void PlatformP__Sam4LowPower__customizePio(void )
#line 74
{
}

# 39 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/Sam4LowPower.nc"
inline static void McuSleepC__Sam4LowPower__customizePio(void ){
#line 39
  PlatformP__Sam4LowPower__customizePio();
#line 39
}
#line 39
# 71 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/McuSleepC.nc"
static inline void McuSleepC__Sam4LowPower__configure(void )
#line 71
{

  McuSleepC__Sam4LowPower__customizePio();
}

#line 97
static inline void McuSleepC__setupWaitMode(void )
#line 97
{
#line 118
  McuSleepC__Sam4LowPower__configure();
}

#line 76
static inline uint32_t McuSleepC__getPowerState(void )
#line 76
{
  return McuSleepC__S_WAIT;
}







static inline void McuSleepC__commonSleep(void )
#line 86
{
}

#line 199
static inline void McuSleepC__McuSleep__sleep(void )
{
  McuSleepC__commonSleep();
  switch ((McuSleepC__ps = McuSleepC__getPowerState())) {
      case McuSleepC__S_AWAKE: 

        break;
      case McuSleepC__S_SLEEP: 

        McuSleepC__setupSleepMode();
      break;
      case McuSleepC__S_WAIT: 

        McuSleepC__setupWaitMode();
      break;
      case McuSleepC__S_BACKUP: 

        McuSleepC__setupBackupMode();
      break;
      default: 

        McuSleepC__setupSleepMode();
    }

  __nesc_enable_interrupt();






  if (McuSleepC__ps != McuSleepC__S_AWAKE) {
     __asm volatile ("wfe");
    }



  if (McuSleepC__ps == McuSleepC__S_AWAKE) {
    McuSleepC__InterruptWrapper__preamble();
    }


   __asm volatile ("" :  :  : "memory");

  __nesc_disable_interrupt();
}

# 76 "/home/tbauer/helena/stormport//tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/home/tbauer/helena/stormport//tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/home/tbauer/helena/stormport//tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 37 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/FunctionWrapper.nc"
inline static void HplSam4lUSARTIRQP__IRQWrapper__preamble(void ){
#line 37
  McuSleepC__InterruptWrapper__preamble();
#line 37
}
#line 37
# 115 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline bool /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__isRXRdy(void )
{
  return ((volatile usart_t *)1073889280U)->csr.bits.rxrdy == 1;
}

# 34 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static bool HplSam4lUSARTIRQP__usart0__isRXRdy(void ){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__isRXRdy();
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 99 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline bool HplSam4lUSARTIRQP__usart0irq__isRXRdyIRQEnabled(void )
{
  return USART0->imr.bits.rxrdy == 1;
}

# 489 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__SpiPacket__default__sendDone(
#line 482
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error)
#line 490
{
}

# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
inline static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 95 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline void HplSam4lUSARTIRQP__usart0irq__disableRXRdyIRQ(void )
{
  USART0->idr.bits.rxrdy = 1;
}

# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__disableRXRdyIRQ(void ){
#line 9
  HplSam4lUSARTIRQP__usart0irq__disableRXRdyIRQ();
#line 9
}
#line 9
# 342 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 342
{
}

# 100 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 100
  /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__receiveDone(buf, len, error);
#line 100
}
#line 100
# 343 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__receivedByte(uint8_t byte)
#line 343
{
}

# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__receivedByte(uint8_t byte){
#line 80
  /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__receivedByte(byte);
#line 80
}
#line 80
# 103 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline uint8_t /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__readData(void )
{
  return ((volatile usart_t *)1073889280U)->rhr.bits.rxchr;
}

# 27 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static uint8_t /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart__readData(void ){
#line 27
  unsigned char __nesc_result;
#line 27

#line 27
  __nesc_result = /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__readData();
#line 27

#line 27
  return __nesc_result;
#line 27
}
#line 27
# 304 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__RXRdyFired(void )
{
  uint8_t data = /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart__readData();

#line 307
  if (!/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__irqmode_spi) 
    {
      if (/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__forwardRXIRQ) 
        {
          /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__receivedByte(data);
        }
      if (/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_buf != (void *)0) 
        {
          /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_buf[/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_ptr++] = data;
          if (/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_ptr == /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_len) 
            {
              uint8_t *bufcpy = /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_buf;

#line 319
              /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_buf = (void *)0;

              /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__receiveDone(bufcpy, /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_ptr, SUCCESS);
            }
        }
    }
  else 
    {
      if (/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_buf != (void *)0) {
#line 327
        /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_buf[/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_ptr] = data;
        }
#line 328
      /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_ptr++;
      if (/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_ptr == /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_len) 
        {
          uint8_t *txbufcpy = /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_buf;
          uint8_t *rxbufcpy = /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_buf;

#line 333
          /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__rx_buf = (void *)0;
          /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_buf = (void *)0;
          /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__disableRXRdyIRQ();
          /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__SpiPacket__sendDone(txbufcpy, rxbufcpy, /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_len, SUCCESS);
        }
    }
}

# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void HplSam4lUSARTIRQP__usart0irq__RXRdyFired(void ){
#line 3
  /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__RXRdyFired();
#line 3
}
#line 3
# 111 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline bool /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__isTXRdy(void )
{
  return ((volatile usart_t *)1073889280U)->csr.bits.txrdy == 1;
}

# 33 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static bool HplSam4lUSARTIRQP__usart0__isTXRdy(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__isTXRdy();
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 103 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline bool HplSam4lUSARTIRQP__usart0irq__isTXRdyIRQEnabled(void )
{
  return USART0->imr.bits.txrdy == 1;
}

#line 86
static inline void HplSam4lUSARTIRQP__usart0irq__disableTXRdyIRQ(void )
{
  USART0->idr.bits.txrdy = 1;
}

# 7 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__disableTXRdyIRQ(void ){
#line 7
  HplSam4lUSARTIRQP__usart0irq__disableTXRdyIRQ();
#line 7
}
#line 7
# 107 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__sendData(uint8_t d)
{
  ((volatile usart_t *)1073889280U)->thr.bits.txchr = d;
}

# 28 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart__sendData(uint8_t d){
#line 28
  /*HilSam4lUSARTC.usart0*/HplSam4lUSARTP__0__usart__sendData(d);
#line 28
}
#line 28
# 341 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__sendDone(uint8_t *buf, uint16_t len, error_t error)
#line 341
{
}

# 58 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 58
  /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__default__sendDone(buf, len, error);
#line 58
}
#line 58
# 345 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__TXRdyFired(void )
{
  if (!/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__irqmode_spi) 
    {
      if (/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_buf == (void *)0) 
        {
          /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__disableTXRdyIRQ();
          return;
        }
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {

          /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart__sendData(/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_buf[/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_ptr++]);
          if (/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_ptr == /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_len) 
            {
              uint8_t *bufcpy;

#line 361
              bufcpy = /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_buf;
              /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_buf = (void *)0;
              /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__disableTXRdyIRQ();
              /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__UartStream__sendDone(bufcpy, /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_ptr, SUCCESS);
            }
        }
#line 366
        __nesc_atomic_end(__nesc_atomic); }
    }
  else 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_buf == (void *)0) 
            {
              /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart__sendData(0);
              /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_ptr++;
            }
          else 
            {
              /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart__sendData(/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_buf[/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_ptr]);
              /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_ptr++;
            }
          if (/*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_ptr == /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__tx_len) 
            {
              /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__disableTXRdyIRQ();
              {
#line 385
                __nesc_atomic_end(__nesc_atomic); 
#line 385
                return;
              }
            }
        }
#line 388
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 4 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void HplSam4lUSARTIRQP__usart0irq__TXRdyFired(void ){
#line 4
  /*HilSam4lUSARTC.hal_usart0*/HalSam4lUSARTP__0__usart_irq__TXRdyFired();
#line 4
}
#line 4
# 38 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/FunctionWrapper.nc"
inline static void HplSam4lUSARTIRQP__IRQWrapper__postamble(void ){
#line 38
  McuSleepC__InterruptWrapper__postamble();
#line 38
}
#line 38
# 115 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline bool /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__isRXRdy(void )
{
  return ((volatile usart_t *)1073905664U)->csr.bits.rxrdy == 1;
}

# 34 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static bool HplSam4lUSARTIRQP__usart1__isRXRdy(void ){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__isRXRdy();
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 133 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline bool HplSam4lUSARTIRQP__usart1irq__isRXRdyIRQEnabled(void )
{
  return USART1->imr.bits.rxrdy == 1;
}

# 489 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__SpiPacket__default__sendDone(
#line 482
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error)
#line 490
{
}

# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
inline static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 129 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline void HplSam4lUSARTIRQP__usart1irq__disableRXRdyIRQ(void )
{
  USART1->idr.bits.rxrdy = 1;
}

# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__disableRXRdyIRQ(void ){
#line 9
  HplSam4lUSARTIRQP__usart1irq__disableRXRdyIRQ();
#line 9
}
#line 9
# 342 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 342
{
}

# 100 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 100
  /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__receiveDone(buf, len, error);
#line 100
}
#line 100
# 343 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__receivedByte(uint8_t byte)
#line 343
{
}

# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__receivedByte(uint8_t byte){
#line 80
  /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__receivedByte(byte);
#line 80
}
#line 80
# 103 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline uint8_t /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__readData(void )
{
  return ((volatile usart_t *)1073905664U)->rhr.bits.rxchr;
}

# 27 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static uint8_t /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart__readData(void ){
#line 27
  unsigned char __nesc_result;
#line 27

#line 27
  __nesc_result = /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__readData();
#line 27

#line 27
  return __nesc_result;
#line 27
}
#line 27
# 304 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__RXRdyFired(void )
{
  uint8_t data = /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart__readData();

#line 307
  if (!/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__irqmode_spi) 
    {
      if (/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__forwardRXIRQ) 
        {
          /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__receivedByte(data);
        }
      if (/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_buf != (void *)0) 
        {
          /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_buf[/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_ptr++] = data;
          if (/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_ptr == /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_len) 
            {
              uint8_t *bufcpy = /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_buf;

#line 319
              /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_buf = (void *)0;

              /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__receiveDone(bufcpy, /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_ptr, SUCCESS);
            }
        }
    }
  else 
    {
      if (/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_buf != (void *)0) {
#line 327
        /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_buf[/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_ptr] = data;
        }
#line 328
      /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_ptr++;
      if (/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_ptr == /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_len) 
        {
          uint8_t *txbufcpy = /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_buf;
          uint8_t *rxbufcpy = /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_buf;

#line 333
          /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__rx_buf = (void *)0;
          /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_buf = (void *)0;
          /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__disableRXRdyIRQ();
          /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__SpiPacket__sendDone(txbufcpy, rxbufcpy, /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_len, SUCCESS);
        }
    }
}

# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void HplSam4lUSARTIRQP__usart1irq__RXRdyFired(void ){
#line 3
  /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__RXRdyFired();
#line 3
}
#line 3
# 111 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline bool /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__isTXRdy(void )
{
  return ((volatile usart_t *)1073905664U)->csr.bits.txrdy == 1;
}

# 33 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static bool HplSam4lUSARTIRQP__usart1__isTXRdy(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__isTXRdy();
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 137 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline bool HplSam4lUSARTIRQP__usart1irq__isTXRdyIRQEnabled(void )
{
  return USART1->imr.bits.txrdy == 1;
}

#line 120
static inline void HplSam4lUSARTIRQP__usart1irq__disableTXRdyIRQ(void )
{
  USART1->idr.bits.txrdy = 1;
}

# 7 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__disableTXRdyIRQ(void ){
#line 7
  HplSam4lUSARTIRQP__usart1irq__disableTXRdyIRQ();
#line 7
}
#line 7
# 107 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__sendData(uint8_t d)
{
  ((volatile usart_t *)1073905664U)->thr.bits.txchr = d;
}

# 28 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart__sendData(uint8_t d){
#line 28
  /*HilSam4lUSARTC.usart1*/HplSam4lUSARTP__1__usart__sendData(d);
#line 28
}
#line 28
# 341 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__sendDone(uint8_t *buf, uint16_t len, error_t error)
#line 341
{
}

# 58 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 58
  /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__default__sendDone(buf, len, error);
#line 58
}
#line 58
# 345 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__TXRdyFired(void )
{
  if (!/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__irqmode_spi) 
    {
      if (/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_buf == (void *)0) 
        {
          /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__disableTXRdyIRQ();
          return;
        }
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {

          /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart__sendData(/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_buf[/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_ptr++]);
          if (/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_ptr == /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_len) 
            {
              uint8_t *bufcpy;

#line 361
              bufcpy = /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_buf;
              /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_buf = (void *)0;
              /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__disableTXRdyIRQ();
              /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__UartStream__sendDone(bufcpy, /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_ptr, SUCCESS);
            }
        }
#line 366
        __nesc_atomic_end(__nesc_atomic); }
    }
  else 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_buf == (void *)0) 
            {
              /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart__sendData(0);
              /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_ptr++;
            }
          else 
            {
              /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart__sendData(/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_buf[/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_ptr]);
              /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_ptr++;
            }
          if (/*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_ptr == /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__tx_len) 
            {
              /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__disableTXRdyIRQ();
              {
#line 385
                __nesc_atomic_end(__nesc_atomic); 
#line 385
                return;
              }
            }
        }
#line 388
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 4 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void HplSam4lUSARTIRQP__usart1irq__TXRdyFired(void ){
#line 4
  /*HilSam4lUSARTC.hal_usart1*/HalSam4lUSARTP__1__usart_irq__TXRdyFired();
#line 4
}
#line 4
# 115 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline bool /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__isRXRdy(void )
{
  return ((volatile usart_t *)1073922048U)->csr.bits.rxrdy == 1;
}

# 34 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static bool HplSam4lUSARTIRQP__usart2__isRXRdy(void ){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__isRXRdy();
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 166 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline bool HplSam4lUSARTIRQP__usart2irq__isRXRdyIRQEnabled(void )
{
  return USART2->imr.bits.rxrdy == 1;
}

# 67 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
inline static error_t NrfBleP__connected__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(NrfBleP__connected);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t NrfBleP__ready__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(NrfBleP__ready);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 149 "NrfBleP.nc"
static inline void NrfBleP__SpiPacket__sendDone(uint8_t *txBuf, uint8_t *rxBuf, 
uint16_t len, error_t error)
#line 150
{
  NrfBleP__CS__set();
  if (error == SUCCESS) {
      if (rxBuf[0] & 0x1) {
          switch (rxBuf[0]) {
              case 1: 
                NrfBleP__ready__postTask();
              break;
              case 3: 
                NrfBleP__connected__postTask();
              break;
            }
        }
      else 
#line 162
        {
        }
    }
}

# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
inline static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  NrfBleP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 162 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline void HplSam4lUSARTIRQP__usart2irq__disableRXRdyIRQ(void )
{
  USART2->idr.bits.rxrdy = 1;
}

# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__disableRXRdyIRQ(void ){
#line 9
  HplSam4lUSARTIRQP__usart2irq__disableRXRdyIRQ();
#line 9
}
#line 9
# 342 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 342
{
}

# 100 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 100
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__receiveDone(buf, len, error);
#line 100
}
#line 100
# 343 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__receivedByte(uint8_t byte)
#line 343
{
}

# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__receivedByte(uint8_t byte){
#line 80
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__receivedByte(byte);
#line 80
}
#line 80
# 103 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline uint8_t /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__readData(void )
{
  return ((volatile usart_t *)1073922048U)->rhr.bits.rxchr;
}

# 27 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static uint8_t /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart__readData(void ){
#line 27
  unsigned char __nesc_result;
#line 27

#line 27
  __nesc_result = /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__readData();
#line 27

#line 27
  return __nesc_result;
#line 27
}
#line 27
# 304 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__RXRdyFired(void )
{
  uint8_t data = /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart__readData();

#line 307
  if (!/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__irqmode_spi) 
    {
      if (/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__forwardRXIRQ) 
        {
          /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__receivedByte(data);
        }
      if (/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf != (void *)0) 
        {
          /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf[/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_ptr++] = data;
          if (/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_ptr == /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_len) 
            {
              uint8_t *bufcpy = /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf;

#line 319
              /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf = (void *)0;

              /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__receiveDone(bufcpy, /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_ptr, SUCCESS);
            }
        }
    }
  else 
    {
      if (/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf != (void *)0) {
#line 327
        /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf[/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_ptr] = data;
        }
#line 328
      /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_ptr++;
      if (/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_ptr == /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_len) 
        {
          uint8_t *txbufcpy = /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf;
          uint8_t *rxbufcpy = /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf;

#line 333
          /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf = (void *)0;
          /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf = (void *)0;
          /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__disableRXRdyIRQ();
          /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__SpiPacket__sendDone(txbufcpy, rxbufcpy, /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_len, SUCCESS);
        }
    }
}

# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void HplSam4lUSARTIRQP__usart2irq__RXRdyFired(void ){
#line 3
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__RXRdyFired();
#line 3
}
#line 3
# 97 "/home/tbauer/helena/stormport//tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 111 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline bool /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__isTXRdy(void )
{
  return ((volatile usart_t *)1073922048U)->csr.bits.txrdy == 1;
}

# 33 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static bool HplSam4lUSARTIRQP__usart2__isTXRdy(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__isTXRdy();
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 170 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline bool HplSam4lUSARTIRQP__usart2irq__isTXRdyIRQEnabled(void )
{
  return USART2->imr.bits.txrdy == 1;
}

#line 153
static inline void HplSam4lUSARTIRQP__usart2irq__disableTXRdyIRQ(void )
{
  USART2->idr.bits.txrdy = 1;
}

# 7 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__disableTXRdyIRQ(void ){
#line 7
  HplSam4lUSARTIRQP__usart2irq__disableTXRdyIRQ();
#line 7
}
#line 7
# 107 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__sendData(uint8_t d)
{
  ((volatile usart_t *)1073922048U)->thr.bits.txchr = d;
}

# 28 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart__sendData(uint8_t d){
#line 28
  /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__sendData(d);
#line 28
}
#line 28
# 341 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__sendDone(uint8_t *buf, uint16_t len, error_t error)
#line 341
{
}

# 58 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 58
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__default__sendDone(buf, len, error);
#line 58
}
#line 58
# 345 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__TXRdyFired(void )
{
  if (!/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__irqmode_spi) 
    {
      if (/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf == (void *)0) 
        {
          /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__disableTXRdyIRQ();
          return;
        }
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {

          /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart__sendData(/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf[/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_ptr++]);
          if (/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_ptr == /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_len) 
            {
              uint8_t *bufcpy;

#line 361
              bufcpy = /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf;
              /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf = (void *)0;
              /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__disableTXRdyIRQ();
              /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__UartStream__sendDone(bufcpy, /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_ptr, SUCCESS);
            }
        }
#line 366
        __nesc_atomic_end(__nesc_atomic); }
    }
  else 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf == (void *)0) 
            {
              /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart__sendData(0);
              /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_ptr++;
            }
          else 
            {
              /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart__sendData(/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf[/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_ptr]);
              /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_ptr++;
            }
          if (/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_ptr == /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_len) 
            {
              /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__disableTXRdyIRQ();
              {
#line 385
                __nesc_atomic_end(__nesc_atomic); 
#line 385
                return;
              }
            }
        }
#line 388
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 4 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void HplSam4lUSARTIRQP__usart2irq__TXRdyFired(void ){
#line 4
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__TXRdyFired();
#line 4
}
#line 4
# 115 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline bool /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__isRXRdy(void )
{
  return ((volatile usart_t *)1073938432U)->csr.bits.rxrdy == 1;
}

# 34 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static bool HplSam4lUSARTIRQP__usart3__isRXRdy(void ){
#line 34
  unsigned char __nesc_result;
#line 34

#line 34
  __nesc_result = /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__isRXRdy();
#line 34

#line 34
  return __nesc_result;
#line 34
}
#line 34
# 199 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline bool HplSam4lUSARTIRQP__usart3irq__isRXRdyIRQEnabled(void )
{
  return USART3->imr.bits.rxrdy == 1;
}

# 489 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__SpiPacket__default__sendDone(
#line 482
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error)
#line 490
{
}

# 82 "/home/tbauer/helena/stormport//tos/interfaces/SpiPacket.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 195 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline void HplSam4lUSARTIRQP__usart3irq__disableRXRdyIRQ(void )
{
  USART3->idr.bits.rxrdy = 1;
}

# 9 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__disableRXRdyIRQ(void ){
#line 9
  HplSam4lUSARTIRQP__usart3irq__disableRXRdyIRQ();
#line 9
}
#line 9
# 342 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 342
{
}

# 100 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 100
  /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__receiveDone(buf, len, error);
#line 100
}
#line 100
# 343 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__receivedByte(uint8_t byte)
#line 343
{
}

# 80 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__receivedByte(uint8_t byte){
#line 80
  /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__receivedByte(byte);
#line 80
}
#line 80
# 103 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline uint8_t /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__readData(void )
{
  return ((volatile usart_t *)1073938432U)->rhr.bits.rxchr;
}

# 27 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static uint8_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__readData(void ){
#line 27
  unsigned char __nesc_result;
#line 27

#line 27
  __nesc_result = /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__readData();
#line 27

#line 27
  return __nesc_result;
#line 27
}
#line 27
# 304 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__RXRdyFired(void )
{
  uint8_t data = /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__readData();

#line 307
  if (!/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__irqmode_spi) 
    {
      if (/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__forwardRXIRQ) 
        {
          /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__receivedByte(data);
        }
      if (/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_buf != (void *)0) 
        {
          /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_buf[/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_ptr++] = data;
          if (/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_ptr == /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_len) 
            {
              uint8_t *bufcpy = /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_buf;

#line 319
              /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_buf = (void *)0;

              /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__receiveDone(bufcpy, /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_ptr, SUCCESS);
            }
        }
    }
  else 
    {
      if (/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_buf != (void *)0) {
#line 327
        /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_buf[/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_ptr] = data;
        }
#line 328
      /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_ptr++;
      if (/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_ptr == /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_len) 
        {
          uint8_t *txbufcpy = /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_buf;
          uint8_t *rxbufcpy = /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_buf;

#line 333
          /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__rx_buf = (void *)0;
          /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_buf = (void *)0;
          /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__disableRXRdyIRQ();
          /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__SpiPacket__sendDone(txbufcpy, rxbufcpy, /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_len, SUCCESS);
        }
    }
}

# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void HplSam4lUSARTIRQP__usart3irq__RXRdyFired(void ){
#line 3
  /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__RXRdyFired();
#line 3
}
#line 3
# 111 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline bool /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__isTXRdy(void )
{
  return ((volatile usart_t *)1073938432U)->csr.bits.txrdy == 1;
}

# 33 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static bool HplSam4lUSARTIRQP__usart3__isTXRdy(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__isTXRdy();
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 203 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
static inline bool HplSam4lUSARTIRQP__usart3irq__isTXRdyIRQEnabled(void )
{
  return USART3->imr.bits.txrdy == 1;
}

#line 186
static inline void HplSam4lUSARTIRQP__usart3irq__disableTXRdyIRQ(void )
{
  USART3->idr.bits.txrdy = 1;
}

# 7 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__disableTXRdyIRQ(void ){
#line 7
  HplSam4lUSARTIRQP__usart3irq__disableTXRdyIRQ();
#line 7
}
#line 7
# 107 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__sendData(uint8_t d)
{
  ((volatile usart_t *)1073938432U)->thr.bits.txchr = d;
}

# 28 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__sendData(uint8_t d){
#line 28
  /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__sendData(d);
#line 28
}
#line 28
# 341 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__sendDone(uint8_t *buf, uint16_t len, error_t error)
#line 341
{
}

# 58 "/home/tbauer/helena/stormport//tos/interfaces/UartStream.nc"
inline static void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 58
  /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__default__sendDone(buf, len, error);
#line 58
}
#line 58
# 345 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline void /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__TXRdyFired(void )
{
  if (!/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__irqmode_spi) 
    {
      if (/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_buf == (void *)0) 
        {
          /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__disableTXRdyIRQ();
          return;
        }
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {

          /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__sendData(/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_buf[/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_ptr++]);
          if (/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_ptr == /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_len) 
            {
              uint8_t *bufcpy;

#line 361
              bufcpy = /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_buf;
              /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_buf = (void *)0;
              /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__disableTXRdyIRQ();
              /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartStream__sendDone(bufcpy, /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_ptr, SUCCESS);
            }
        }
#line 366
        __nesc_atomic_end(__nesc_atomic); }
    }
  else 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_buf == (void *)0) 
            {
              /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__sendData(0);
              /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_ptr++;
            }
          else 
            {
              /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__sendData(/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_buf[/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_ptr]);
              /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_ptr++;
            }
          if (/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_ptr == /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__tx_len) 
            {
              /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__disableTXRdyIRQ();
              {
#line 385
                __nesc_atomic_end(__nesc_atomic); 
#line 385
                return;
              }
            }
        }
#line 388
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 4 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART_IRQ.nc"
inline static void HplSam4lUSARTIRQP__usart3irq__TXRdyFired(void ){
#line 4
  /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart_irq__TXRdyFired();
#line 4
}
#line 4
# 58 "/home/tbauer/helena/stormport//tos/platforms/storm/lib/printf/SerialPrintfP.nc"
static inline unsigned int SerialPrintfP__mini_strlen(const char *s)
{
  unsigned int len = 0;

#line 61
  while (s[len] != '\0') len++;
  return len;
}

# 33 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSART.nc"
inline static bool /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__isTXRdy(void ){
#line 33
  unsigned char __nesc_result;
#line 33

#line 33
  __nesc_result = /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__isTXRdy();
#line 33

#line 33
  return __nesc_result;
#line 33
}
#line 33
# 44 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static inline error_t /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartByte__send(uint8_t byte)
{
  while (!/*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__isTXRdy()) ;
  /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__usart__sendData(byte);
}

# 46 "/home/tbauer/helena/stormport//tos/interfaces/UartByte.nc"
inline static error_t SerialPrintfP__UartByte__send(uint8_t byte){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*HilSam4lUSARTC.hal_usart3*/HalSam4lUSARTP__3__UartByte__send(byte);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 67 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/McuSleepC.nc"
  void sam4LowPowerConfigure(void )
#line 67
{
  McuSleepC__Sam4LowPower__configure();
}

# 125 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
  void GPIO_0_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortA_IRQ__fired(0);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

# 246 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/McuSleepC.nc"
static void McuSleepC__InterruptWrapper__preamble(void )
#line 246
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 247
    {
      switch (McuSleepC__ps) {
          case McuSleepC__S_AWAKE: 

            break;
          case McuSleepC__S_SLEEP: 

            McuSleepC__resumeFromSleepMode();
          break;
          case McuSleepC__S_WAIT: 

            McuSleepC__resumeFromWaitMode();
          break;
          case McuSleepC__S_BACKUP: 

            McuSleepC__resumeFromBackupMode();
          break;
          default: 

            McuSleepC__resumeFromSleepMode();
        }
      if (McuSleepC__ps != McuSleepC__S_AWAKE) {
        McuSleepC__commonResume();
        }
#line 270
      McuSleepC__ps = McuSleepC__S_AWAKE;
    }
#line 271
    __nesc_atomic_end(__nesc_atomic); }
}

# 121 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
static void HplSam4lGeneralIOPortP__PortA_IRQ__default__fired(uint8_t i)
#line 121
{
}

# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void HplSam4lGeneralIOPortP__PortA_IRQ__fired(uint8_t arg_0x2b4e9bd6ea00){
#line 3
  switch (arg_0x2b4e9bd6ea00) {
#line 3
    case 0:
#line 3
      /*HplSam4lIOC.PA00P*/HplSam4lGeneralIOP__0__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA01P*/HplSam4lGeneralIOP__1__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA02P*/HplSam4lGeneralIOP__2__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA03P*/HplSam4lGeneralIOP__3__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA04P*/HplSam4lGeneralIOP__4__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA05P*/HplSam4lGeneralIOP__5__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA06P*/HplSam4lGeneralIOP__6__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA07P*/HplSam4lGeneralIOP__7__ByteIRQ__fired();
#line 3
      break;
#line 3
    case 1:
#line 3
      /*HplSam4lIOC.PA08P*/HplSam4lGeneralIOP__8__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA09P*/HplSam4lGeneralIOP__9__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA10P*/HplSam4lGeneralIOP__10__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA11P*/HplSam4lGeneralIOP__11__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA12P*/HplSam4lGeneralIOP__12__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA13P*/HplSam4lGeneralIOP__13__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA14P*/HplSam4lGeneralIOP__14__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA15P*/HplSam4lGeneralIOP__15__ByteIRQ__fired();
#line 3
      break;
#line 3
    case 2:
#line 3
      /*HplSam4lIOC.PA16P*/HplSam4lGeneralIOP__16__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA17P*/HplSam4lGeneralIOP__17__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA18P*/HplSam4lGeneralIOP__18__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA19P*/HplSam4lGeneralIOP__19__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA20P*/HplSam4lGeneralIOP__20__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA21P*/HplSam4lGeneralIOP__21__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA22P*/HplSam4lGeneralIOP__22__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA23P*/HplSam4lGeneralIOP__23__ByteIRQ__fired();
#line 3
      break;
#line 3
    case 3:
#line 3
      /*HplSam4lIOC.PA24P*/HplSam4lGeneralIOP__24__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA25P*/HplSam4lGeneralIOP__25__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PA26P*/HplSam4lGeneralIOP__26__ByteIRQ__fired();
#line 3
      break;
#line 3
    default:
#line 3
      HplSam4lGeneralIOPortP__PortA_IRQ__default__fired(arg_0x2b4e9bd6ea00);
#line 3
      break;
#line 3
    }
#line 3
}
#line 3
# 463 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HalSam4lUSARTP.nc"
static error_t /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__SpiPacket__send(
#line 452
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len)
{
  if (/*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf != (void *)0 && /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf != (void *)0) 
    {
      return FAIL;
    }
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__irqmode_spi = TRUE;
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_buf = txBuf;
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_buf = rxBuf;
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_len = len;
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__tx_ptr = 0;
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__rx_ptr = 0;
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__enableTXRdyIRQ();
  /*HilSam4lUSARTC.hal_usart2*/HalSam4lUSARTP__2__usart_irq__enableRXRdyIRQ();
}

# 132 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
  void GPIO_1_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortA_IRQ__fired(1);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

  void GPIO_2_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortA_IRQ__fired(2);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

  void GPIO_3_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortA_IRQ__fired(3);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

  void GPIO_4_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortB_IRQ__fired(0);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

#line 122
static void HplSam4lGeneralIOPortP__PortB_IRQ__default__fired(uint8_t i)
#line 122
{
}

# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void HplSam4lGeneralIOPortP__PortB_IRQ__fired(uint8_t arg_0x2b4e9bd6c310){
#line 3
  switch (arg_0x2b4e9bd6c310) {
#line 3
    case 0:
#line 3
      /*HplSam4lIOC.PB00P*/HplSam4lGeneralIOP__27__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB01P*/HplSam4lGeneralIOP__28__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB02P*/HplSam4lGeneralIOP__29__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB03P*/HplSam4lGeneralIOP__30__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB04P*/HplSam4lGeneralIOP__31__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB05P*/HplSam4lGeneralIOP__32__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB06P*/HplSam4lGeneralIOP__33__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB07P*/HplSam4lGeneralIOP__34__ByteIRQ__fired();
#line 3
      break;
#line 3
    case 1:
#line 3
      /*HplSam4lIOC.PB08P*/HplSam4lGeneralIOP__35__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB09P*/HplSam4lGeneralIOP__36__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB10P*/HplSam4lGeneralIOP__37__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB11P*/HplSam4lGeneralIOP__38__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB12P*/HplSam4lGeneralIOP__39__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB13P*/HplSam4lGeneralIOP__40__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB14P*/HplSam4lGeneralIOP__41__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PB15P*/HplSam4lGeneralIOP__42__ByteIRQ__fired();
#line 3
      break;
#line 3
    default:
#line 3
      HplSam4lGeneralIOPortP__PortB_IRQ__default__fired(arg_0x2b4e9bd6c310);
#line 3
      break;
#line 3
    }
#line 3
}
#line 3
# 160 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
  void GPIO_5_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortB_IRQ__fired(1);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

  void GPIO_6_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortB_IRQ__fired(2);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

  void GPIO_7_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortB_IRQ__fired(3);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

  void GPIO_8_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortC_IRQ__fired(0);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

#line 123
static void HplSam4lGeneralIOPortP__PortC_IRQ__default__fired(uint8_t i)
#line 123
{
}

# 3 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/ByteIRQ.nc"
static void HplSam4lGeneralIOPortP__PortC_IRQ__fired(uint8_t arg_0x2b4e9bd6bb90){
#line 3
  switch (arg_0x2b4e9bd6bb90) {
#line 3
    case 0:
#line 3
      /*HplSam4lIOC.PC00P*/HplSam4lGeneralIOP__43__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC01P*/HplSam4lGeneralIOP__44__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC02P*/HplSam4lGeneralIOP__45__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC03P*/HplSam4lGeneralIOP__46__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC04P*/HplSam4lGeneralIOP__47__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC05P*/HplSam4lGeneralIOP__48__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC06P*/HplSam4lGeneralIOP__49__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC07P*/HplSam4lGeneralIOP__50__ByteIRQ__fired();
#line 3
      break;
#line 3
    case 1:
#line 3
      /*HplSam4lIOC.PC08P*/HplSam4lGeneralIOP__51__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC09P*/HplSam4lGeneralIOP__52__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC10P*/HplSam4lGeneralIOP__53__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC11P*/HplSam4lGeneralIOP__54__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC12P*/HplSam4lGeneralIOP__55__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC13P*/HplSam4lGeneralIOP__56__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC14P*/HplSam4lGeneralIOP__57__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC15P*/HplSam4lGeneralIOP__58__ByteIRQ__fired();
#line 3
      break;
#line 3
    case 2:
#line 3
      /*HplSam4lIOC.PC16P*/HplSam4lGeneralIOP__59__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC17P*/HplSam4lGeneralIOP__60__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC18P*/HplSam4lGeneralIOP__61__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC19P*/HplSam4lGeneralIOP__62__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC20P*/HplSam4lGeneralIOP__63__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC21P*/HplSam4lGeneralIOP__64__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC22P*/HplSam4lGeneralIOP__65__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC23P*/HplSam4lGeneralIOP__66__ByteIRQ__fired();
#line 3
      break;
#line 3
    case 3:
#line 3
      /*HplSam4lIOC.PC24P*/HplSam4lGeneralIOP__67__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC25P*/HplSam4lGeneralIOP__68__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC26P*/HplSam4lGeneralIOP__69__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC27P*/HplSam4lGeneralIOP__70__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC28P*/HplSam4lGeneralIOP__71__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC29P*/HplSam4lGeneralIOP__72__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC30P*/HplSam4lGeneralIOP__73__ByteIRQ__fired();
#line 3
      /*HplSam4lIOC.PC31P*/HplSam4lGeneralIOP__74__ByteIRQ__fired();
#line 3
      break;
#line 3
    default:
#line 3
      HplSam4lGeneralIOPortP__PortC_IRQ__default__fired(arg_0x2b4e9bd6bb90);
#line 3
      break;
#line 3
    }
#line 3
}
#line 3
# 188 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
  void GPIO_9_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortC_IRQ__fired(1);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

  void GPIO_10_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortC_IRQ__fired(2);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

  void GPIO_11_Handler(void )
{
  HplSam4lGeneralIOPortP__IRQWrapper__preamble();
  HplSam4lGeneralIOPortP__PortC_IRQ__fired(3);
  HplSam4lGeneralIOPortP__IRQWrapper__postamble();
}

# 63 "/home/tbauer/helena/stormport//tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 19 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__enableUSARTPin(usart_pin_t pin)
{


  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x008) = 1 << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x014) = (pin & 1) << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x018) = ((pin & 1) ^ 1) << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x024) = (pin & 2) << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x028) = ((pin & 2) ^ 2) << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x034) = (pin & 4) << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x038) = ((pin & 4) ^ 4) << ((pin >> 8) & 0xFF);
}

#line 84
static void /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__usart__initUART(void )
{
  /*HilSam4lUSARTC.usart3*/HplSam4lUSARTP__3__ClockCtl__enable();
  ((volatile usart_t *)1073938432U)->mr.bits.chrl = 3;
  ((volatile usart_t *)1073938432U)->mr.bits.usclks = 0;
  ((volatile usart_t *)1073938432U)->mr.bits.mode = 0;
  ((volatile usart_t *)1073938432U)->mr.bits.nbstop = 0;
  ((volatile usart_t *)1073938432U)->mr.bits.par = 4;
  ((volatile usart_t *)1073938432U)->ttgr = 4;
}

# 134 "/home/tbauer/helena/stormport//tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/home/tbauer/helena/stormport//tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b4e9b64da40){
#line 75
  switch (arg_0x2b4e9b64da40) {
#line 75
    case NrfBleP__ready:
#line 75
      NrfBleP__ready__runTask();
#line 75
      break;
#line 75
    case NrfBleP__connected:
#line 75
      NrfBleP__connected__runTask();
#line 75
      break;
#line 75
    case /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*HilSam4lUSARTC.arb0.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__grantedTask:
#line 75
      /*HilSam4lUSARTC.arb1.Arbiter*/ArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__grantedTask:
#line 75
      /*HilSam4lUSARTC.arb2.Arbiter*/ArbiterP__2__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__grantedTask:
#line 75
      /*HilSam4lUSARTC.arb3.Arbiter*/ArbiterP__3__grantedTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b4e9b64da40);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 19 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTP.nc"
static void /*HilSam4lUSARTC.usart2*/HplSam4lUSARTP__2__usart__enableUSARTPin(usart_pin_t pin)
{


  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x008) = 1 << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x014) = (pin & 1) << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x018) = ((pin & 1) ^ 1) << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x024) = (pin & 2) << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x028) = ((pin & 2) ^ 2) << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x034) = (pin & 4) << ((pin >> 8) & 0xFF);
  * (uint32_t volatile *)(0x400E1000 + (pin >> 16) * 0x200 + 0x038) = ((pin & 4) ^ 4) << ((pin >> 8) & 0xFF);
}

# 66 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/gpio/HplSam4lGeneralIOPortP.nc"
static void HplSam4lGeneralIOPortP__PortA__enableIRQ(uint8_t bit)
{
  NVIC->iser.flat[0] = 1 << (25 + (bit >> 3));
  GPIO_PORT_A->iers = 1 << bit;
}

# 21 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
  void USART0_Handler(void )
{
  HplSam4lUSARTIRQP__IRQWrapper__preamble();
  if (HplSam4lUSARTIRQP__usart0__isRXRdy() && HplSam4lUSARTIRQP__usart0irq__isRXRdyIRQEnabled()) 
    {
      HplSam4lUSARTIRQP__usart0irq__RXRdyFired();
    }
  if (HplSam4lUSARTIRQP__usart0__isTXRdy() && HplSam4lUSARTIRQP__usart0irq__isTXRdyIRQEnabled()) 
    {
      HplSam4lUSARTIRQP__usart0irq__TXRdyFired();
    }
  HplSam4lUSARTIRQP__IRQWrapper__postamble();
}

  void USART1_Handler(void )
{
  HplSam4lUSARTIRQP__IRQWrapper__preamble();
  if (HplSam4lUSARTIRQP__usart1__isRXRdy() && HplSam4lUSARTIRQP__usart1irq__isRXRdyIRQEnabled()) 
    {
      HplSam4lUSARTIRQP__usart1irq__RXRdyFired();
    }
  if (HplSam4lUSARTIRQP__usart1__isTXRdy() && HplSam4lUSARTIRQP__usart1irq__isTXRdyIRQEnabled()) 
    {
      HplSam4lUSARTIRQP__usart1irq__TXRdyFired();
    }
  HplSam4lUSARTIRQP__IRQWrapper__postamble();
}

  void USART2_Handler(void )
{
  HplSam4lUSARTIRQP__IRQWrapper__preamble();
  if (HplSam4lUSARTIRQP__usart2__isRXRdy() && HplSam4lUSARTIRQP__usart2irq__isRXRdyIRQEnabled()) 
    {
      HplSam4lUSARTIRQP__usart2irq__RXRdyFired();
    }
  if (HplSam4lUSARTIRQP__usart2__isTXRdy() && HplSam4lUSARTIRQP__usart2irq__isTXRdyIRQEnabled()) 
    {
      HplSam4lUSARTIRQP__usart2irq__TXRdyFired();
    }
  HplSam4lUSARTIRQP__IRQWrapper__postamble();
}

# 170 "/home/tbauer/helena/stormport//tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 63 "/home/tbauer/helena/stormport//tos/chips/cortex/m4/sam4/l/usart/HplSam4lUSARTIRQP.nc"
  void USART3_Handler(void )
{
  HplSam4lUSARTIRQP__IRQWrapper__preamble();
  if (HplSam4lUSARTIRQP__usart3__isRXRdy() && HplSam4lUSARTIRQP__usart3irq__isRXRdyIRQEnabled()) 
    {
      HplSam4lUSARTIRQP__usart3irq__RXRdyFired();
    }
  if (HplSam4lUSARTIRQP__usart3__isTXRdy() && HplSam4lUSARTIRQP__usart3irq__isTXRdyIRQEnabled()) 
    {
      HplSam4lUSARTIRQP__usart3irq__TXRdyFired();
    }
  HplSam4lUSARTIRQP__IRQWrapper__postamble();
}

# 132 "/home/tbauer/helena/stormport//tos/platforms/storm/lib/printf/SerialPrintfP.nc"
  int storm_vsnprintf(char *buffer, unsigned int buffer_len, const char *fmt, va_list va)
{
  char *pbuffer = buffer;
  char bf[24];
  char ch;

  while ((ch = * fmt++)) {
      if ((unsigned int )(pbuffer - buffer + 1) >= buffer_len) {
        break;
        }
#line 141
      if (ch != '%') 
        {
          if (!((unsigned int )(pbuffer - buffer + 1) >= buffer_len)) 
            {
              * pbuffer++ = ch;
              *pbuffer = '\0';
            }
        }
      else {
          char zero_pad = 0;
          char *ptr;
          unsigned int len;

          ch = * fmt++;


          if (ch == '0') {
              ch = * fmt++;
              if (ch == '\0') {
                goto end;
                }
#line 161
              if (ch >= '0' && ch <= '9') {
                zero_pad = ch - '0';
                }
#line 163
              ch = * fmt++;
            }

          switch (ch) {
              case 0: 
                goto end;

              case 'u': 
                case 'd': 
                  case 'i': 
                    len = SerialPrintfP__mini_itoa((__builtin_va_arg(va, unsigned int )), 10, 0, bf, zero_pad);
              {
                unsigned int i;

                if (buffer_len - (pbuffer - buffer) - 1 < len) {
                  len = buffer_len - (pbuffer - buffer) - 1;
                  }

                for (i = 0; i < len; i++) 
                  * pbuffer++ = bf[i];
                *pbuffer = '\0';
              }
              break;
              case 'p': 
                case 'P': 
                  * pbuffer++ = '0';
              * pbuffer++ = 'x';
              zero_pad = 8;
              case 'x': 
                case 'X': 
                  len = SerialPrintfP__mini_itoa((__builtin_va_arg(va, unsigned int )), 16, ch == 'X', bf, zero_pad);
              {
                unsigned int i;

                if (buffer_len - (pbuffer - buffer) - 1 < len) {
                  len = buffer_len - (pbuffer - buffer) - 1;
                  }

                for (i = 0; i < len; i++) 
                  * pbuffer++ = bf[i];
                *pbuffer = '\0';
              }
              break;

              case 'c': 
                {
                  if (!((unsigned int )(pbuffer - buffer + 1) >= buffer_len)) 
                    {
                      * pbuffer++ = (char )(__builtin_va_arg(va, int ));
                      *pbuffer = '\0';
                    }
                }
              break;

              case 's': 
                ptr = (__builtin_va_arg(va, char *));
              {
                unsigned int i;
#line 220
                unsigned int len;

#line 221
                len = SerialPrintfP__mini_strlen(ptr);

                if (buffer_len - (pbuffer - buffer) - 1 < len) {
                  len = buffer_len - (pbuffer - buffer) - 1;
                  }

                for (i = 0; i < len; i++) 
                  * pbuffer++ = ptr[i];
                *pbuffer = '\0';
              }
              break;

              default: 
                {
                  if (!((unsigned int )(pbuffer - buffer + 1) >= buffer_len)) 
                    {
                      * pbuffer++ = (char )(__builtin_va_arg(va, int ));
                      *pbuffer = '\0';
                    }
                }
              break;
            }
        }
    }
  end: 
    return pbuffer - buffer;
}

#line 65
static unsigned int SerialPrintfP__mini_itoa(int value, unsigned int radix, unsigned int uppercase, 
char *buffer, unsigned int zero_pad)
{
  char *pbuffer = buffer;
  int negative = 0;
  unsigned int i;
#line 70
  unsigned int len;


  if (radix > 16) {
    return 0;
    }
  if (value < 0) {
      negative = 1;
      value = -value;
    }


  do {
      int digit = value % radix;

#line 84
      * pbuffer++ = digit < 10 ? '0' + digit : (uppercase ? 'A' : 'a') + digit - 10;
      value /= radix;
    }
  while (
#line 86
  value > 0);

  for (i = pbuffer - buffer; i < zero_pad; i++) 
    * pbuffer++ = '0';

  if (negative) {
    * pbuffer++ = '-';
    }
  *pbuffer = '\0';



  len = pbuffer - buffer;
  for (i = 0; i < len / 2; i++) {
      char j = buffer[i];

#line 101
      buffer[i] = buffer[len - i - 1];
      buffer[len - i - 1] = j;
    }

  return len;
}

#line 250
  int storm_snprintf(char *buffer, unsigned int buffer_len, const char *fmt, ...)
{
  int ret;
  va_list va;

#line 254
  __builtin_va_start(va, fmt);
  ret = storm_vsnprintf(buffer, buffer_len, fmt, va);
  __builtin_va_end(va);

  return ret;
}



  int storm_printf(const char *fmt, ...)
{
  int ret;
  uint32_t i;
  va_list va;

#line 268
  __builtin_va_start(va, fmt);
  ret = storm_vsnprintf(SerialPrintfP__storm_printf_buffer, 256, fmt, va);
  __builtin_va_end(va);

  for (i = 0; i < ret; i++) 
    {
      SerialPrintfP__UartByte__send(SerialPrintfP__storm_printf_buffer[i]);
    }

  return ret;
}

#line 294
  void storm_trace(const char *s)
{
  while (*s != 0) 
    {
      while (*SerialPrintfP__stim0_32 == 0) ;
      *SerialPrintfP__stim0_8 = *s;
      s++;
    }
}

#line 303
  void storm_trace8(uint8_t v)
{
  while (*SerialPrintfP__stim1_32 == 0) ;
  *SerialPrintfP__stim1_8 = v;
}

#line 308
  void storm_trace16(uint16_t v)
{
  while (*SerialPrintfP__stim1_32 == 0) ;
  *SerialPrintfP__stim1_16 = v;
}

#line 313
  void storm_trace32(uint32_t v)
{
  while (*SerialPrintfP__stim1_32 == 0) ;
  *SerialPrintfP__stim1_32 = v;
}

