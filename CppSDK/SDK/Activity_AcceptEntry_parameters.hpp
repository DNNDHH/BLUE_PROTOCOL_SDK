#pragma once

 

// Package: Activity_AcceptEntry

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Activity_AcceptEntry.Activity_AcceptEntry_C.ExecuteUbergraph_Activity_AcceptEntry
// 0x0368 (0x0368 - 0x0000)
struct Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EBA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_Keys;                           // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TArray<class FString>                         K2Node_CustomEvent_Values;                         // 0x0018(0x0010)(ConstParm, ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EBB[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<class FString>& Keys, TArray<class FString>& Values)> K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8EBC[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0040(0x0018)()
	struct FGuildActivity                         K2Node_Event_Other;                                // 0x0058(0x00E0)(ConstParm)
	bool                                          CallFunc_GetActivityTargets_valid;                 // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EBD[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1;         // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1;    // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1;           // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1;         // 0x0170(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2;                // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EBE[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2;         // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2;    // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2;           // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2;         // 0x01C8(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid_1;               // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EBF[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1_1;       // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1_1;  // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1_1;         // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1_1;       // 0x0220(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2_1;              // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EC0[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2_1;       // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2_1;  // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2_1;         // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2_1;       // 0x0278(0x0020)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EC1[0x6];                                     // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02A0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EC2[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02D0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x02E8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0300(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0340(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0350(0x0018)()
};
static_assert(alignof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry) == 0x000008, "Wrong alignment on Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry");
static_assert(sizeof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry) == 0x000368, "Wrong size on Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, EntryPoint) == 0x000000, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, K2Node_CustomEvent_Keys) == 0x000008, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::K2Node_CustomEvent_Keys' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, K2Node_CustomEvent_Values) == 0x000018, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::K2Node_CustomEvent_Values' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_MakeLiteralByte_ReturnValue) == 0x000028, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetRestrictText_ReturnValue) == 0x000040, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, K2Node_Event_Other) == 0x000058, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_valid) == 0x000138, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_valid' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetUserID1) == 0x000140, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetUserID1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetCharacterID1) == 0x000150, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetCharacterID1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetName1) == 0x000160, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetName1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_PlatformInfo1) == 0x000170, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_PlatformInfo1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_valid2) == 0x000190, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_valid2' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetUserID2) == 0x000198, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetUserID2' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetCharacterID2) == 0x0001A8, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetCharacterID2' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetName2) == 0x0001B8, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetName2' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_PlatformInfo2) == 0x0001C8, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_PlatformInfo2' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_valid_1) == 0x0001E8, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_valid_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetUserID1_1) == 0x0001F0, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetUserID1_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetCharacterID1_1) == 0x000200, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetCharacterID1_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetName1_1) == 0x000210, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetName1_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_PlatformInfo1_1) == 0x000220, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_PlatformInfo1_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_valid2_1) == 0x000240, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_valid2_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetUserID2_1) == 0x000248, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetUserID2_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetCharacterID2_1) == 0x000258, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetCharacterID2_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_TargetName2_1) == 0x000268, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_TargetName2_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetActivityTargets_PlatformInfo2_1) == 0x000278, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetActivityTargets_PlatformInfo2_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x000298, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x000299, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_Conv_StringToText_ReturnValue) == 0x0002A0, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_GetTextFromAsset_ReturnValue) == 0x0002B8, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, Temp_bool_Variable) == 0x0002C8, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002D0, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, K2Node_Select_Default) == 0x0002E8, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, K2Node_MakeStruct_FormatArgumentData) == 0x000300, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, K2Node_MakeArray_Array) == 0x000340, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry, CallFunc_Format_ReturnValue) == 0x000350, "Member 'Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Activity_AcceptEntry.Activity_AcceptEntry_C.OnClickedLink
// 0x0020 (0x0020 - 0x0000)
struct Activity_AcceptEntry_C_OnClickedLink final
{
public:
	TArray<class FString>                         Keys;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FString>                         Values;                                            // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_AcceptEntry_C_OnClickedLink) == 0x000008, "Wrong alignment on Activity_AcceptEntry_C_OnClickedLink");
static_assert(sizeof(Activity_AcceptEntry_C_OnClickedLink) == 0x000020, "Wrong size on Activity_AcceptEntry_C_OnClickedLink");
static_assert(offsetof(Activity_AcceptEntry_C_OnClickedLink, Keys) == 0x000000, "Member 'Activity_AcceptEntry_C_OnClickedLink::Keys' has a wrong offset!");
static_assert(offsetof(Activity_AcceptEntry_C_OnClickedLink, Values) == 0x000010, "Member 'Activity_AcceptEntry_C_OnClickedLink::Values' has a wrong offset!");

// Function Activity_AcceptEntry.Activity_AcceptEntry_C.SetActivity_Internal
// 0x00E0 (0x00E0 - 0x0000)
struct Activity_AcceptEntry_C_SetActivity_Internal final
{
public:
	struct FGuildActivity                         Other;                                             // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_AcceptEntry_C_SetActivity_Internal) == 0x000008, "Wrong alignment on Activity_AcceptEntry_C_SetActivity_Internal");
static_assert(sizeof(Activity_AcceptEntry_C_SetActivity_Internal) == 0x0000E0, "Wrong size on Activity_AcceptEntry_C_SetActivity_Internal");
static_assert(offsetof(Activity_AcceptEntry_C_SetActivity_Internal, Other) == 0x000000, "Member 'Activity_AcceptEntry_C_SetActivity_Internal::Other' has a wrong offset!");

}

