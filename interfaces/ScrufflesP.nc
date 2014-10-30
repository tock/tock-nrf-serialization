#import <wdthardware.h>

module ScrufflesP
{
    provides interface Scruffles;
    provides interface StdControl;
    uses interface UDP;
    uses interface HplSam4PeripheralClockCntl as WDTClockCtl;
}
implementation
{

    uint32_t last_id;

    async command void Scruffles.kick()
    {
        wdt_clr_t clr, clr2;
        clr.bits.clr = 1;
        clr2.bits.clr = 1;
        clr.bits.key = WDT_KEY_1;
        clr2.bits.key = WDT_KEY_2;
        WDT_CLEAR->flat = clr.flat;
        WDT_CLEAR->flat = clr2.flat;
        printf("Kicked the dog\n");
    }

    void print_totally_unnecessary_banner()
    {
        printf("\033[31;1m");
        printf("                       ;\\               \n");
        printf("                      |' \\              \n");
        printf("   _                  ; : ;             \n");
        printf("  / `-.              /: : |             \n");
        printf(" |  ,-.`-.          ,': : |             \n");
        printf(" \\  :  `. `.       ,'-. : |             \n");
        printf("  \\ ;    ;  `-.__,'    `-.|             \n");
        printf("   \\ ;   ;  :::  ,::'`:.  `.            \n");
        printf("   \\ `-. :  `    :.    `.  \\           \n");
        printf("     \\   \\    ,   ;   ,:    (\\          \n");
        printf("      \\   :., :.    ,'o)): ` `-.        \n");
        printf("     ,/,' ;' ,::\"'`.`---'   `.  `-._    \n");
        printf("   ,/  :  ; '\"      `;'          ,--`.  \n");
        printf("  ;/   :; ;             ,:'     (   ,:) \n");
        printf("    ,.,:.    ; ,:.,  ,-._ `.     \\\"\"'/  \n");
        printf("    '::'     `:'`  ,'(  \\`._____.-'\"'   \n");
        printf("       ;,   ;  `.  `. `._`-.  \\\\        \n");
        printf("       ;:.  ;:       `-._`-.\\  \\`.      \n");
        printf("        '`:. :        |' `. `\\  ) \\     \n");
        printf("           ` ;:   o    |    `--\\__,'     \n");
        printf("             '`      ,'                 \n");
        printf("                  ,-'                   \n");
        printf("  ====[ SCRUFFLES ACTIVATED ] ====\n\033[0m");
    }
    command error_t StdControl.start()
    {
        wdt_ctrl_t cfg, cfg2;
        last_id = 0;
        call WDTClockCtl.enable();
        call UDP.bind(0xFF5);
        if (WDT_CTRL->bits.en)
            return;
        cfg = *WDT_CTRL;
        cfg.bits.cen = 0;
        cfg.bits.key = WDT_KEY_1;
        cfg2 = cfg;
        cfg2.bits.key = WDT_KEY_2;
        WDT_CTRL->flat = cfg.flat;
        WDT_CTRL->flat = cfg2.flat;
        printf("Activating scruffles +");
        while(WDT_CTRL->bits.cen);
        cfg.bits.cssel = 1;
        cfg2.bits.cssel = 1;
        WDT_CTRL->flat = cfg.flat;
        WDT_CTRL->flat = cfg2.flat;
        cfg.bits.cen = 1;
        cfg2.bits.cen = 1;
        WDT_CTRL->flat = cfg.flat;
        WDT_CTRL->flat = cfg2.flat;
        while(WDT_CTRL->bits.cen == 0);
        printf("+");
        cfg.bits.psel = 20; //20 equals 64 seconds
        cfg.bits.im = 0;
        cfg.bits.fcd = 0;
        cfg.bits.mode = 0;
        cfg.bits.dar = 1;
        cfg2 = cfg;
        cfg2.bits.key = WDT_KEY_2;
        WDT_CTRL->flat = cfg.flat;
        WDT_CTRL->flat = cfg2.flat;
        printf("+\n");
        cfg.bits.en = 1;
        cfg2.bits.en = 1;
        WDT_CTRL->flat = cfg.flat;
        WDT_CTRL->flat = cfg2.flat;
        
        printf("ctl reg: 0x%08x\n", WDT_CTRL->flat);
        printf("Waiting for scruffles...\n");
        while(WDT_CTRL->bits.en == 0);
        printf("ctl reg: 0x%08x\n", WDT_CTRL->flat);
        print_totally_unnecessary_banner();        
    }

    event void UDP.recvfrom(struct sockaddr_in6 *from, void *data,
                            uint16_t len, struct ip6_metadata *meta)
    {
        //We restart as long as this packet contains an id higher than ours
        uint32_t rxid;
        uint8_t *p = data;
        if (len != 4)
            return;
        rxid = p[0];
        rxid |= (uint32_t)p[1] << 8;
        rxid |= (uint32_t)p[2] << 16;
        rxid |= (uint32_t)p[3] << 24;
        if (rxid > last_id)
        {
            call Scruffles.kick();
            last_id = rxid;
        }
        else
        {
            printf("Got an ID (%d) lower than current (%d)\n");
        }
    }
    command error_t StdControl.stop()
    {
        wdt_ctrl_t cfg, cfg2;
        printf("Killing scruffles\n");
        cfg = *WDT_CTRL;
        cfg.bits.en = 0;
        cfg2 = cfg;
        cfg.bits.key = WDT_KEY_1;
        cfg2.bits.key = WDT_KEY_2;
        WDT_CTRL->flat = cfg.flat;
        WDT_CTRL->flat = cfg2.flat;
    }
}

