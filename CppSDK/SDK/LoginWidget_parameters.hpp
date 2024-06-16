#pragma once

 

// Package: LoginWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function LoginWidget.LoginWidget_C.ExecuteUbergraph_LoginWidget
// 0x0100 (0x0100 - 0x0000)
struct LoginWidget_C_ExecuteUbergraph_LoginWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EAA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_BNIDLoginBrowser_C*                CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& ApiToken)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue;    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EAB[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_InAuthToken;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCheckSucess;                         // 0x0038(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsMaintenance;                       // 0x0039(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue_1;  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EAC[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0040(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FString                                 K2Node_ComponentBoundEvent_EMail;                  // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_Password;               // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EAD[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_ApiToken;                       // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EAE[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetURL_ReturnValue;                       // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetURL_ReturnValue_1;                     // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InRetCode;                            // 0x00C8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EAF[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x00D0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E0(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LoginWidget_C_ExecuteUbergraph_LoginWidget) == 0x000008, "Wrong alignment on LoginWidget_C_ExecuteUbergraph_LoginWidget");
static_assert(sizeof(LoginWidget_C_ExecuteUbergraph_LoginWidget) == 0x000100, "Wrong size on LoginWidget_C_ExecuteUbergraph_LoginWidget");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, EntryPoint) == 0x000000, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_Create_ReturnValue) == 0x000008, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_IsPackagedForDistribution_ReturnValue) == 0x000020, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_IsPackagedForDistribution_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, K2Node_ComponentBoundEvent_InAuthToken) == 0x000028, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::K2Node_ComponentBoundEvent_InAuthToken' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, K2Node_Event_bCheckSucess) == 0x000038, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::K2Node_Event_bCheckSucess' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, K2Node_Event_bIsMaintenance) == 0x000039, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::K2Node_Event_bIsMaintenance' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_IsPackagedForDistribution_ReturnValue_1) == 0x00003A, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_IsPackagedForDistribution_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00003B, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_GetSBRetMessage_ReturnValue) == 0x000040, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, K2Node_ComponentBoundEvent_EMail) == 0x000068, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::K2Node_ComponentBoundEvent_EMail' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, K2Node_ComponentBoundEvent_Password) == 0x000078, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::K2Node_ComponentBoundEvent_Password' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_BooleanOR_ReturnValue) == 0x000089, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, K2Node_CustomEvent_ApiToken) == 0x000090, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::K2Node_CustomEvent_ApiToken' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_Len_ReturnValue) == 0x0000A0, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000A4, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_GetURL_ReturnValue) == 0x0000A8, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_GetURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_GetURL_ReturnValue_1) == 0x0000B8, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_GetURL_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, K2Node_Event_InRetCode) == 0x0000C8, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::K2Node_Event_InRetCode' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x0000D0, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E0, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_ExecuteUbergraph_LoginWidget, K2Node_SwitchEnum_CmpSuccess) == 0x0000F8, "Member 'LoginWidget_C_ExecuteUbergraph_LoginWidget::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function LoginWidget.LoginWidget_C.OnLoginFailure
// 0x0004 (0x0004 - 0x0000)
struct LoginWidget_C_OnLoginFailure final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginWidget_C_OnLoginFailure) == 0x000004, "Wrong alignment on LoginWidget_C_OnLoginFailure");
static_assert(sizeof(LoginWidget_C_OnLoginFailure) == 0x000004, "Wrong size on LoginWidget_C_OnLoginFailure");
static_assert(offsetof(LoginWidget_C_OnLoginFailure, InRetCode) == 0x000000, "Member 'LoginWidget_C_OnLoginFailure::InRetCode' has a wrong offset!");

// Function LoginWidget.LoginWidget_C.OnLoginCompleted_Event_0
// 0x0010 (0x0010 - 0x0000)
struct LoginWidget_C_OnLoginCompleted_Event_0 final
{
public:
	class FString                                 ApiToken;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginWidget_C_OnLoginCompleted_Event_0) == 0x000008, "Wrong alignment on LoginWidget_C_OnLoginCompleted_Event_0");
static_assert(sizeof(LoginWidget_C_OnLoginCompleted_Event_0) == 0x000010, "Wrong size on LoginWidget_C_OnLoginCompleted_Event_0");
static_assert(offsetof(LoginWidget_C_OnLoginCompleted_Event_0, ApiToken) == 0x000000, "Member 'LoginWidget_C_OnLoginCompleted_Event_0::ApiToken' has a wrong offset!");

// Function LoginWidget.LoginWidget_C.BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct LoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature final
{
public:
	class FString                                 EMail;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Password;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature) == 0x000008, "Wrong alignment on LoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature");
