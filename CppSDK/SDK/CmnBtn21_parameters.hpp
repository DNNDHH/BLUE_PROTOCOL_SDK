#pragma once

 

// Package: CmnBtn21

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CmnBtn21.CmnBtn21_C.ExecuteUbergraph_CmnBtn21
// 0x0078 (0x0078 - 0x0000)
struct CmnBtn21_C_ExecuteUbergraph_CmnBtn21 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F85[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F86[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0048(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0060(0x0018)()
};
static_assert(alignof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21) == 0x000008, "Wrong alignment on CmnBtn21_C_ExecuteUbergraph_CmnBtn21");
static_assert(sizeof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21) == 0x000078, "Wrong size on CmnBtn21_C_ExecuteUbergraph_CmnBtn21");
static_assert(offsetof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21, EntryPoint) == 0x000000, "Member 'CmnBtn21_C_ExecuteUbergraph_CmnBtn21::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21, Temp_bool_Variable) == 0x000004, "Member 'CmnBtn21_C_ExecuteUbergraph_CmnBtn21::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21, K2Node_Event_IsDesignTime) == 0x000005, "Member 'CmnBtn21_C_ExecuteUbergraph_CmnBtn21::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'CmnBtn21_C_ExecuteUbergraph_CmnBtn21::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000018, "Member 'CmnBtn21_C_ExecuteUbergraph_CmnBtn21::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'CmnBtn21_C_ExecuteUbergraph_CmnBtn21::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000038, "Member 'CmnBtn21_C_ExecuteUbergraph_CmnBtn21::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000048, "Member 'CmnBtn21_C_ExecuteUbergraph_CmnBtn21::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBtn21_C_ExecuteUbergraph_CmnBtn21, K2Node_Select_Default) == 0x000060, "Member 'CmnBtn21_C_ExecuteUbergraph_CmnBtn21::K2Node_Select_Default' has a wrong offset!");

// Function CmnBtn21.CmnBtn21_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CmnBtn21_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn21_C_PreConstruct) == 0x000001, "Wrong alignment on CmnBtn21_C_PreConstruct");
static_assert(sizeof(CmnBtn21_C_PreConstruct) == 0x000001, "Wrong size on CmnBtn21_C_PreConstruct");
static_assert(offsetof(CmnBtn21_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CmnBtn21_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CmnBtn21.CmnBtn21_C.SetPressedSoundId
// 0x0002 (0x0002 - 0x0000)
struct CmnBtn21_C_SetPressedSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn21_C_SetPressedSoundId) == 0x000001, "Wrong alignment on CmnBtn21_C_SetPressedSoundId");
static_assert(sizeof(CmnBtn21_C_SetPressedSoundId) == 0x000002, "Wrong size on CmnBtn21_C_SetPressedSoundId");
static_assert(offsetof(CmnBtn21_C_SetPressedSoundId, InSoundId) == 0x000000, "Member 'CmnBtn21_C_SetPressedSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(CmnBtn21_C_SetPressedSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CmnBtn21_C_SetPressedSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CmnBtn21.CmnBtn21_C.SetHoveredSoundId
// 0x0002 (0x0002 - 0x0000)
struct CmnBtn21_C_SetHoveredSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnBtn21_C_SetHoveredSoundId) == 0x000001, "Wrong alignment on CmnBtn21_C_SetHoveredSoundId");
static_assert(sizeof(CmnBtn21_C_SetHoveredSoundId) == 0x000002, "Wrong size on CmnBtn21_C_SetHoveredSoundId");
static_assert(offsetof(CmnBtn21_C_SetHoveredSoundId, InSoundId) == 0x000000, "Member 'CmnBtn21_C_SetHoveredSoundId::InSoundId' has a wrong offset!");
static_assert(offsetof(CmnBtn21_C_SetHoveredSoundId, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CmnBtn21_C_SetHoveredSoundId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

