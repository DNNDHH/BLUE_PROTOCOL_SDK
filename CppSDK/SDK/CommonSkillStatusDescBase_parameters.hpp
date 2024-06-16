#pragma once

 

// Package: CommonSkillStatusDescBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.ExecuteUbergraph_CommonSkillStatusDescBase
// 0x0008 (0x0008 - 0x0000)
struct CommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase) == 0x000004, "Wrong alignment on CommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase");
static_assert(sizeof(CommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase) == 0x000008, "Wrong size on CommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase");
static_assert(offsetof(CommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase, EntryPoint) == 0x000000, "Member 'CommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonSkillStatusDescBase_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSkillStatusDescBase_C_PreConstruct) == 0x000001, "Wrong alignment on CommonSkillStatusDescBase_C_PreConstruct");
static_assert(sizeof(CommonSkillStatusDescBase_C_PreConstruct) == 0x000001, "Wrong size on CommonSkillStatusDescBase_C_PreConstruct");
static_assert(offsetof(CommonSkillStatusDescBase_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonSkillStatusDescBase_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetBaseSize
// 0x0080 (0x0080 - 0x0000)
struct CommonSkillStatusDescBase_C_SetBaseSize final
{
public:
	float                                         InWidth;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InHeight;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalHeight;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalWidth;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_841F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8420[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8421[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_1;                    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8422[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8423[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSkillStatusDescBase_C_SetBaseSize) == 0x000008, "Wrong alignment on CommonSkillStatusDescBase_C_SetBaseSize");
static_assert(sizeof(CommonSkillStatusDescBase_C_SetBaseSize) == 0x000080, "Wrong size on CommonSkillStatusDescBase_C_SetBaseSize");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, InWidth) == 0x000000, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::InWidth' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, InHeight) == 0x000004, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::InHeight' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, LocalHeight) == 0x000008, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::LocalHeight' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, LocalWidth) == 0x00000C, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::LocalWidth' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_GetSize_ReturnValue) == 0x000020, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_BreakVector2D_X) == 0x00002C, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_BreakVector2D_Y) == 0x000030, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_MakeVector2D_ReturnValue) == 0x000034, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_IsValid_ReturnValue_2) == 0x00003C, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000040, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_GetSize_ReturnValue_1) == 0x000048, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_GetSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_IsValid_ReturnValue_3) == 0x000050, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_BreakVector2D_X_1) == 0x000054, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_BreakVector2D_Y_1) == 0x000058, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_MakeVector2D_ReturnValue_1) == 0x00005C, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_MakeVector2D_ReturnValue_2) == 0x000064, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_IsValid_ReturnValue_4) == 0x00006C, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000070, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBaseSize, CallFunc_IsValid_ReturnValue_5) == 0x000078, "Member 'CommonSkillStatusDescBase_C_SetBaseSize::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SwitchBaseBgType
// 0x0014 (0x0014 - 0x0000)
struct CommonSkillStatusDescBase_C_SwitchBaseBgType final
{
public:
	bool                                          InIsNormalType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8424[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8425[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonSkillStatusDescBase_C_SwitchBaseBgType) == 0x000004, "Wrong alignment on CommonSkillStatusDescBase_C_SwitchBaseBgType");
static_assert(sizeof(CommonSkillStatusDescBase_C_SwitchBaseBgType) == 0x000014, "Wrong size on CommonSkillStatusDescBase_C_SwitchBaseBgType");
static_assert(offsetof(CommonSkillStatusDescBase_C_SwitchBaseBgType, InIsNormalType) == 0x000000, "Member 'CommonSkillStatusDescBase_C_SwitchBaseBgType::InIsNormalType' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SwitchBaseBgType, Temp_int_Variable) == 0x000004, "Member 'CommonSkillStatusDescBase_C_SwitchBaseBgType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SwitchBaseBgType, Temp_int_Variable_1) == 0x000008, "Member 'CommonSkillStatusDescBase_C_SwitchBaseBgType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SwitchBaseBgType, Temp_bool_Variable) == 0x00000C, "Member 'CommonSkillStatusDescBase_C_SwitchBaseBgType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SwitchBaseBgType, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'CommonSkillStatusDescBase_C_SwitchBaseBgType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SwitchBaseBgType, K2Node_Select_Default) == 0x000010, "Member 'CommonSkillStatusDescBase_C_SwitchBaseBgType::K2Node_Select_Default' has a wrong offset!");

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetBlank
// 0x0008 (0x0008 - 0x0000)
struct CommonSkillStatusDescBase_C_SetBlank final
{
public:
	bool                                          InIsBlank;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              LocalVisibility;                                   // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSkillStatusDescBase_C_SetBlank) == 0x000001, "Wrong alignment on CommonSkillStatusDescBase_C_SetBlank");
static_assert(sizeof(CommonSkillStatusDescBase_C_SetBlank) == 0x000008, "Wrong size on CommonSkillStatusDescBase_C_SetBlank");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBlank, InIsBlank) == 0x000000, "Member 'CommonSkillStatusDescBase_C_SetBlank::InIsBlank' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBlank, LocalVisibility) == 0x000001, "Member 'CommonSkillStatusDescBase_C_SetBlank::LocalVisibility' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBlank, Temp_byte_Variable) == 0x000002, "Member 'CommonSkillStatusDescBase_C_SetBlank::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBlank, Temp_byte_Variable_1) == 0x000003, "Member 'CommonSkillStatusDescBase_C_SetBlank::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBlank, Temp_bool_Variable) == 0x000004, "Member 'CommonSkillStatusDescBase_C_SetBlank::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBlank, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'CommonSkillStatusDescBase_C_SetBlank::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBlank, K2Node_Select_Default) == 0x000006, "Member 'CommonSkillStatusDescBase_C_SetBlank::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetBlank, CallFunc_IsValid_ReturnValue_1) == 0x000007, "Member 'CommonSkillStatusDescBase_C_SetBlank::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSKill
// 0x0100 (0x0100 - 0x0000)
struct CommonSkillStatusDescBase_C_SetSKill final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsAbilityTypeVisible;                         // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillAbilityType                           LocalAbilityType;                                  // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8426[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 LocalSkillData;                                    // 0x0010(0x0058)(Edit, BlueprintVisible)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8427[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillAbillityTypeText_ReturnValue;     // 0x0070(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8428[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue;       // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8429[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x00A8(0x0058)()
};
static_assert(alignof(CommonSkillStatusDescBase_C_SetSKill) == 0x000008, "Wrong alignment on CommonSkillStatusDescBase_C_SetSKill");
static_assert(sizeof(CommonSkillStatusDescBase_C_SetSKill) == 0x000100, "Wrong size on CommonSkillStatusDescBase_C_SetSKill");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, InSkillId) == 0x000000, "Member 'CommonSkillStatusDescBase_C_SetSKill::InSkillId' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, InSkillLevel) == 0x000004, "Member 'CommonSkillStatusDescBase_C_SetSKill::InSkillLevel' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, LocalIsAbilityTypeVisible) == 0x000008, "Member 'CommonSkillStatusDescBase_C_SetSKill::LocalIsAbilityTypeVisible' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, LocalAbilityType) == 0x000009, "Member 'CommonSkillStatusDescBase_C_SetSKill::LocalAbilityType' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, LocalSkillData) == 0x000010, "Member 'CommonSkillStatusDescBase_C_SetSKill::LocalSkillData' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, K2Node_SwitchEnum_CmpSuccess) == 0x000068, "Member 'CommonSkillStatusDescBase_C_SetSKill::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, CallFunc_GetSkillAbillityTypeText_ReturnValue) == 0x000070, "Member 'CommonSkillStatusDescBase_C_SetSKill::CallFunc_GetSkillAbillityTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'CommonSkillStatusDescBase_C_SetSKill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, K2Node_SwitchEnum_CmpSuccess_1) == 0x000089, "Member 'CommonSkillStatusDescBase_C_SetSKill::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, CallFunc_GetMasterSkillDataText_ReturnValue) == 0x000090, "Member 'CommonSkillStatusDescBase_C_SetSKill::CallFunc_GetMasterSkillDataText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, CallFunc_FindSkillDataMaster_bIsValid) == 0x0000A0, "Member 'CommonSkillStatusDescBase_C_SetSKill::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSKill, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x0000A8, "Member 'CommonSkillStatusDescBase_C_SetSKill::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillName
// 0x0030 (0x0030 - 0x0000)
struct CommonSkillStatusDescBase_C_SetSkillName final
{
public:
	class FString                                 InName;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSkillStatusDescBase_C_SetSkillName) == 0x000008, "Wrong alignment on CommonSkillStatusDescBase_C_SetSkillName");
