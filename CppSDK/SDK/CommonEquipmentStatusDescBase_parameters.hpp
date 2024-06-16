#pragma once

 

// Package: CommonEquipmentStatusDescBase

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.ExecuteUbergraph_CommonEquipmentStatusDescBase
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase) == 0x000004, "Wrong alignment on CommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase) == 0x000008, "Wrong size on CommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase, EntryPoint) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonEquipmentStatusDescBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_PreConstruct) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescBase_C_PreConstruct");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_PreConstruct) == 0x000001, "Wrong size on CommonEquipmentStatusDescBase_C_PreConstruct");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBaseSize
// 0x0078 (0x0078 - 0x0000)
struct CommonEquipmentStatusDescBase_C_SetBaseSize final
{
public:
	float                                         InWidth;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InHeight;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalHeight;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalWidth;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8103[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8104[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_1;                    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8105[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8106[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_SetBaseSize) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescBase_C_SetBaseSize");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_SetBaseSize) == 0x000078, "Wrong size on CommonEquipmentStatusDescBase_C_SetBaseSize");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, InWidth) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::InWidth' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, InHeight) == 0x000004, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::InHeight' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, LocalHeight) == 0x000008, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::LocalHeight' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, LocalWidth) == 0x00000C, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::LocalWidth' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_GetSize_ReturnValue) == 0x000018, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_BreakVector2D_X) == 0x000024, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_BreakVector2D_Y) == 0x000028, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_MakeVector2D_ReturnValue) == 0x00002C, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000038, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_GetSize_ReturnValue_1) == 0x000040, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_GetSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_BreakVector2D_X_1) == 0x00004C, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_BreakVector2D_Y_1) == 0x000050, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_MakeVector2D_ReturnValue_1) == 0x000054, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_MakeVector2D_ReturnValue_2) == 0x00005C, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_IsValid_ReturnValue_2) == 0x000064, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000068, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBaseSize, CallFunc_IsValid_ReturnValue_3) == 0x000070, "Member 'CommonEquipmentStatusDescBase_C_SetBaseSize::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SwitchBaseBgType
// 0x0014 (0x0014 - 0x0000)
struct CommonEquipmentStatusDescBase_C_SwitchBaseBgType final
{
public:
	bool                                          InIsNormalType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8107[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8108[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_SwitchBaseBgType) == 0x000004, "Wrong alignment on CommonEquipmentStatusDescBase_C_SwitchBaseBgType");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_SwitchBaseBgType) == 0x000014, "Wrong size on CommonEquipmentStatusDescBase_C_SwitchBaseBgType");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SwitchBaseBgType, InIsNormalType) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_SwitchBaseBgType::InIsNormalType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SwitchBaseBgType, Temp_int_Variable) == 0x000004, "Member 'CommonEquipmentStatusDescBase_C_SwitchBaseBgType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SwitchBaseBgType, Temp_int_Variable_1) == 0x000008, "Member 'CommonEquipmentStatusDescBase_C_SwitchBaseBgType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SwitchBaseBgType, Temp_bool_Variable) == 0x00000C, "Member 'CommonEquipmentStatusDescBase_C_SwitchBaseBgType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SwitchBaseBgType, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'CommonEquipmentStatusDescBase_C_SwitchBaseBgType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SwitchBaseBgType, K2Node_Select_Default) == 0x000010, "Member 'CommonEquipmentStatusDescBase_C_SwitchBaseBgType::K2Node_Select_Default' has a wrong offset!");

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetEquipmentName
// 0x0030 (0x0030 - 0x0000)
struct CommonEquipmentStatusDescBase_C_SetEquipmentName final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_SetEquipmentName) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescBase_C_SetEquipmentName");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_SetEquipmentName) == 0x000030, "Wrong size on CommonEquipmentStatusDescBase_C_SetEquipmentName");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetEquipmentName, InName) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_SetEquipmentName::InName' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetEquipmentName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'CommonEquipmentStatusDescBase_C_SetEquipmentName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetEquipmentName, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'CommonEquipmentStatusDescBase_C_SetEquipmentName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBlank
// 0x0005 (0x0005 - 0x0000)
struct CommonEquipmentStatusDescBase_C_SetBlank final
{
public:
	bool                                          InIsBlank;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_SetBlank) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescBase_C_SetBlank");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_SetBlank) == 0x000005, "Wrong size on CommonEquipmentStatusDescBase_C_SetBlank");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBlank, InIsBlank) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_SetBlank::InIsBlank' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBlank, Temp_byte_Variable) == 0x000001, "Member 'CommonEquipmentStatusDescBase_C_SetBlank::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBlank, Temp_byte_Variable_1) == 0x000002, "Member 'CommonEquipmentStatusDescBase_C_SetBlank::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBlank, Temp_bool_Variable) == 0x000003, "Member 'CommonEquipmentStatusDescBase_C_SetBlank::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetBlank, K2Node_Select_Default) == 0x000004, "Member 'CommonEquipmentStatusDescBase_C_SetBlank::K2Node_Select_Default' has a wrong offset!");

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionVisibility
// 0x0006 (0x0006 - 0x0000)
struct CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility) == 0x000006, "Wrong size on CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility, InIsVisible) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility, Temp_byte_Variable) == 0x000001, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility, Temp_bool_Variable) == 0x000003, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility, K2Node_Select_Default) == 0x000005, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility::K2Node_Select_Default' has a wrong offset!");

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionByMasterData
// 0x0158 (0x0158 - 0x0000)
struct CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData final
{
public:
	struct FSBMasterImagine                       InImagineMasterData;                               // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          LocalIsEquipPosition5;                             // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEquipPosition4;                             // 0x00B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEquipPosition3;                             // 0x00B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEquipPosition2;                             // 0x00B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsEquipPosition1;                             // 0x00B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8109[0x2];                                     // 0x00B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_810A[0x2];                                     // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_810B[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_810C[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_810D[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_810E[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_810F[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_7;                               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8110[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_8;                               // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8111[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_4;                           // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_5;                           // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_6;                           // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_7;                           // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_8;                           // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0138(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData) == 0x000158, "Wrong size on CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, InImagineMasterData) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::InImagineMasterData' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, LocalIsEquipPosition5) == 0x0000B0, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::LocalIsEquipPosition5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, LocalIsEquipPosition4) == 0x0000B1, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::LocalIsEquipPosition4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, LocalIsEquipPosition3) == 0x0000B2, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::LocalIsEquipPosition3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, LocalIsEquipPosition2) == 0x0000B3, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::LocalIsEquipPosition2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, LocalIsEquipPosition1) == 0x0000B4, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::LocalIsEquipPosition1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_bool_Variable) == 0x0000B5, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable) == 0x0000B8, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000BC, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_bool_Variable_1) == 0x0000BD, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable_1) == 0x0000C0, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_bool_Variable_2) == 0x0000C4, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable_2) == 0x0000C8, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_bool_Variable_3) == 0x0000CC, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable_3) == 0x0000D0, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_bool_Variable_4) == 0x0000D4, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable_4) == 0x0000D8, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_bool_Variable_5) == 0x0000DC, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable_5) == 0x0000E0, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable_6) == 0x0000E4, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_bool_Variable_6) == 0x0000E8, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable_7) == 0x0000EC, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_bool_Variable_7) == 0x0000F0, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable_8) == 0x0000F4, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable_9) == 0x0000F8, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_int_Variable_10) == 0x0000FC, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, Temp_bool_Variable_8) == 0x000100, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, K2Node_Select_Default) == 0x000104, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, K2Node_Select_Default_1) == 0x000108, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, K2Node_Select_Default_2) == 0x00010C, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, K2Node_Select_Default_3) == 0x000110, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, K2Node_Select_Default_4) == 0x000114, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, K2Node_Select_Default_5) == 0x000118, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, K2Node_Select_Default_6) == 0x00011C, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, K2Node_Select_Default_7) == 0x000120, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, K2Node_Select_Default_8) == 0x000124, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000128, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, CallFunc_Conv_StringToText_ReturnValue) == 0x000138, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData, CallFunc_IsValid_ReturnValue) == 0x000150, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionByCharaEquipType
// 0x0058 (0x0058 - 0x0000)
struct CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType final
{
public:
	ESBCharaEquipType                             InCharaEquipType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8112[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalID;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8113[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType) == 0x000058, "Wrong size on CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, InCharaEquipType) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::InCharaEquipType' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, LocalID) == 0x000004, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::LocalID' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, Temp_int_Variable) == 0x000008, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, K2Node_SwitchEnum_CmpSuccess) == 0x00000C, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, Temp_int_Variable_1) == 0x000010, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, Temp_int_Variable_2) == 0x000014, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, Temp_int_Variable_3) == 0x000018, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, Temp_int_Variable_4) == 0x00001C, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, Temp_int_Variable_5) == 0x000020, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, K2Node_Select_Default) == 0x000024, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetStackBIcon
// 0x0120 (0x0120 - 0x0000)
struct CommonEquipmentStatusDescBase_C_SetStackBIcon final
{
public:
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          InIsEffectiveDisplay;                              // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_SetStackBIcon) == 0x000008, "Wrong alignment on CommonEquipmentStatusDescBase_C_SetStackBIcon");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_SetStackBIcon) == 0x000120, "Wrong size on CommonEquipmentStatusDescBase_C_SetStackBIcon");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetStackBIcon, ItemInfo) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_SetStackBIcon::ItemInfo' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetStackBIcon, InIsEffectiveDisplay) == 0x000118, "Member 'CommonEquipmentStatusDescBase_C_SetStackBIcon::InIsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetStackBIcon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000119, "Member 'CommonEquipmentStatusDescBase_C_SetStackBIcon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetStackBIcon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00011A, "Member 'CommonEquipmentStatusDescBase_C_SetStackBIcon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetStackBIcon, Temp_bool_Variable) == 0x00011B, "Member 'CommonEquipmentStatusDescBase_C_SetStackBIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetStackBIcon, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x00011C, "Member 'CommonEquipmentStatusDescBase_C_SetStackBIcon::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_SetStackBIcon, K2Node_Select_Default) == 0x00011D, "Member 'CommonEquipmentStatusDescBase_C_SetStackBIcon::K2Node_Select_Default' has a wrong offset!");

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.ResetStackBIcon
// 0x0001 (0x0001 - 0x0000)
struct CommonEquipmentStatusDescBase_C_ResetStackBIcon final
{
public:
	bool                                          InIsEffectiveDisplay;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentStatusDescBase_C_ResetStackBIcon) == 0x000001, "Wrong alignment on CommonEquipmentStatusDescBase_C_ResetStackBIcon");
static_assert(sizeof(CommonEquipmentStatusDescBase_C_ResetStackBIcon) == 0x000001, "Wrong size on CommonEquipmentStatusDescBase_C_ResetStackBIcon");
static_assert(offsetof(CommonEquipmentStatusDescBase_C_ResetStackBIcon, InIsEffectiveDisplay) == 0x000000, "Member 'CommonEquipmentStatusDescBase_C_ResetStackBIcon::InIsEffectiveDisplay' has a wrong offset!");

}

