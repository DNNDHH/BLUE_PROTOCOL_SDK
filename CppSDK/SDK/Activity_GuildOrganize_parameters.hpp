#pragma once

 

// Package: Activity_GuildOrganize

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Activity_GuildOrganize.Activity_GuildOrganize_C.ExecuteUbergraph_Activity_GuildOrganize
// 0x0390 (0x0390 - 0x0000)
struct Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EA6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_ComponentBoundEvent_Keys;                   // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TArray<class FString>                         K2Node_ComponentBoundEvent_Values;                 // 0x0018(0x0010)(ConstParm, ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EA7[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0098(0x0018)()
	struct FGuildActivity                         K2Node_Event_Other;                                // 0x00B0(0x00E0)(ConstParm)
	bool                                          CallFunc_GetActivityTargets_valid;                 // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EA8[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1;         // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1;    // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1;           // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1;         // 0x01C8(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2;                // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EA9[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2;         // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2;    // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2;           // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2;         // 0x0220(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid_1;               // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EAA[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1_1;       // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1_1;  // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1_1;         // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1_1;       // 0x0278(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2_1;              // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EAB[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2_1;       // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2_1;  // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2_1;         // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2_1;       // 0x02D0(0x0020)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EAC[0x6];                                     // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02F8(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0310(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0328(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0368(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0378(0x0018)()
};
static_assert(alignof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize) == 0x000008, "Wrong alignment on Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize");
static_assert(sizeof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize) == 0x000390, "Wrong size on Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, EntryPoint) == 0x000000, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::EntryPoint' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, K2Node_ComponentBoundEvent_Keys) == 0x000008, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::K2Node_ComponentBoundEvent_Keys' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, K2Node_ComponentBoundEvent_Values) == 0x000018, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::K2Node_ComponentBoundEvent_Values' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, Temp_bool_Variable) == 0x000068, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_MakeLiteralByte_ReturnValue) == 0x000069, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetTextFromAsset_ReturnValue) == 0x000070, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetRestrictText_ReturnValue) == 0x000098, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, K2Node_Event_Other) == 0x0000B0, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_valid) == 0x000190, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_valid' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetUserID1) == 0x000198, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetUserID1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetCharacterID1) == 0x0001A8, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetCharacterID1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetName1) == 0x0001B8, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetName1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_PlatformInfo1) == 0x0001C8, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_PlatformInfo1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_valid2) == 0x0001E8, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_valid2' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetUserID2) == 0x0001F0, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetUserID2' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetCharacterID2) == 0x000200, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetCharacterID2' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetName2) == 0x000210, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetName2' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_PlatformInfo2) == 0x000220, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_PlatformInfo2' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_valid_1) == 0x000240, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_valid_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetUserID1_1) == 0x000248, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetUserID1_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetCharacterID1_1) == 0x000258, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetCharacterID1_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetName1_1) == 0x000268, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetName1_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_PlatformInfo1_1) == 0x000278, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_PlatformInfo1_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_valid2_1) == 0x000298, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_valid2_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetUserID2_1) == 0x0002A0, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetUserID2_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetCharacterID2_1) == 0x0002B0, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetCharacterID2_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_TargetName2_1) == 0x0002C0, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_TargetName2_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_GetActivityTargets_PlatformInfo2_1) == 0x0002D0, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_GetActivityTargets_PlatformInfo2_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x0002F0, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x0002F1, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002F8, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, K2Node_Select_Default) == 0x000310, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, K2Node_MakeStruct_FormatArgumentData_1) == 0x000328, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, K2Node_MakeArray_Array) == 0x000368, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize, CallFunc_Format_ReturnValue) == 0x000378, "Member 'Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Activity_GuildOrganize.Activity_GuildOrganize_C.BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Activity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature final
{
public:
	TArray<class FString>                         Keys;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FString>                         Values;                                            // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature) == 0x000008, "Wrong alignment on Activity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");
static_assert(sizeof(Activity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature) == 0x000020, "Wrong size on Activity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");
static_assert(offsetof(Activity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature, Keys) == 0x000000, "Member 'Activity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature::Keys' has a wrong offset!");
static_assert(offsetof(Activity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature, Values) == 0x000010, "Member 'Activity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature::Values' has a wrong offset!");

// Function Activity_GuildOrganize.Activity_GuildOrganize_C.SetActivity_Internal
// 0x00E0 (0x00E0 - 0x0000)
struct Activity_GuildOrganize_C_SetActivity_Internal final
{
public:
	struct FGuildActivity                         Other;                                             // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_GuildOrganize_C_SetActivity_Internal) == 0x000008, "Wrong alignment on Activity_GuildOrganize_C_SetActivity_Internal");
static_assert(sizeof(Activity_GuildOrganize_C_SetActivity_Internal) == 0x0000E0, "Wrong size on Activity_GuildOrganize_C_SetActivity_Internal");
static_assert(offsetof(Activity_GuildOrganize_C_SetActivity_Internal, Other) == 0x000000, "Member 'Activity_GuildOrganize_C_SetActivity_Internal::Other' has a wrong offset!");

}

