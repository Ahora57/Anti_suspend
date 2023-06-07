#ifndef DEF_NTAPI
#define DEF_NTAPI

#include "Struct.h"


NTSTATUS NTAPI NtClose
(
    HANDLE Handle
);



NTSTATUS NTAPI NtQuerySystemInformation
(
     SYSTEM_INFORMATION_CLASS SystemInformationClass,
     PVOID               SystemInformation,
     ULONG                SystemInformationLength,
     PULONG              ReturnLength OPTIONAL
);


#endif // !DEF_NTAPI
