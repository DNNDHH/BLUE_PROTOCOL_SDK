#pragma once

 

// Package: StackBLuckyChance

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function StackBLuckyChance.StackBLuckyChance_C.ExecuteUbergraph_StackBLuckyChance
// 0x0048 (0x0048 - 0x0000)
struct StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DD7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DD8[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DD9[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance) == 0x000008, "Wrong alignment on StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance");
static_assert(sizeof(StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance) == 0x000048, "Wrong size on StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance");
static_assert(offsetof(StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance, EntryPoint) == 0x000000, "Member 'StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance::EntryPoint' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance, K2Node_Event_IsDesignTime) == 0x000030, "Member 'StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance, CallFunc_MakeVector2D_ReturnValue) == 0x000034, "Member 'StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000040, "Member 'StackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function StackBLuckyChance.StackBLuckyChance_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct StackBLuckyChance_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StackBLuckyChance_C_PreConstruct) == 0x000001, "Wrong alignment on StackBLuckyChance_C_PreConstruct");
static_assert(sizeof(StackBLuckyChance_C_PreConstruct) == 0x000001, "Wrong size on StackBLuckyChance_C_PreConstruct");
static_assert(offsetof(StackBLuckyChance_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'StackBLuckyChance_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function StackBLuckyChance.StackBLuckyChance_C.SetData
// 0x0130 (0x0130 - 0x0000)
struct StackBLuckyChance_C_SetData final
{
public:
	struct FOwnItemInfo                           InfoData;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DDA[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLuckyChanceNum_ReturnValue;            // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBLuckyChance_C_SetData) == 0x000008, "Wrong alignment on StackBLuckyChance_C_SetData");
static_assert(sizeof(StackBLuckyChance_C_SetData) == 0x000130, "Wrong size on StackBLuckyChance_C_SetData");
static_assert(offsetof(StackBLuckyChance_C_SetData, InfoData) == 0x000000, "Member 'StackBLuckyChance_C_SetData::InfoData' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_SetData, CallFunc_GetStackBNum_ReturnValue) == 0x000118, "Member 'StackBLuckyChance_C_SetData::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_SetData, CallFunc_GetMasterDataManager_IsValid) == 0x00011C, "Member 'StackBLuckyChance_C_SetData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_SetData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000120, "Member 'StackBLuckyChance_C_SetData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_SetData, CallFunc_GetLuckyChanceNum_ReturnValue) == 0x000128, "Member 'StackBLuckyChance_C_SetData::CallFunc_GetLuckyChanceNum_ReturnValue' has a wrong offset!");

// Function StackBLuckyChance.StackBLuckyChance_C.SetLuckyChanceNum
// 0x0098 (0x0098 - 0x0000)
struct StackBLuckyChance_C_SetLuckyChanceNum final
{
public:
	int32                                         ChanceNum;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DDB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0018)()
};
static_assert(alignof(StackBLuckyChance_C_SetLuckyChanceNum) == 0x000008, "Wrong alignment on StackBLuckyChance_C_SetLuckyChanceNum");
static_assert(sizeof(StackBLuckyChance_C_SetLuckyChanceNum) == 0x000098, "Wrong size on StackBLuckyChance_C_SetLuckyChanceNum");
static_assert(offsetof(StackBLuckyChance_C_SetLuckyChanceNum, ChanceNum) == 0x000000, "Member 'StackBLuckyChance_C_SetLuckyChanceNum::ChanceNum' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_SetLuckyChanceNum, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'StackBLuckyChance_C_SetLuckyChanceNum::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_SetLuckyChanceNum, CallFunc_GetTextFromAsset_ReturnValue) == 0x000048, "Member 'StackBLuckyChance_C_SetLuckyChanceNum::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_SetLuckyChanceNum, K2Node_MakeArray_Array) == 0x000058, "Member 'StackBLuckyChance_C_SetLuckyChanceNum::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_SetLuckyChanceNum, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'StackBLuckyChance_C_SetLuckyChanceNum::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_SetLuckyChanceNum, CallFunc_Format_ReturnValue) == 0x000080, "Member 'StackBLuckyChance_C_SetLuckyChanceNum::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function StackBLuckyChance.StackBLuckyChance_C.UpdateColor
// 0x00D0 (0x00D0 - 0x0000)
struct StackBLuckyChance_C_UpdateColor final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DDC[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0080(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x00A8(0x0028)()
};
static_assert(alignof(StackBLuckyChance_C_UpdateColor) == 0x000008, "Wrong alignment on StackBLuckyChance_C_UpdateColor");
static_assert(sizeof(StackBLuckyChance_C_UpdateColor) == 0x0000D0, "Wrong size on StackBLuckyChance_C_UpdateColor");
static_assert(offsetof(StackBLuckyChance_C_UpdateColor, Temp_bool_Variable) == 0x000000, "Member 'StackBLuckyChance_C_UpdateColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_UpdateColor, Temp_bool_Variable_1) == 0x000001, "Member 'StackBLuckyChance_C_UpdateColor::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_UpdateColor, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'StackBLuckyChance_C_UpdateColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_UpdateColor, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'StackBLuckyChance_C_UpdateColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_UpdateColor, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'StackBLuckyChance_C_UpdateColor::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_UpdateColor, K2Node_Select_Default) == 0x000080, "Member 'StackBLuckyChance_C_UpdateColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StackBLuckyChance_C_UpdateColor, K2Node_Select_Default_1) == 0x0000A8, "Member 'StackBLuckyChance_C_UpdateColor::K2Node_Select_Default_1' has a wrong offset!");

}

