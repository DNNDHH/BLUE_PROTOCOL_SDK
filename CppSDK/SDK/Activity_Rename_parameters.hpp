#pragma once

 

// Package: Activity_Rename

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Activity_Rename.Activity_Rename_C.ExecuteUbergraph_Activity_Rename
// 0x03B8 (0x03B8 - 0x0000)
struct Activity_Rename_C_ExecuteUbergraph_Activity_Rename final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CF0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_ComponentBoundEvent_Keys;                   // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TArray<class FString>                         K2Node_ComponentBoundEvent_Values;                 // 0x0018(0x0010)(ConstParm, ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CF1[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0058(0x0018)()
	struct FGuildActivity                         K2Node_Event_Other;                                // 0x0070(0x00E0)(ConstParm)
	bool                                          CallFunc_GetActivityTargets_valid;                 // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CF2[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1;         // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1;    // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1;           // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1;         // 0x0188(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2;                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CF3[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2;         // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2;    // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2;           // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2;         // 0x01E0(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid_1;               // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CF4[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1_1;       // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1_1;  // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1_1;         // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1_1;       // 0x0238(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2_1;              // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CF5[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2_1;       // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2_1;  // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2_1;         // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2_1;       // 0x0290(0x0020)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CF6[0x6];                                     // 0x02B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02B8(0x0018)()
	class FString                                 CallFunc_GetActivityNewGuildName_ReturnValue;      // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x02E0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02F8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0310(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0350(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0390(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x03A0(0x0018)()
};
static_assert(alignof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename) == 0x000008, "Wrong alignment on Activity_Rename_C_ExecuteUbergraph_Activity_Rename");
static_assert(sizeof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename) == 0x0003B8, "Wrong size on Activity_Rename_C_ExecuteUbergraph_Activity_Rename");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, EntryPoint) == 0x000000, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::EntryPoint' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, K2Node_ComponentBoundEvent_Keys) == 0x000008, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::K2Node_ComponentBoundEvent_Keys' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, K2Node_ComponentBoundEvent_Values) == 0x000018, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::K2Node_ComponentBoundEvent_Values' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, Temp_bool_Variable) == 0x000028, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_MakeLiteralByte_ReturnValue) == 0x000029, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetTextFromAsset_ReturnValue) == 0x000030, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetRestrictText_ReturnValue) == 0x000058, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, K2Node_Event_Other) == 0x000070, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_valid) == 0x000150, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_valid' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetUserID1) == 0x000158, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetUserID1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetCharacterID1) == 0x000168, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetCharacterID1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetName1) == 0x000178, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetName1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_PlatformInfo1) == 0x000188, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_PlatformInfo1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_valid2) == 0x0001A8, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_valid2' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetUserID2) == 0x0001B0, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetUserID2' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetCharacterID2) == 0x0001C0, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetCharacterID2' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetName2) == 0x0001D0, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetName2' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_PlatformInfo2) == 0x0001E0, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_PlatformInfo2' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_valid_1) == 0x000200, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_valid_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetUserID1_1) == 0x000208, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetUserID1_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetCharacterID1_1) == 0x000218, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetCharacterID1_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetName1_1) == 0x000228, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetName1_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_PlatformInfo1_1) == 0x000238, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_PlatformInfo1_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_valid2_1) == 0x000258, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_valid2_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetUserID2_1) == 0x000260, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetUserID2_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetCharacterID2_1) == 0x000270, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetCharacterID2_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_TargetName2_1) == 0x000280, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_TargetName2_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityTargets_PlatformInfo2_1) == 0x000290, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityTargets_PlatformInfo2_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x0002B0, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x0002B1, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002B8, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_GetActivityNewGuildName_ReturnValue) == 0x0002D0, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_GetActivityNewGuildName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, K2Node_Select_Default) == 0x0002E0, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002F8, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, K2Node_MakeStruct_FormatArgumentData) == 0x000310, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, K2Node_MakeStruct_FormatArgumentData_1) == 0x000350, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, K2Node_MakeArray_Array) == 0x000390, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_ExecuteUbergraph_Activity_Rename, CallFunc_Format_ReturnValue) == 0x0003A0, "Member 'Activity_Rename_C_ExecuteUbergraph_Activity_Rename::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Activity_Rename.Activity_Rename_C.BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Activity_Rename_C_BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature final
{
public:
	TArray<class FString>                         Keys;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FString>                         Values;                                            // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_Rename_C_BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature) == 0x000008, "Wrong alignment on Activity_Rename_C_BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");
static_assert(sizeof(Activity_Rename_C_BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature) == 0x000020, "Wrong size on Activity_Rename_C_BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");
static_assert(offsetof(Activity_Rename_C_BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature, Keys) == 0x000000, "Member 'Activity_Rename_C_BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature::Keys' has a wrong offset!");
static_assert(offsetof(Activity_Rename_C_BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature, Values) == 0x000010, "Member 'Activity_Rename_C_BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature::Values' has a wrong offset!");

// Function Activity_Rename.Activity_Rename_C.SetActivity_Internal
// 0x00E0 (0x00E0 - 0x0000)
struct Activity_Rename_C_SetActivity_Internal final
{
public:
	struct FGuildActivity                         Other;                                             // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_Rename_C_SetActivity_Internal) == 0x000008, "Wrong alignment on Activity_Rename_C_SetActivity_Internal");
static_assert(sizeof(Activity_Rename_C_SetActivity_Internal) == 0x0000E0, "Wrong size on Activity_Rename_C_SetActivity_Internal");
static_assert(offsetof(Activity_Rename_C_SetActivity_Internal, Other) == 0x000000, "Member 'Activity_Rename_C_SetActivity_Internal::Other' has a wrong offset!");

}

