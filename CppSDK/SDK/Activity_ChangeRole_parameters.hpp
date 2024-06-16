#pragma once

 

// Package: Activity_ChangeRole

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Activity_ChangeRole.Activity_ChangeRole_C.ExecuteUbergraph_Activity_ChangeRole
// 0x04F8 (0x04F8 - 0x0000)
struct Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8410[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(TArray<class FString>& Keys, TArray<class FString>& Values)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8411[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Map_Find_Value;                           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8412[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0048(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8413[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0078(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8414[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue_1;            // 0x0098(0x0018)()
	struct FGuildActivity                         K2Node_Event_Other;                                // 0x00B0(0x00E0)(ConstParm)
	bool                                          CallFunc_GetActivityTargets_valid;                 // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8415[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1;         // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1;    // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1;           // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1;         // 0x01C8(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2;                // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8416[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2;         // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2;    // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2;           // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2;         // 0x0220(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid_1;               // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8417[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1_1;       // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1_1;  // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1_1;         // 0x0268(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1_1;       // 0x0278(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2_1;              // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8418[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2_1;       // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2_1;  // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2_1;         // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2_1;       // 0x02D0(0x0020)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8419[0x6];                                     // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02F8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0310(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC_1;             // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict_1;        // 0x0329(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_841A[0x2];                                     // 0x032A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActivityRole_ReturnValue;              // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_841B[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0338(0x0018)()
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_841C[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0358(0x0040)(HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_841D[0x3];                                     // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetGuildMemberRoleTextId_ReturnValue;     // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x03A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_1;                           // 0x03B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x03C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x03E0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0420(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0460(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0470(0x0018)()
	TArray<class FString>                         K2Node_CustomEvent_Keys;                           // 0x0488(0x0010)(ConstParm, ReferenceParm)
	TArray<class FString>                         K2Node_CustomEvent_Values;                         // 0x0498(0x0010)(ConstParm, ReferenceParm)
	TMap<class FString, class FString>            CallFunc_Make2StrMap_ReturnValue;                  // 0x04A8(0x0050)()
};
static_assert(alignof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole) == 0x000008, "Wrong alignment on Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole");
static_assert(sizeof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole) == 0x0004F8, "Wrong size on Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, EntryPoint) == 0x000000, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::EntryPoint' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, Temp_string_Variable) == 0x000008, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_MakeLiteralByte_ReturnValue) == 0x000028, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_Map_Find_Value) == 0x000030, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000041, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetRestrictText_ReturnValue) == 0x000048, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000060, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetTextFromAsset_ReturnValue) == 0x000068, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_Conv_StringToText_ReturnValue) == 0x000078, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, Temp_bool_Variable) == 0x000090, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000091, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetRestrictText_ReturnValue_1) == 0x000098, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetRestrictText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, K2Node_Event_Other) == 0x0000B0, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_valid) == 0x000190, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_valid' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetUserID1) == 0x000198, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetUserID1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetCharacterID1) == 0x0001A8, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetCharacterID1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetName1) == 0x0001B8, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetName1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_PlatformInfo1) == 0x0001C8, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_PlatformInfo1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_valid2) == 0x0001E8, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_valid2' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetUserID2) == 0x0001F0, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetUserID2' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetCharacterID2) == 0x000200, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetCharacterID2' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetName2) == 0x000210, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetName2' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_PlatformInfo2) == 0x000220, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_PlatformInfo2' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_valid_1) == 0x000240, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_valid_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetUserID1_1) == 0x000248, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetUserID1_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetCharacterID1_1) == 0x000258, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetCharacterID1_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetName1_1) == 0x000268, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetName1_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_PlatformInfo1_1) == 0x000278, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_PlatformInfo1_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_valid2_1) == 0x000298, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_valid2_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetUserID2_1) == 0x0002A0, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetUserID2_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetCharacterID2_1) == 0x0002B0, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetCharacterID2_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_TargetName2_1) == 0x0002C0, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_TargetName2_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityTargets_PlatformInfo2_1) == 0x0002D0, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityTargets_PlatformInfo2_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x0002F0, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x0002F1, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002F8, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000310, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_CheckXboxPrivacyType_IsUGC_1) == 0x000328, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_CheckXboxPrivacyType_IsUGC_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_CheckXboxPrivacyType_IsRestrict_1) == 0x000329, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_CheckXboxPrivacyType_IsRestrict_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetActivityRole_ReturnValue) == 0x00032C, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetActivityRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_Conv_IntToByte_ReturnValue) == 0x000330, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, K2Node_Select_Default) == 0x000338, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetValidValue_ReturnValue) == 0x000350, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, K2Node_MakeStruct_FormatArgumentData) == 0x000358, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, Temp_bool_Variable_1) == 0x000398, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetGuildMemberRoleTextId_ReturnValue) == 0x00039C, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetGuildMemberRoleTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0003A0, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, K2Node_Select_Default_1) == 0x0003B0, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0003C8, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, K2Node_MakeStruct_FormatArgumentData_1) == 0x0003E0, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, K2Node_MakeStruct_FormatArgumentData_2) == 0x000420, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, K2Node_MakeArray_Array) == 0x000460, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_Format_ReturnValue) == 0x000470, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, K2Node_CustomEvent_Keys) == 0x000488, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::K2Node_CustomEvent_Keys' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, K2Node_CustomEvent_Values) == 0x000498, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::K2Node_CustomEvent_Values' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole, CallFunc_Make2StrMap_ReturnValue) == 0x0004A8, "Member 'Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole::CallFunc_Make2StrMap_ReturnValue' has a wrong offset!");

// Function Activity_ChangeRole.Activity_ChangeRole_C.�������_0
// 0x0020 (0x0020 - 0x0000)
struct Activity_ChangeRole_C__________0 final
{
public:
	TArray<class FString>                         Keys;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FString>                         Values;                                            // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_ChangeRole_C__________0) == 0x000008, "Wrong alignment on Activity_ChangeRole_C__________0");
static_assert(sizeof(Activity_ChangeRole_C__________0) == 0x000020, "Wrong size on Activity_ChangeRole_C__________0");
static_assert(offsetof(Activity_ChangeRole_C__________0, Keys) == 0x000000, "Member 'Activity_ChangeRole_C__________0::Keys' has a wrong offset!");
static_assert(offsetof(Activity_ChangeRole_C__________0, Values) == 0x000010, "Member 'Activity_ChangeRole_C__________0::Values' has a wrong offset!");

// Function Activity_ChangeRole.Activity_ChangeRole_C.SetActivity_Internal
// 0x00E0 (0x00E0 - 0x0000)
struct Activity_ChangeRole_C_SetActivity_Internal final
{
public:
	struct FGuildActivity                         Other;                                             // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_ChangeRole_C_SetActivity_Internal) == 0x000008, "Wrong alignment on Activity_ChangeRole_C_SetActivity_Internal");
static_assert(sizeof(Activity_ChangeRole_C_SetActivity_Internal) == 0x0000E0, "Wrong size on Activity_ChangeRole_C_SetActivity_Internal");
static_assert(offsetof(Activity_ChangeRole_C_SetActivity_Internal, Other) == 0x000000, "Member 'Activity_ChangeRole_C_SetActivity_Internal::Other' has a wrong offset!");

}

