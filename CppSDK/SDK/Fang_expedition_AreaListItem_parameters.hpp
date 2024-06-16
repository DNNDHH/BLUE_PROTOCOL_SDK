#pragma once

 

// Package: Fang_expedition_AreaListItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.OnItemSelected__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaListItem_C_OnItemSelected__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListItem_C_OnItemSelected__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_AreaListItem_C_OnItemSelected__DelegateSignature");
static_assert(sizeof(Fang_expedition_AreaListItem_C_OnItemSelected__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_AreaListItem_C_OnItemSelected__DelegateSignature");
static_assert(offsetof(Fang_expedition_AreaListItem_C_OnItemSelected__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_OnItemSelected__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ExecuteUbergraph_Fang_expedition_AreaListItem
// 0x000C (0x000C - 0x0000)
struct Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Type;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem) == 0x000004, "Wrong alignment on Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem");
static_assert(sizeof(Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem) == 0x00000C, "Wrong size on Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem, EntryPoint) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem, K2Node_CustomEvent_Type) == 0x000004, "Member 'Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000009, "Member 'Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00000A, "Member 'Fang_expedition_AreaListItem_C_ExecuteUbergraph_Fang_expedition_AreaListItem::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.BGTypeSet
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_AreaListItem_C_BGTypeSet final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListItem_C_BGTypeSet) == 0x000004, "Wrong alignment on Fang_expedition_AreaListItem_C_BGTypeSet");
static_assert(sizeof(Fang_expedition_AreaListItem_C_BGTypeSet) == 0x000004, "Wrong size on Fang_expedition_AreaListItem_C_BGTypeSet");
static_assert(offsetof(Fang_expedition_AreaListItem_C_BGTypeSet, Type) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_BGTypeSet::Type' has a wrong offset!");

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetData
// 0x0188 (0x0188 - 0x0000)
struct Fang_expedition_AreaListItem_C_SetData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EAC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionAreaData             Data;                                              // 0x0008(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         BgOverwrite;                                       // 0x00B0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CategoryOverwrite;                                 // 0x00B4(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EAD[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CheckId;                                           // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EAE[0x1];                                     // 0x00D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EAF[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckNewMark_OutParam;                    // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00E7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EB0[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x00F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EB1[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EB2[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_StatusIcon_C*          K2Node_DynamicCast_AsFang_Expedition_Status_Icon;  // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EB3[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EB4[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EB5[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0148(0x0018)()
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EB6[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetExpreditonPlayingStatus_PlayIconList;  // 0x0170(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetExpreditonPlayingStatus_IsNewMark;     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetExpreditonPlayingStatus_IsTimeIcon;    // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EB7[0x1];                                     // 0x0183(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_AreaListItem_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_AreaListItem_C_SetData");
static_assert(sizeof(Fang_expedition_AreaListItem_C_SetData) == 0x000188, "Wrong size on Fang_expedition_AreaListItem_C_SetData");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_SetData::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Data) == 0x000008, "Member 'Fang_expedition_AreaListItem_C_SetData::Data' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, BgOverwrite) == 0x0000B0, "Member 'Fang_expedition_AreaListItem_C_SetData::BgOverwrite' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CategoryOverwrite) == 0x0000B4, "Member 'Fang_expedition_AreaListItem_C_SetData::CategoryOverwrite' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, LoopEnd) == 0x0000B8, "Member 'Fang_expedition_AreaListItem_C_SetData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CheckId) == 0x0000C0, "Member 'Fang_expedition_AreaListItem_C_SetData::CheckId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Temp_bool_Variable) == 0x0000D0, "Member 'Fang_expedition_AreaListItem_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Temp_byte_Variable) == 0x0000D1, "Member 'Fang_expedition_AreaListItem_C_SetData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Temp_byte_Variable_1) == 0x0000D2, "Member 'Fang_expedition_AreaListItem_C_SetData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Temp_bool_Variable_1) == 0x0000D3, "Member 'Fang_expedition_AreaListItem_C_SetData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Temp_byte_Variable_2) == 0x0000D4, "Member 'Fang_expedition_AreaListItem_C_SetData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Temp_byte_Variable_3) == 0x0000D5, "Member 'Fang_expedition_AreaListItem_C_SetData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Temp_bool_Variable_2) == 0x0000D6, "Member 'Fang_expedition_AreaListItem_C_SetData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Temp_int_Variable) == 0x0000D8, "Member 'Fang_expedition_AreaListItem_C_SetData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000DC, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x0000E0, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_CheckNewMark_OutParam) == 0x0000E4, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_CheckNewMark_OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000E5, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, K2Node_Select_Default) == 0x0000E6, "Member 'Fang_expedition_AreaListItem_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, K2Node_SwitchInteger_CmpSuccess) == 0x0000E7, "Member 'Fang_expedition_AreaListItem_C_SetData::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_MakeVector2D_ReturnValue) == 0x0000EC, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_MakeVector2D_ReturnValue_1) == 0x0000F4, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000100, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000108, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, K2Node_Select_Default_1) == 0x00010C, "Member 'Fang_expedition_AreaListItem_C_SetData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_GetChildAt_ReturnValue) == 0x000110, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, K2Node_DynamicCast_AsFang_Expedition_Status_Icon) == 0x000118, "Member 'Fang_expedition_AreaListItem_C_SetData::K2Node_DynamicCast_AsFang_Expedition_Status_Icon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'Fang_expedition_AreaListItem_C_SetData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, Temp_int_Variable_1) == 0x000124, "Member 'Fang_expedition_AreaListItem_C_SetData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000128, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_GetChildAt_ReturnValue_1) == 0x000130, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000138, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_Add_IntInt_ReturnValue_2) == 0x00013C, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_GetPlayerController_ReturnValue) == 0x000140, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000148, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000160, "Member 'Fang_expedition_AreaListItem_C_SetData::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, K2Node_DynamicCast_bSuccess_1) == 0x000168, "Member 'Fang_expedition_AreaListItem_C_SetData::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_GetExpreditonPlayingStatus_PlayIconList) == 0x000170, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_GetExpreditonPlayingStatus_PlayIconList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_GetExpreditonPlayingStatus_IsNewMark) == 0x000180, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_GetExpreditonPlayingStatus_IsNewMark' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_GetExpreditonPlayingStatus_IsTimeIcon) == 0x000181, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_GetExpreditonPlayingStatus_IsTimeIcon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, K2Node_Select_Default_2) == 0x000182, "Member 'Fang_expedition_AreaListItem_C_SetData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetData, CallFunc_Array_LastIndex_ReturnValue) == 0x000184, "Member 'Fang_expedition_AreaListItem_C_SetData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.CheckPlayData
// 0x0198 (0x0198 - 0x0000)
struct Fang_expedition_AreaListItem_C_CheckPlayData final
{
public:
	TArray<struct FSBFang_expeditionPlayData>     PlayDataList;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsField;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EB8[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Category;                                          // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionPlayData             WorkPlayData;                                      // 0x0018(0x0120)(Edit, BlueprintVisible)
	int32                                         PlayCount;                                         // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0146(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EB9[0x1];                                     // 0x0147(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_StatusIcon_C*          K2Node_DynamicCast_AsFang_Expedition_Status_Icon;  // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EBA[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EBB[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EBC[0x1];                                     // 0x0173(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EBD[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_StatusIcon_C*          K2Node_DynamicCast_AsFang_Expedition_Status_Icon_1; // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListItem_C_CheckPlayData) == 0x000008, "Wrong alignment on Fang_expedition_AreaListItem_C_CheckPlayData");
static_assert(sizeof(Fang_expedition_AreaListItem_C_CheckPlayData) == 0x000198, "Wrong size on Fang_expedition_AreaListItem_C_CheckPlayData");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, PlayDataList) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::PlayDataList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, IsField) == 0x000010, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::IsField' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, Category) == 0x000014, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::Category' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, WorkPlayData) == 0x000018, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::WorkPlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, PlayCount) == 0x000138, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::PlayCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, LoopEnd) == 0x00013C, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_Array_LastIndex_ReturnValue) == 0x000140, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, Temp_bool_Variable) == 0x000144, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_Not_PreBool_ReturnValue) == 0x000145, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000146, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_Add_IntInt_ReturnValue) == 0x000148, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_SelectInt_ReturnValue) == 0x00014C, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_GetChildAt_ReturnValue) == 0x000150, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, K2Node_DynamicCast_AsFang_Expedition_Status_Icon) == 0x000158, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::K2Node_DynamicCast_AsFang_Expedition_Status_Icon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, Temp_int_Variable) == 0x000164, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000168, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00016C, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000170, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_BooleanAND_ReturnValue) == 0x000171, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000172, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_SelectInt_ReturnValue_1) == 0x000174, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_Add_IntInt_ReturnValue_2) == 0x000178, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_GetChildAt_ReturnValue_1) == 0x000180, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, K2Node_DynamicCast_AsFang_Expedition_Status_Icon_1) == 0x000188, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::K2Node_DynamicCast_AsFang_Expedition_Status_Icon_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, K2Node_DynamicCast_bSuccess_1) == 0x000190, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckPlayData, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000191, "Member 'Fang_expedition_AreaListItem_C_CheckPlayData::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.GetData
// 0x00A8 (0x00A8 - 0x0000)
struct Fang_expedition_AreaListItem_C_GetData final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(Parm, OutParm)
};
static_assert(alignof(Fang_expedition_AreaListItem_C_GetData) == 0x000008, "Wrong alignment on Fang_expedition_AreaListItem_C_GetData");
static_assert(sizeof(Fang_expedition_AreaListItem_C_GetData) == 0x0000A8, "Wrong size on Fang_expedition_AreaListItem_C_GetData");
static_assert(offsetof(Fang_expedition_AreaListItem_C_GetData, AreaData) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_GetData::AreaData' has a wrong offset!");

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetFieldData
// 0x00E0 (0x00E0 - 0x0000)
struct Fang_expedition_AreaListItem_C_SetFieldData final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EBE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Field;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EBF[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EC0[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EC1[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EC2[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EC3[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetExpreditonPlayingStatus_PlayIconList;  // 0x0078(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetExpreditonPlayingStatus_IsNewMark;     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetExpreditonPlayingStatus_IsTimeIcon;    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EC4[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_StatusIcon_C*          K2Node_DynamicCast_AsFang_Expedition_Status_Icon;  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EC5[0x1];                                     // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetZoneShortNameByZoneId_ReturnValue;     // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
};
static_assert(alignof(Fang_expedition_AreaListItem_C_SetFieldData) == 0x000008, "Wrong alignment on Fang_expedition_AreaListItem_C_SetFieldData");
static_assert(sizeof(Fang_expedition_AreaListItem_C_SetFieldData) == 0x0000E0, "Wrong size on Fang_expedition_AreaListItem_C_SetFieldData");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, Param_Index) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, Field) == 0x000008, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::Field' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, LoopEnd) == 0x000018, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, Temp_byte_Variable) == 0x00001C, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, Temp_byte_Variable_1) == 0x00001D, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, Temp_bool_Variable) == 0x00001E, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, Temp_byte_Variable_2) == 0x00001F, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, Temp_byte_Variable_3) == 0x000020, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, Temp_bool_Variable_1) == 0x000021, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, Temp_int_Variable) == 0x000024, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000038, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_MakeVector2D_ReturnValue) == 0x000044, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000050, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, Temp_int_Variable_1) == 0x000058, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_GetChildAt_ReturnValue) == 0x000060, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_Add_IntInt_ReturnValue_2) == 0x00006C, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_GetChildAt_ReturnValue_1) == 0x000070, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_GetExpreditonPlayingStatus_PlayIconList) == 0x000078, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_GetExpreditonPlayingStatus_PlayIconList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_GetExpreditonPlayingStatus_IsNewMark) == 0x000088, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_GetExpreditonPlayingStatus_IsNewMark' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_GetExpreditonPlayingStatus_IsTimeIcon) == 0x000089, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_GetExpreditonPlayingStatus_IsTimeIcon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, K2Node_DynamicCast_AsFang_Expedition_Status_Icon) == 0x000090, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::K2Node_DynamicCast_AsFang_Expedition_Status_Icon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, K2Node_Select_Default) == 0x000099, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, K2Node_Select_Default_1) == 0x00009A, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_Array_LastIndex_ReturnValue) == 0x00009C, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_Concat_StrStr_ReturnValue) == 0x0000A0, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_Conv_StringToName_ReturnValue) == 0x0000B0, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_GetZoneShortNameByZoneId_ReturnValue) == 0x0000B8, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_GetZoneShortNameByZoneId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetFieldData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'Fang_expedition_AreaListItem_C_SetFieldData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.SetBtnSelected
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_AreaListItem_C_SetBtnSelected final
{
public:
	bool                                          BtnSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EC6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListItem_C_SetBtnSelected) == 0x000008, "Wrong alignment on Fang_expedition_AreaListItem_C_SetBtnSelected");
