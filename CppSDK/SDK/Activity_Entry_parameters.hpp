#pragma once

 

// Package: Activity_Entry

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Activity_Entry.Activity_Entry_C.ExecuteUbergraph_Activity_Entry
// 0x0558 (0x0558 - 0x0000)
struct Activity_Entry_C_ExecuteUbergraph_Activity_Entry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EAD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EAE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Map_Find_Value;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EAF[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0038(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EB0[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EB1[0x5];                                     // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue_1;            // 0x00C8(0x0018)()
	struct FGuildActivity                         K2Node_Event_Other;                                // 0x00E0(0x00E0)(ConstParm)
	bool                                          CallFunc_GetActivityTargets_valid;                 // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EB2[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1;         // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1;    // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1;           // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1;         // 0x01F8(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2;                // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EB3[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2;         // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2;    // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2;           // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2;         // 0x0250(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid_1;               // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EB4[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1_1;       // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1_1;  // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1_1;         // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1_1;       // 0x02A8(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2_1;              // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EB5[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2_1;       // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2_1;  // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2_1;         // 0x02F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2_1;       // 0x0300(0x0020)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EB6[0x6];                                     // 0x0322(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0328(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0340(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC_1;             // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict_1;        // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EB7[0x6];                                     // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0360(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x03A0(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x03B8(0x0018)()
	bool                                          CallFunc_GetActivityTargets_valid_2;               // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EB8[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID1_2;       // 0x03D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID1_2;  // 0x03E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName1_2;         // 0x03F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo1_2;       // 0x0408(0x0020)()
	bool                                          CallFunc_GetActivityTargets_valid2_2;              // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EB9[0x7];                                     // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetActivityTargets_TargetUserID2_2;       // 0x0430(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetCharacterID2_2;  // 0x0440(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetActivityTargets_TargetName2_2;         // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetActivityTargets_PlatformInfo2_2;       // 0x0460(0x0020)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0480(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x04C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x04D0(0x0018)()
	TArray<class FString>                         K2Node_ComponentBoundEvent_Keys;                   // 0x04E8(0x0010)(ConstParm, ReferenceParm)
	TArray<class FString>                         K2Node_ComponentBoundEvent_Values;                 // 0x04F8(0x0010)(ConstParm, ReferenceParm)
	TMap<class FString, class FString>            CallFunc_Make2StrMap_ReturnValue;                  // 0x0508(0x0050)()
};
static_assert(alignof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry) == 0x000008, "Wrong alignment on Activity_Entry_C_ExecuteUbergraph_Activity_Entry");
static_assert(sizeof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry) == 0x000558, "Wrong size on Activity_Entry_C_ExecuteUbergraph_Activity_Entry");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, EntryPoint) == 0x000000, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::EntryPoint' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, Temp_string_Variable) == 0x000008, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_MakeLiteralByte_ReturnValue) == 0x000018, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_Map_Find_Value) == 0x000020, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_Map_Find_ReturnValue) == 0x000030, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetRestrictText_ReturnValue) == 0x000038, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000050, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000051, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetTextFromAsset_ReturnValue) == 0x000058, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, Temp_bool_Variable) == 0x0000C0, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000C1, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, Temp_bool_Variable_1) == 0x0000C2, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetRestrictText_ReturnValue_1) == 0x0000C8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetRestrictText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, K2Node_Event_Other) == 0x0000E0, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_valid) == 0x0001C0, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_valid' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetUserID1) == 0x0001C8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetUserID1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetCharacterID1) == 0x0001D8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetCharacterID1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetName1) == 0x0001E8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetName1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_PlatformInfo1) == 0x0001F8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_PlatformInfo1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_valid2) == 0x000218, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_valid2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetUserID2) == 0x000220, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetUserID2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetCharacterID2) == 0x000230, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetCharacterID2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetName2) == 0x000240, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetName2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_PlatformInfo2) == 0x000250, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_PlatformInfo2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_valid_1) == 0x000270, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_valid_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetUserID1_1) == 0x000278, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetUserID1_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetCharacterID1_1) == 0x000288, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetCharacterID1_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetName1_1) == 0x000298, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetName1_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_PlatformInfo1_1) == 0x0002A8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_PlatformInfo1_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_valid2_1) == 0x0002C8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_valid2_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetUserID2_1) == 0x0002D0, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetUserID2_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetCharacterID2_1) == 0x0002E0, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetCharacterID2_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetName2_1) == 0x0002F0, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetName2_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_PlatformInfo2_1) == 0x000300, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_PlatformInfo2_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x000320, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x000321, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000328, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, K2Node_Select_Default) == 0x000340, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_CheckXboxPrivacyType_IsUGC_1) == 0x000358, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_CheckXboxPrivacyType_IsUGC_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_CheckXboxPrivacyType_IsRestrict_1) == 0x000359, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_CheckXboxPrivacyType_IsRestrict_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, K2Node_MakeStruct_FormatArgumentData_1) == 0x000360, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0003A0, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, K2Node_Select_Default_1) == 0x0003B8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_valid_2) == 0x0003D0, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_valid_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetUserID1_2) == 0x0003D8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetUserID1_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetCharacterID1_2) == 0x0003E8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetCharacterID1_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetName1_2) == 0x0003F8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetName1_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_PlatformInfo1_2) == 0x000408, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_PlatformInfo1_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_valid2_2) == 0x000428, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_valid2_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetUserID2_2) == 0x000430, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetUserID2_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetCharacterID2_2) == 0x000440, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetCharacterID2_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_TargetName2_2) == 0x000450, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_TargetName2_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_GetActivityTargets_PlatformInfo2_2) == 0x000460, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_GetActivityTargets_PlatformInfo2_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, K2Node_MakeStruct_FormatArgumentData_2) == 0x000480, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, K2Node_MakeArray_Array) == 0x0004C0, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_Format_ReturnValue) == 0x0004D0, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, K2Node_ComponentBoundEvent_Keys) == 0x0004E8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::K2Node_ComponentBoundEvent_Keys' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, K2Node_ComponentBoundEvent_Values) == 0x0004F8, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::K2Node_ComponentBoundEvent_Values' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_ExecuteUbergraph_Activity_Entry, CallFunc_Make2StrMap_ReturnValue) == 0x000508, "Member 'Activity_Entry_C_ExecuteUbergraph_Activity_Entry::CallFunc_Make2StrMap_ReturnValue' has a wrong offset!");

