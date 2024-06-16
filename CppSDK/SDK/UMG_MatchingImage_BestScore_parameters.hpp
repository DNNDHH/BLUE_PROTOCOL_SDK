#pragma once

 

// Package: UMG_MatchingImage_BestScore

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetBestScore
// 0x03E8 (0x03E8 - 0x0000)
struct UMG_MatchingImage_BestScore_C_SetBestScore final
{
public:
	int32                                         BestScore;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClearNum;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameContentId;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DC0[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             MapInfo;                                           // 0x0018(0x01E0)(Edit, BlueprintVisible)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DC1[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfoByGameContentId_OutMapInfo;     // 0x0200(0x01E0)()
	bool                                          CallFunc_GetMapInfoByGameContentId_ReturnValue;    // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x03E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x03E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x03E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingImage_BestScore_C_SetBestScore) == 0x000008, "Wrong alignment on UMG_MatchingImage_BestScore_C_SetBestScore");
static_assert(sizeof(UMG_MatchingImage_BestScore_C_SetBestScore) == 0x0003E8, "Wrong size on UMG_MatchingImage_BestScore_C_SetBestScore");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, BestScore) == 0x000000, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::BestScore' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, ClearNum) == 0x000004, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::ClearNum' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, GameContentId) == 0x000008, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::GameContentId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, ClassType) == 0x000010, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::ClassType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, MapInfo) == 0x000018, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::MapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0001F8, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, CallFunc_Greater_IntInt_ReturnValue) == 0x0001F9, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, CallFunc_GetMapInfoByGameContentId_OutMapInfo) == 0x000200, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::CallFunc_GetMapInfoByGameContentId_OutMapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, CallFunc_GetMapInfoByGameContentId_ReturnValue) == 0x0003E0, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::CallFunc_GetMapInfoByGameContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0003E1, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0003E2, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetBestScore, K2Node_SwitchString_CmpSuccess) == 0x0003E3, "Member 'UMG_MatchingImage_BestScore_C_SetBestScore::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetTime
// 0x01D8 (0x01D8 - 0x0000)
struct UMG_MatchingImage_BestScore_C_SetTime final
{
public:
	int32                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cleared;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DC2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DC3[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_FromMilliseconds_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DC4[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_FromMilliseconds_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_TimespanTimespan_ReturnValue;     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DC5[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	struct FTimespan                              K2Node_Select_Default;                             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalMinutes_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMilliseconds_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0088(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B8(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00F8(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_GetSeconds_ReturnValue;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DC6[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0140(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0158(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0198(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01A8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x01C0(0x0018)()
};
static_assert(alignof(UMG_MatchingImage_BestScore_C_SetTime) == 0x000008, "Wrong alignment on UMG_MatchingImage_BestScore_C_SetTime");
static_assert(sizeof(UMG_MatchingImage_BestScore_C_SetTime) == 0x0001D8, "Wrong size on UMG_MatchingImage_BestScore_C_SetTime");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, Time) == 0x000000, "Member 'UMG_MatchingImage_BestScore_C_SetTime::Time' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, Cleared) == 0x000004, "Member 'UMG_MatchingImage_BestScore_C_SetTime::Cleared' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, Temp_text_Variable) == 0x000008, "Member 'UMG_MatchingImage_BestScore_C_SetTime::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000020, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_FromMilliseconds_ReturnValue) == 0x000028, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_FromMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, Temp_bool_Variable) == 0x000030, "Member 'UMG_MatchingImage_BestScore_C_SetTime::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, Temp_bool_Variable_1) == 0x000031, "Member 'UMG_MatchingImage_BestScore_C_SetTime::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_FromMilliseconds_ReturnValue_1) == 0x000038, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_FromMilliseconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_Greater_TimespanTimespan_ReturnValue) == 0x000040, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_Greater_TimespanTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_GetTextFromAsset_ReturnValue) == 0x000048, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, K2Node_Select_Default) == 0x000070, "Member 'UMG_MatchingImage_BestScore_C_SetTime::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_GetTotalMinutes_ReturnValue) == 0x000078, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_GetTotalMinutes_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_GetMilliseconds_ReturnValue) == 0x00007C, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_GetMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_FTrunc_ReturnValue) == 0x000080, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_Divide_IntInt_ReturnValue) == 0x000084, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_Conv_IntToText_ReturnValue) == 0x000088, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000A0, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, K2Node_MakeStruct_FormatArgumentData) == 0x0000B8, "Member 'UMG_MatchingImage_BestScore_C_SetTime::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000F8, "Member 'UMG_MatchingImage_BestScore_C_SetTime::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_GetSeconds_ReturnValue) == 0x000138, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_GetSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000140, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, K2Node_MakeStruct_FormatArgumentData_2) == 0x000158, "Member 'UMG_MatchingImage_BestScore_C_SetTime::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, K2Node_MakeArray_Array) == 0x000198, "Member 'UMG_MatchingImage_BestScore_C_SetTime::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, CallFunc_Format_ReturnValue) == 0x0001A8, "Member 'UMG_MatchingImage_BestScore_C_SetTime::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTime, K2Node_Select_Default_1) == 0x0001C0, "Member 'UMG_MatchingImage_BestScore_C_SetTime::K2Node_Select_Default_1' has a wrong offset!");

// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetScore
// 0x0060 (0x0060 - 0x0000)
struct UMG_MatchingImage_BestScore_C_SetScore final
{
public:
	int32                                         Score;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cleared;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DC7[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DC8[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0010(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DC9[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0048(0x0018)()
};
static_assert(alignof(UMG_MatchingImage_BestScore_C_SetScore) == 0x000008, "Wrong alignment on UMG_MatchingImage_BestScore_C_SetScore");
static_assert(sizeof(UMG_MatchingImage_BestScore_C_SetScore) == 0x000060, "Wrong size on UMG_MatchingImage_BestScore_C_SetScore");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetScore, Score) == 0x000000, "Member 'UMG_MatchingImage_BestScore_C_SetScore::Score' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetScore, Cleared) == 0x000004, "Member 'UMG_MatchingImage_BestScore_C_SetScore::Cleared' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetScore, Temp_bool_Variable) == 0x000005, "Member 'UMG_MatchingImage_BestScore_C_SetScore::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetScore, Temp_int_Variable) == 0x000008, "Member 'UMG_MatchingImage_BestScore_C_SetScore::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetScore, Temp_bool_Variable_1) == 0x00000C, "Member 'UMG_MatchingImage_BestScore_C_SetScore::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetScore, Temp_text_Variable) == 0x000010, "Member 'UMG_MatchingImage_BestScore_C_SetScore::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetScore, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'UMG_MatchingImage_BestScore_C_SetScore::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetScore, K2Node_Select_Default) == 0x00002C, "Member 'UMG_MatchingImage_BestScore_C_SetScore::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetScore, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'UMG_MatchingImage_BestScore_C_SetScore::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetScore, K2Node_Select_Default_1) == 0x000048, "Member 'UMG_MatchingImage_BestScore_C_SetScore::K2Node_Select_Default_1' has a wrong offset!");

// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetTower
// 0x0090 (0x0090 - 0x0000)
struct UMG_MatchingImage_BestScore_C_SetTower final
{
public:
	int32                                         FloorBest;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FloorMax;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClearNum;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DCA[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	class FText                                   Temp_text_Variable;                                // 0x0040(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0058(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DCB[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0078(0x0018)()
};
static_assert(alignof(UMG_MatchingImage_BestScore_C_SetTower) == 0x000008, "Wrong alignment on UMG_MatchingImage_BestScore_C_SetTower");
static_assert(sizeof(UMG_MatchingImage_BestScore_C_SetTower) == 0x000090, "Wrong size on UMG_MatchingImage_BestScore_C_SetTower");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTower, FloorBest) == 0x000000, "Member 'UMG_MatchingImage_BestScore_C_SetTower::FloorBest' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTower, FloorMax) == 0x000004, "Member 'UMG_MatchingImage_BestScore_C_SetTower::FloorMax' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTower, ClearNum) == 0x000008, "Member 'UMG_MatchingImage_BestScore_C_SetTower::ClearNum' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTower, Temp_bool_Variable) == 0x00000C, "Member 'UMG_MatchingImage_BestScore_C_SetTower::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTower, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'UMG_MatchingImage_BestScore_C_SetTower::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTower, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'UMG_MatchingImage_BestScore_C_SetTower::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTower, Temp_text_Variable) == 0x000040, "Member 'UMG_MatchingImage_BestScore_C_SetTower::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTower, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000058, "Member 'UMG_MatchingImage_BestScore_C_SetTower::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTower, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'UMG_MatchingImage_BestScore_C_SetTower::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetTower, K2Node_Select_Default) == 0x000078, "Member 'UMG_MatchingImage_BestScore_C_SetTower::K2Node_Select_Default' has a wrong offset!");

// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetRank
// 0x0118 (0x0118 - 0x0000)
struct UMG_MatchingImage_BestScore_C_SetRank final
{
public:
	int32                                         BestScore;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DCC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   GameContentId;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDungeonEvaluation                          Evaluation;                                        // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DCD[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GameMode;                                          // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DCE[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameModeStringByContentId_ReturnValue; // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDungeonEvaluation                          Temp_byte_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DCF[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDungeonEvaluation                          Temp_byte_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DD0[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 Temp_object_Variable_6;                            // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable_7;                            // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable_8;                            // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable_9;                            // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable_10;                           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Temp_object_Variable_11;                           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_ByteByte_ReturnValue;           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_ByteByte_ReturnValue_1;         // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD1[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DD2[0x1];                                     // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DD3[0x2];                                     // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD4[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD5[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD6[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 K2Node_Select_Default_1;                           // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterDungeonRankedReward_IsExists;   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DD7[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterDungeonRankedReward           CallFunc_FindMasterDungeonRankedReward_ReturnValue; // 0x00FC(0x0018)(NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingImage_BestScore_C_SetRank) == 0x000008, "Wrong alignment on UMG_MatchingImage_BestScore_C_SetRank");
static_assert(sizeof(UMG_MatchingImage_BestScore_C_SetRank) == 0x000118, "Wrong size on UMG_MatchingImage_BestScore_C_SetRank");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, BestScore) == 0x000000, "Member 'UMG_MatchingImage_BestScore_C_SetRank::BestScore' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, ClassType) == 0x000004, "Member 'UMG_MatchingImage_BestScore_C_SetRank::ClassType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, GameContentId) == 0x000008, "Member 'UMG_MatchingImage_BestScore_C_SetRank::GameContentId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Evaluation) == 0x000010, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Evaluation' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, GameMode) == 0x000018, "Member 'UMG_MatchingImage_BestScore_C_SetRank::GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_MakeLiteralByte_ReturnValue) == 0x000028, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_GetGameModeStringByContentId_ReturnValue) == 0x000030, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_GetGameModeStringByContentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000040, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_byte_Variable) == 0x000041, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable) == 0x000048, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_1) == 0x000050, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_2) == 0x000058, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_3) == 0x000060, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_4) == 0x000068, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_5) == 0x000070, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_byte_Variable_1) == 0x000078, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_6) == 0x000080, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_7) == 0x000088, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_8) == 0x000090, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_9) == 0x000098, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_10) == 0x0000A0, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_object_Variable_11) == 0x0000A8, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_object_Variable_11' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_LessEqual_ByteByte_ReturnValue) == 0x0000B0, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_LessEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_LessEqual_ByteByte_ReturnValue_1) == 0x0000B1, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_LessEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_int_Variable) == 0x0000B4, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_BooleanAND_ReturnValue) == 0x0000B8, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000B9, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_GetValidValue_ReturnValue) == 0x0000BA, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, Temp_int_Variable_1) == 0x0000BC, "Member 'UMG_MatchingImage_BestScore_C_SetRank::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_Add_IntInt_ReturnValue) == 0x0000C0, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x0000C4, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x0000C5, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000C8, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, K2Node_SwitchEnum_CmpSuccess) == 0x0000CC, "Member 'UMG_MatchingImage_BestScore_C_SetRank::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, K2Node_Select_Default) == 0x0000D0, "Member 'UMG_MatchingImage_BestScore_C_SetRank::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, K2Node_SwitchString_CmpSuccess) == 0x0000D8, "Member 'UMG_MatchingImage_BestScore_C_SetRank::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_MakeLiteralInt_ReturnValue) == 0x0000DC, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_Less_IntInt_ReturnValue) == 0x0000E0, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_GetMasterDataManager_IsValid) == 0x0000E1, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000E8, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, K2Node_Select_Default_1) == 0x0000F0, "Member 'UMG_MatchingImage_BestScore_C_SetRank::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_FindMasterDungeonRankedReward_IsExists) == 0x0000F8, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_FindMasterDungeonRankedReward_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_FindMasterDungeonRankedReward_ReturnValue) == 0x0000FC, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_FindMasterDungeonRankedReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000114, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_SetRank, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000115, "Member 'UMG_MatchingImage_BestScore_C_SetRank::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.Pre Init Time Score Tower
// 0x0018 (0x0018 - 0x0000)
struct UMG_MatchingImage_BestScore_C_Pre_Init_Time_Score_Tower final
{
public:
	class FString                                 GameMode;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingImage_BestScore_C_Pre_Init_Time_Score_Tower) == 0x000008, "Wrong alignment on UMG_MatchingImage_BestScore_C_Pre_Init_Time_Score_Tower");
static_assert(sizeof(UMG_MatchingImage_BestScore_C_Pre_Init_Time_Score_Tower) == 0x000018, "Wrong size on UMG_MatchingImage_BestScore_C_Pre_Init_Time_Score_Tower");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_Pre_Init_Time_Score_Tower, GameMode) == 0x000000, "Member 'UMG_MatchingImage_BestScore_C_Pre_Init_Time_Score_Tower::GameMode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingImage_BestScore_C_Pre_Init_Time_Score_Tower, K2Node_SwitchString_CmpSuccess) == 0x000010, "Member 'UMG_MatchingImage_BestScore_C_Pre_Init_Time_Score_Tower::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

}