static_assert(sizeof(LoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature) == 0x000020, "Wrong size on LoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature");
static_assert(offsetof(LoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature, EMail) == 0x000000, "Member 'LoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature::EMail' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature, Password) == 0x000010, "Member 'LoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature::Password' has a wrong offset!");

// Function LoginWidget.LoginWidget_C.OnCheckMaintenanceComplete
// 0x0002 (0x0002 - 0x0000)
struct LoginWidget_C_OnCheckMaintenanceComplete final
{
public:
	bool                                          bCheckSucess;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsMaintenance;                                    // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LoginWidget_C_OnCheckMaintenanceComplete) == 0x000001, "Wrong alignment on LoginWidget_C_OnCheckMaintenanceComplete");
static_assert(sizeof(LoginWidget_C_OnCheckMaintenanceComplete) == 0x000002, "Wrong size on LoginWidget_C_OnCheckMaintenanceComplete");
static_assert(offsetof(LoginWidget_C_OnCheckMaintenanceComplete, bCheckSucess) == 0x000000, "Member 'LoginWidget_C_OnCheckMaintenanceComplete::bCheckSucess' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_OnCheckMaintenanceComplete, bIsMaintenance) == 0x000001, "Member 'LoginWidget_C_OnCheckMaintenanceComplete::bIsMaintenance' has a wrong offset!");

// Function LoginWidget.LoginWidget_C.BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct LoginWidget_C_BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature final
{
public:
	class FString                                 InAuthToken;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginWidget_C_BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature) == 0x000008, "Wrong alignment on LoginWidget_C_BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature");
static_assert(sizeof(LoginWidget_C_BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature) == 0x000010, "Wrong size on LoginWidget_C_BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature");
static_assert(offsetof(LoginWidget_C_BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature, InAuthToken) == 0x000000, "Member 'LoginWidget_C_BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature::InAuthToken' has a wrong offset!");

// Function LoginWidget.LoginWidget_C.Try Get Auth Token from Command Line
// 0x0018 (0x0018 - 0x0000)
struct LoginWidget_C_Try_Get_Auth_Token_from_Command_Line final
{
public:
	bool                                          CallFunc_GetCommandLineOption_bOutExist;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EB0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCommandLineOption_ReturnValue;         // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginWidget_C_Try_Get_Auth_Token_from_Command_Line) == 0x000008, "Wrong alignment on LoginWidget_C_Try_Get_Auth_Token_from_Command_Line");
static_assert(sizeof(LoginWidget_C_Try_Get_Auth_Token_from_Command_Line) == 0x000018, "Wrong size on LoginWidget_C_Try_Get_Auth_Token_from_Command_Line");
static_assert(offsetof(LoginWidget_C_Try_Get_Auth_Token_from_Command_Line, CallFunc_GetCommandLineOption_bOutExist) == 0x000000, "Member 'LoginWidget_C_Try_Get_Auth_Token_from_Command_Line::CallFunc_GetCommandLineOption_bOutExist' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_Try_Get_Auth_Token_from_Command_Line, CallFunc_GetCommandLineOption_ReturnValue) == 0x000008, "Member 'LoginWidget_C_Try_Get_Auth_Token_from_Command_Line::CallFunc_GetCommandLineOption_ReturnValue' has a wrong offset!");

// Function LoginWidget.LoginWidget_C.OptionServerSavedataLoadRequest
// 0x0020 (0x0020 - 0x0000)
struct LoginWidget_C_OptionServerSavedataLoadRequest final
{
public:
	class USBConfigureSaveManager*                ConfigSaveManager;                                 // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EB1[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoginWidget_C_OptionServerSavedataLoadRequest) == 0x000008, "Wrong alignment on LoginWidget_C_OptionServerSavedataLoadRequest");
static_assert(sizeof(LoginWidget_C_OptionServerSavedataLoadRequest) == 0x000020, "Wrong size on LoginWidget_C_OptionServerSavedataLoadRequest");
static_assert(offsetof(LoginWidget_C_OptionServerSavedataLoadRequest, ConfigSaveManager) == 0x000000, "Member 'LoginWidget_C_OptionServerSavedataLoadRequest::ConfigSaveManager' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_OptionServerSavedataLoadRequest, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'LoginWidget_C_OptionServerSavedataLoadRequest::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_OptionServerSavedataLoadRequest, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'LoginWidget_C_OptionServerSavedataLoadRequest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_OptionServerSavedataLoadRequest, CallFunc_GetConfigSaveManager_IsValid) == 0x000011, "Member 'LoginWidget_C_OptionServerSavedataLoadRequest::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LoginWidget_C_OptionServerSavedataLoadRequest, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'LoginWidget_C_OptionServerSavedataLoadRequest::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");

}