static_assert(sizeof(Fang_expedition_AreaListItem_C_SetBtnSelected) == 0x000020, "Wrong size on Fang_expedition_AreaListItem_C_SetBtnSelected");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetBtnSelected, BtnSelected) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_SetBtnSelected::BtnSelected' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetBtnSelected, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'Fang_expedition_AreaListItem_C_SetBtnSelected::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetBtnSelected, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'Fang_expedition_AreaListItem_C_SetBtnSelected::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_SetBtnSelected, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_AreaListItem_C_SetBtnSelected::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.CheckNewMark
// 0x0040 (0x0040 - 0x0000)
struct Fang_expedition_AreaListItem_C_CheckNewMark final
{
public:
	class FString                                 InParam;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          OutParam;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EC7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadedID_IsValid;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedID_ReturnValue;                   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListItem_C_CheckNewMark) == 0x000008, "Wrong alignment on Fang_expedition_AreaListItem_C_CheckNewMark");
static_assert(sizeof(Fang_expedition_AreaListItem_C_CheckNewMark) == 0x000040, "Wrong size on Fang_expedition_AreaListItem_C_CheckNewMark");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckNewMark, InParam) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_CheckNewMark::InParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckNewMark, OutParam) == 0x000010, "Member 'Fang_expedition_AreaListItem_C_CheckNewMark::OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckNewMark, CallFunc_GetCharacterId_ReturnValue) == 0x000018, "Member 'Fang_expedition_AreaListItem_C_CheckNewMark::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckNewMark, CallFunc_GetPlayerId_ReturnValue) == 0x000028, "Member 'Fang_expedition_AreaListItem_C_CheckNewMark::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckNewMark, CallFunc_IsReadedID_IsValid) == 0x000038, "Member 'Fang_expedition_AreaListItem_C_CheckNewMark::CallFunc_IsReadedID_IsValid' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckNewMark, CallFunc_IsReadedID_ReturnValue) == 0x000039, "Member 'Fang_expedition_AreaListItem_C_CheckNewMark::CallFunc_IsReadedID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_CheckNewMark, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'Fang_expedition_AreaListItem_C_CheckNewMark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ClearNewMark
// 0x0030 (0x0030 - 0x0000)
struct Fang_expedition_AreaListItem_C_ClearNewMark final
{
public:
	bool                                          CallFunc_CheckNewMark_OutParam;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EC8[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegistReadedID_bIsValid;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListItem_C_ClearNewMark) == 0x000008, "Wrong alignment on Fang_expedition_AreaListItem_C_ClearNewMark");