static_assert(sizeof(CommonSkillStatusDescBase_C_SetSkillName) == 0x000030, "Wrong size on CommonSkillStatusDescBase_C_SetSkillName");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillName, InName) == 0x000000, "Member 'CommonSkillStatusDescBase_C_SetSkillName::InName' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'CommonSkillStatusDescBase_C_SetSkillName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillName, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'CommonSkillStatusDescBase_C_SetSkillName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillLevel
// 0x0060 (0x0060 - 0x0000)
struct CommonSkillStatusDescBase_C_SetSkillLevel final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_842A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillLevelText_ReturnValue;            // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_842B[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(CommonSkillStatusDescBase_C_SetSkillLevel) == 0x000008, "Wrong alignment on CommonSkillStatusDescBase_C_SetSkillLevel");
static_assert(sizeof(CommonSkillStatusDescBase_C_SetSkillLevel) == 0x000060, "Wrong size on CommonSkillStatusDescBase_C_SetSkillLevel");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillLevel, InLevel) == 0x000000, "Member 'CommonSkillStatusDescBase_C_SetSkillLevel::InLevel' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillLevel, CallFunc_GetSkillLevelText_ReturnValue) == 0x000008, "Member 'CommonSkillStatusDescBase_C_SetSkillLevel::CallFunc_GetSkillLevelText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillLevel, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'CommonSkillStatusDescBase_C_SetSkillLevel::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillLevel, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'CommonSkillStatusDescBase_C_SetSkillLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillLevel, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'CommonSkillStatusDescBase_C_SetSkillLevel::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillLevel, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'CommonSkillStatusDescBase_C_SetSkillLevel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillClassType
// 0x0002 (0x0002 - 0x0000)
struct CommonSkillStatusDescBase_C_SetSkillClassType final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonSkillStatusDescBase_C_SetSkillClassType) == 0x000001, "Wrong alignment on CommonSkillStatusDescBase_C_SetSkillClassType");
static_assert(sizeof(CommonSkillStatusDescBase_C_SetSkillClassType) == 0x000002, "Wrong size on CommonSkillStatusDescBase_C_SetSkillClassType");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillClassType, InClassType) == 0x000000, "Member 'CommonSkillStatusDescBase_C_SetSkillClassType::InClassType' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillClassType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CommonSkillStatusDescBase_C_SetSkillClassType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillAbilityTypeVisibility
// 0x0006 (0x0006 - 0x0000)
struct CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility) == 0x000001, "Wrong alignment on CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility");
static_assert(sizeof(CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility) == 0x000006, "Wrong size on CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility, InIsVisible) == 0x000000, "Member 'CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility, Temp_bool_Variable) == 0x000001, "Member 'CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility, Temp_byte_Variable) == 0x000002, "Member 'CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility, K2Node_Select_Default) == 0x000005, "Member 'CommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility::K2Node_Select_Default' has a wrong offset!");

}

