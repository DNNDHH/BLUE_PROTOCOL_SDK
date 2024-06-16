#pragma once

 

// Package: UMG_BNIDLoginBrowser

#include "Basic.hpp"


namespace SDK::Params
{

// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature) == 0x000008, "Wrong alignment on UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature");
static_assert(sizeof(UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature) == 0x000018, "Wrong size on UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature, Text) == 0x000000, "Member 'UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature::Text' has a wrong offset!");

// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Frame;                                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature) == 0x000008, "Wrong alignment on UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature");
static_assert(sizeof(UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature) == 0x000020, "Wrong size on UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature, URL) == 0x000000, "Member 'UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature::URL' has a wrong offset!");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature, Frame) == 0x000010, "Member 'UMG_BNIDLoginBrowser_C_BndEvt__WebBrowser_0_K2Node_ComponentBoundEvent_1_OnBeforePopup__DelegateSignature::Frame' has a wrong offset!");

// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.ExecuteUbergraph_UMG_BNIDLoginBrowser
// 0x0078 (0x0078 - 0x0000)
struct UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E0E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_URL;                    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_Frame;                  // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0028(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E0F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetHeaderValue_OutValue;                  // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetHeaderValue_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E10[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser) == 0x000008, "Wrong alignment on UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser");
static_assert(sizeof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser) == 0x000078, "Wrong size on UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser, EntryPoint) == 0x000000, "Member 'UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser, K2Node_ComponentBoundEvent_URL) == 0x000008, "Member 'UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser::K2Node_ComponentBoundEvent_URL' has a wrong offset!");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser, K2Node_ComponentBoundEvent_Frame) == 0x000018, "Member 'UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser::K2Node_ComponentBoundEvent_Frame' has a wrong offset!");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser, K2Node_ComponentBoundEvent_Text) == 0x000028, "Member 'UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser, CallFunc_Contains_ReturnValue) == 0x000050, "Member 'UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser, CallFunc_GetHeaderValue_OutValue) == 0x000058, "Member 'UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser::CallFunc_GetHeaderValue_OutValue' has a wrong offset!");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser, CallFunc_GetHeaderValue_ReturnValue) == 0x000068, "Member 'UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser::CallFunc_GetHeaderValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser, CallFunc_Len_ReturnValue) == 0x00006C, "Member 'UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000070, "Member 'UMG_BNIDLoginBrowser_C_ExecuteUbergraph_UMG_BNIDLoginBrowser::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_BNIDLoginBrowser.UMG_BNIDLoginBrowser_C.OnLoginCompleted__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_BNIDLoginBrowser_C_OnLoginCompleted__DelegateSignature final
{
public:
	class FString                                 Param_ApiToken;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_BNIDLoginBrowser_C_OnLoginCompleted__DelegateSignature) == 0x000008, "Wrong alignment on UMG_BNIDLoginBrowser_C_OnLoginCompleted__DelegateSignature");
static_assert(sizeof(UMG_BNIDLoginBrowser_C_OnLoginCompleted__DelegateSignature) == 0x000010, "Wrong size on UMG_BNIDLoginBrowser_C_OnLoginCompleted__DelegateSignature");
static_assert(offsetof(UMG_BNIDLoginBrowser_C_OnLoginCompleted__DelegateSignature, Param_ApiToken) == 0x000000, "Member 'UMG_BNIDLoginBrowser_C_OnLoginCompleted__DelegateSignature::Param_ApiToken' has a wrong offset!");

}

