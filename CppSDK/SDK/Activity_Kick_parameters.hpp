#pragma once

 

// Package: Activity_Kick

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Activity_Kick.Activity_Kick_C.ExecuteUbergraph_Activity_Kick
// 0x03C8 (0x03C8 - 0x0000)
struct Activity_Kick_C_ExecuteUbergraph_Activity_Kick final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E9E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_ComponentBoundEvent_Keys;                   // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TArray<class FString>                         K2Node_ComponentBoundEvent_Values;                 // 0x0018(0x0010)(ConstParm, ReferenceParm)
	TMap<class FString, class FString>            CallFunc_Make2StrMap_ReturnValue;                  // 0x0028(0x0050)()
	class FString                                 Temp_string_Variable;                              // 0x0078(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E9F[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Map_Find_Value;                           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EA0[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x00A8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D0(0x0018)()
	struct FGuildActivity                         K2Node_Event_Other;                                // 0x00E8(0x00E0)(ConstParm)
	bool                                          CallFunc_GetActivityTargets_valid;                 // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EA1[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1;         // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1;    // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1;           // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1;         // 0x0200(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2;                // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EA2[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2;         // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2;    // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2;           // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2;         // 0x0258(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid_1;               // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EA3[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1_1;       // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1_1;  // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1_1;         // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1_1;       // 0x02B0(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2_1;              // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EA4[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2_1;       // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2_1;  // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2_1;         // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2_1;       // 0x0308(0x0020)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x0329(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EA5[0x6];                                     // 0x032A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0330(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0348(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0360(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x03A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x03B0(0x0018)()
};
static_assert(alignof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick) == 0x000008, "Wrong alignment on Activity_Kick_C_ExecuteUbergraph_Activity_Kick");
static_assert(sizeof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick) == 0x0003C8, "Wrong size on Activity_Kick_C_ExecuteUbergraph_Activity_Kick");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, EntryPoint) == 0x000000, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::EntryPoint' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, K2Node_ComponentBoundEvent_Keys) == 0x000008, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::K2Node_ComponentBoundEvent_Keys' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, K2Node_ComponentBoundEvent_Values) == 0x000018, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::K2Node_ComponentBoundEvent_Values' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_Make2StrMap_ReturnValue) == 0x000028, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_Make2StrMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, Temp_string_Variable) == 0x000078, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, Temp_bool_Variable) == 0x000088, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_Map_Find_Value) == 0x000090, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_Map_Find_ReturnValue) == 0x0000A0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000A1, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A2, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetRestrictText_ReturnValue) == 0x0000A8, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000C0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, K2Node_Event_Other) == 0x0000E8, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_valid) == 0x0001C8, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_valid' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetUserID1) == 0x0001D0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetUserID1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetCharacterID1) == 0x0001E0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetCharacterID1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetName1) == 0x0001F0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetName1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_PlatformInfo1) == 0x000200, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_PlatformInfo1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_valid2) == 0x000220, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_valid2' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetUserID2) == 0x000228, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetUserID2' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetCharacterID2) == 0x000238, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetCharacterID2' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetName2) == 0x000248, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetName2' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_PlatformInfo2) == 0x000258, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_PlatformInfo2' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_valid_1) == 0x000278, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_valid_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetUserID1_1) == 0x000280, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetUserID1_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetCharacterID1_1) == 0x000290, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetCharacterID1_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetName1_1) == 0x0002A0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetName1_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_PlatformInfo1_1) == 0x0002B0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_PlatformInfo1_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_valid2_1) == 0x0002D0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_valid2_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetUserID2_1) == 0x0002D8, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetUserID2_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetCharacterID2_1) == 0x0002E8, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetCharacterID2_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_TargetName2_1) == 0x0002F8, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_TargetName2_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_GetActivityTargets_PlatformInfo2_1) == 0x000308, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_GetActivityTargets_PlatformInfo2_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x000328, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x000329, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000330, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, K2Node_Select_Default) == 0x000348, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, K2Node_MakeStruct_FormatArgumentData) == 0x000360, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, K2Node_MakeArray_Array) == 0x0003A0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_ExecuteUbergraph_Activity_Kick, CallFunc_Format_ReturnValue) == 0x0003B0, "Member 'Activity_Kick_C_ExecuteUbergraph_Activity_Kick::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Activity_Kick.Activity_Kick_C.BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Activity_Kick_C_BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature final
{
public:
	TArray<class FString>                         Keys;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FString>                         Values;                                            // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_Kick_C_BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature) == 0x000008, "Wrong alignment on Activity_Kick_C_BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");
static_assert(sizeof(Activity_Kick_C_BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature) == 0x000020, "Wrong size on Activity_Kick_C_BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");
static_assert(offsetof(Activity_Kick_C_BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature, Keys) == 0x000000, "Member 'Activity_Kick_C_BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature::Keys' has a wrong offset!");
static_assert(offsetof(Activity_Kick_C_BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature, Values) == 0x000010, "Member 'Activity_Kick_C_BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature::Values' has a wrong offset!");

// Function Activity_Kick.Activity_Kick_C.SetActivity_Internal
// 0x00E0 (0x00E0 - 0x0000)
struct Activity_Kick_C_SetActivity_Internal final
{
public:
	struct FGuildActivity                         Other;                                             // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_Kick_C_SetActivity_Internal) == 0x000008, "Wrong alignment on Activity_Kick_C_SetActivity_Internal");
static_assert(sizeof(Activity_Kick_C_SetActivity_Internal) == 0x0000E0, "Wrong size on Activity_Kick_C_SetActivity_Internal");
static_assert(offsetof(Activity_Kick_C_SetActivity_Internal, Other) == 0x000000, "Member 'Activity_Kick_C_SetActivity_Internal::Other' has a wrong offset!");

}