// Function Activity_Entry.Activity_Entry_C.BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Activity_Entry_C_BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature final
{
public:
	TArray<class FString>                         Keys;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FString>                         Values;                                            // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_Entry_C_BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature) == 0x000008, "Wrong alignment on Activity_Entry_C_BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature");
static_assert(sizeof(Activity_Entry_C_BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature) == 0x000020, "Wrong size on Activity_Entry_C_BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature");
static_assert(offsetof(Activity_Entry_C_BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature, Keys) == 0x000000, "Member 'Activity_Entry_C_BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature::Keys' has a wrong offset!");
static_assert(offsetof(Activity_Entry_C_BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature, Values) == 0x000010, "Member 'Activity_Entry_C_BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature::Values' has a wrong offset!");

// Function Activity_Entry.Activity_Entry_C.SetActivity_Internal
// 0x00E0 (0x00E0 - 0x0000)
struct Activity_Entry_C_SetActivity_Internal final
{
public:
	struct FGuildActivity                         Other;                                             // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Activity_Entry_C_SetActivity_Internal) == 0x000008, "Wrong alignment on Activity_Entry_C_SetActivity_Internal");
static_assert(sizeof(Activity_Entry_C_SetActivity_Internal) == 0x0000E0, "Wrong size on Activity_Entry_C_SetActivity_Internal");
static_assert(offsetof(Activity_Entry_C_SetActivity_Internal, Other) == 0x000000, "Member 'Activity_Entry_C_SetActivity_Internal::Other' has a wrong offset!");

}

