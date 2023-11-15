#include "HouseHeatingSystem_capi_host.h"
static HouseHeatingSystem_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        HouseHeatingSystem_host_InitializeDataMapInfo(&(root), "HouseHeatingSystem");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
