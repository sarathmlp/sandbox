#define EWLC_LIB_MAP(Enum, Int) Enum,
#define EWLC_LIB_MAP_ \
    EWLC_LIB_MAP(EWLC_LIB_INFRA, BMALLOC_COMP_EWLC_INFRA)\
    EWLC_LIB_MAP(EWLC_LIB_LOADBALANCER, BMALLOC_COMP_EWLC_LOADBALANCER)\
    EWLC_LIB_MAP(EWLC_LIB_CAPWAP_DATA, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_DOT11, BMALLOC_COMP_EWLC_CLIENTLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_MCAST, BMALLOC_COMP_EWLC_CLIENTLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_CLIENT_ORCH, BMALLOC_COMP_EWLC_CLIENTLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_CLIENT_DPATH_SVC, BMALLOC_COMP_EWLC_CLIENTLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_DHCP_RELAY, BMALLOC_COMP_EWLC_INFRA)\
    EWLC_LIB_MAP(EWLC_CAPWAP_AC, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_CAPWAP_SMGR, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_CAPWAPMSG, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_APMGR, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_APMGR_PROXY, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_CERT_MGR, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_AP_JOIN_INFO, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_CAPWAP_IMGDWNLD, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_CAPWAP_PCAP, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_PCAP, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_FSM_FACTORY, BMALLOC_COMP_EWLC_CLIENTLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_PMKCACHE, BMALLOC_COMP_EWLC_CLIENTLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_WCNM, BMALLOC_COMP_EWLC_INFRA)\
    EWLC_LIB_MAP(EWLC_LIB_DTLS, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_NMSP, BMALLOC_COMP_EWLC_CLIENTLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_QOS, BMALLOC_COMP_EWLC_QOSLIB)\
    EWLC_LIB_MAP(EWLC_LIB_ACLMGR, BMALLOC_COMP_EWLC_CLIENTLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_IPC, BMALLOC_COMP_EWLC_INFRA)\
    EWLC_LIB_MAP(EWLC_LIB_RRM_CLIENT, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_RRM_COMMON, BMALLOC_COMP_EWLC_APLIBS)\
    EWLC_LIB_MAP(EWLC_LIB_WLANMGR, BMALLOC_COMP_EWLC_INFRA)\
    EWLC_LIB_MAP(EWLC_LIB_CFMGR, BMALLOC_COMP_EWLC_INFRA)\
    EWLC_LIB_MAP(EWLC_LIB_SYSTEM_CONFIG, BMALLOC_COMP_EWLC_INFRA)

typedef enum {
            EWLC_LIB_MAP_
} ewlc_library_identifier;


int main()
{
    return 0;
}
