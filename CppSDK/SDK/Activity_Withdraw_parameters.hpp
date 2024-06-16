#pragma once

 

// Package: Activity_Withdraw

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Activity_Withdraw.Activity_Withdraw_C.ExecuteUbergraph_Activity_Withdraw
// 0x0348 (0x0348 - 0x0000)
struct Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5527[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0030(0x0018)()
	struct FGuildActivity                         K2Node_Event_Other;                                // 0x0048(0x00E0)(ConstParm)
	bool                                          CallFunc_GetActivityTargets_valid;                 // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5528[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1;         // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1;    // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1;           // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1;         // 0x0160(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2;                // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5529[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2;         // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2;    // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2;           // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2;         // 0x01B8(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid_1;               // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_552A[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1_1;       // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1_1;  // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1_1;         // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1_1;       // 0x0210(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2_1;              // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_552B[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2_1;       // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2_1;  // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2_1;         // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2_1;       // 0x0268(0x0020)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_552C[0x6];                                     // 0x028A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0290(0x0018)()
	TArray<class FString>                         K2Node_ComponentBoundEvent_Keys;                   // 0x02A8(0x0010)(ConstParm, ReferenceParm)
	TArray<class FString>                         K2Node_ComponentBoundEvent_Values;                 // 0x02B8(0x0010)(ConstParm, ReferenceParm)
	class FText                                   K2Node_Select_Default;                             // 0x02C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x02E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0320(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0330(0x0018)()
};
static_assert(alignof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw) == 0x000008, "Wrong alignment on Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw");
static_assert(sizeof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw) == 0x000348, "Wrong size on Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, EntryPoint) == 0x000000, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::EntryPoint' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, Temp_bool_Variable) == 0x000004, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetRestrictText_ReturnValue) == 0x000030, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, K2Node_Event_Other) == 0x000048, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_valid) == 0x000128, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_valid' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetUserID1) == 0x000130, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetUserID1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetCharacterID1) == 0x000140, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetCharacterID1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetName1) == 0x000150, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetName1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_PlatformInfo1) == 0x000160, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_PlatformInfo1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_valid2) == 0x000180, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_valid2' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetUserID2) == 0x000188, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetUserID2' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetCharacterID2) == 0x000198, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetCharacterID2' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetName2) == 0x0001A8, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetName2' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_PlatformInfo2) == 0x0001B8, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_PlatformInfo2' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_valid_1) == 0x0001D8, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_valid_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetUserID1_1) == 0x0001E0, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetUserID1_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetCharacterID1_1) == 0x0001F0, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetCharacterID1_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetName1_1) == 0x000200, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetName1_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_PlatformInfo1_1) == 0x000210, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_PlatformInfo1_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_valid2_1) == 0x000230, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_valid2_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetUserID2_1) == 0x000238, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetUserID2_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetCharacterID2_1) == 0x000248, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetCharacterID2_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_TargetName2_1) == 0x000258, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_TargetName2_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_GetActivityTargets_PlatformInfo2_1) == 0x000268, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_GetActivityTargets_PlatformInfo2_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x000288, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x000289, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000290, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, K2Node_ComponentBoundEvent_Keys) == 0x0002A8, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::K2Node_ComponentBoundEvent_Keys' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, K2Node_ComponentBoundEvent_Values) == 0x0002B8, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::K2Node_ComponentBoundEvent_Values' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, K2Node_Select_Default) == 0x0002C8, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, K2Node_MakeStruct_FormatArgumentData) == 0x0002E0, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, K2Node_MakeArray_Array) == 0x000320, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw, CallFunc_Format_ReturnValue) == 0x000330, "Member 'Activity_Withdraw_C_ExecuteUbergraph_Activity_Withdraw::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Activity_Withdraw.Activity_Withdraw_C.BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Activity_Withdraw_C_BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature final
{
public:
	TArray<class FString>                         Keys;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FString>                         Values;                                            // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_Withdraw_C_BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature) == 0x000008, "Wrong alignment on Activity_Withdraw_C_BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");
static_assert(sizeof(Activity_Withdraw_C_BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature) == 0x000020, "Wrong size on Activity_Withdraw_C_BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");
static_assert(offsetof(Activity_Withdraw_C_BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature, Keys) == 0x000000, "Member 'Activity_Withdraw_C_BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature::Keys' has a wrong offset!");
static_assert(offsetof(Activity_Withdraw_C_BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature, Values) == 0x000010, "Member 'Activity_Withdraw_C_BndEvt__Activity_Withdraw_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature::Values' has a wrong offset!");

// Function Activity_Withdraw.Activity_Withdraw_C.SetActivity_Internal
// 0x00E0 (0x00E0 - 0x0000)
struct Activity_Withdraw_C_SetActivity_Internal final
{
public:
	struct FGuildActivity                         Other;                                             // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_Withdraw_C_SetActivity_Internal) == 0x000008, "Wrong alignment on Activity_Withdraw_C_SetActivity_Internal");
static_assert(sizeof(Activity_Withdraw_C_SetActivity_Internal) == 0x0000E0, "Wrong size on Activity_Withdraw_C_SetActivity_Internal");
static_assert(offsetof(Activity_Withdraw_C_SetActivity_Internal, Other) == 0x000000, "Member 'Activity_Withdraw_C_SetActivity_Internal::Other' has a wrong offset!");

}