static_assert(sizeof(Fang_expedition_AreaListItem_C_ClearNewMark) == 0x000030, "Wrong size on Fang_expedition_AreaListItem_C_ClearNewMark");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ClearNewMark, CallFunc_CheckNewMark_OutParam) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_ClearNewMark::CallFunc_CheckNewMark_OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ClearNewMark, CallFunc_IsEmpty_ReturnValue) == 0x000001, "Member 'Fang_expedition_AreaListItem_C_ClearNewMark::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ClearNewMark, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'Fang_expedition_AreaListItem_C_ClearNewMark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ClearNewMark, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'Fang_expedition_AreaListItem_C_ClearNewMark::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ClearNewMark, CallFunc_GetPlayerId_ReturnValue) == 0x000018, "Member 'Fang_expedition_AreaListItem_C_ClearNewMark::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ClearNewMark, CallFunc_RegistReadedID_bIsValid) == 0x000028, "Member 'Fang_expedition_AreaListItem_C_ClearNewMark::CallFunc_RegistReadedID_bIsValid' has a wrong offset!");

// Function Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C.ShowNewMark
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_AreaListItem_C_ShowNewMark final
{
public:
	bool                                          InParam;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_AreaListItem_C_ShowNewMark) == 0x000001, "Wrong alignment on Fang_expedition_AreaListItem_C_ShowNewMark");
static_assert(sizeof(Fang_expedition_AreaListItem_C_ShowNewMark) == 0x000001, "Wrong size on Fang_expedition_AreaListItem_C_ShowNewMark");
static_assert(offsetof(Fang_expedition_AreaListItem_C_ShowNewMark, InParam) == 0x000000, "Member 'Fang_expedition_AreaListItem_C_ShowNewMark::InParam' has a wrong offset!");

}

