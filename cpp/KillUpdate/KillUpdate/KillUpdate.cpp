//#include<bits/stdc++.h>
#include<windows.h>
#include <stdio.h>
#include <iostream>
using namespace std;

BOOL StopService()
{
    SC_HANDLE scm;
    SC_HANDLE service;
    if ((scm = OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS)) == NULL)
    {
        CloseServiceHandle(scm);
        printf("OpenSCManager Fail %d\n", GetLastError());
        return 0;
    }
    service = OpenService(scm, (LPCWSTR)"wuauserv", SERVICE_ALL_ACCESS);
    if (service == NULL)
    {
        int c = GetLastError();
        if (c == ERROR_ACCESS_DENIED) cout << "ERROR_ACCESS_DENIED\n";
        else if (c == ERROR_INVALID_HANDLE) cout << "ERROR_INVALID_HANDLE\n";
        else if (c == ERROR_INVALID_NAME) cout << "ERROR_INVALID_NAME\n";
        else if (c == ERROR_SERVICE_DOES_NOT_EXIST) cout << "ERROR_SERVICE_DOES_NOT_EXIST\n";
        CloseServiceHandle(service);
        CloseServiceHandle(scm);
        return 0;
    }

    SERVICE_STATUS status;
    if (QueryServiceStatus(service, &status)) {
        if (status.dwCurrentState != SERVICE_STOPPED) {    //如果服务当前状态为启用     
            ControlService(service, SERVICE_CONTROL_STOP, &status);

            SC_LOCK sclLockA;
            sclLockA = LockServiceDatabase(scm);
            if (sclLockA != NULL) {
                if (!ChangeServiceConfig(
                    service, // handle of service  
                    SERVICE_NO_CHANGE, // service type: no change  
                    SERVICE_DISABLED, // 禁用服务  
                    SERVICE_NO_CHANGE, // error control: no change  
                    NULL, // binary path: no change  
                    NULL, // load order group: no change  
                    NULL, // tag ID: no change  
                    NULL, // dependencies: no change  
                    NULL, // account name: no change  
                    NULL, // password: no change  
                    NULL)) //displayname  
                {
                }
            }

            UnlockServiceDatabase(sclLockA);
        }
        else
        {
            SC_LOCK sclLockB;
            sclLockB = LockServiceDatabase(scm);
            if (sclLockB != NULL) {
                if (!ChangeServiceConfig(
                    service, // handle of service  
                    SERVICE_NO_CHANGE, // service type: no change  
                    SERVICE_DISABLED, // 这里做了更改  
                    SERVICE_NO_CHANGE, // error control: no change  
                    NULL, // binary path: no change  
                    NULL, // load order group: no change  
                    NULL, // tag ID: no change  
                    NULL, // dependencies: no change  
                    NULL, // account name: no change  
                    NULL, // password: no change  
                    NULL)) //displayname  
                {

                }
            }

            UnlockServiceDatabase(sclLockB);
        }
        CloseServiceHandle(service);
        CloseServiceHandle(scm);
    }
    cout << "stop service success!\n";
    return TRUE;
}

int main()
{
    StopService();
    system("pause");
    return 0;
}