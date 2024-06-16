#pragma once

 

// Package: Effect_Container

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Effect_Container.Effect_Container_C.ExecuteUbergraph_Effect_Container
// 0x000C (0x000C - 0x0000)
struct Effect_Container_C_ExecuteUbergraph_Effect_Container final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsOpen;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Container_C_ExecuteUbergraph_Effect_Container) == 0x000004, "Wrong alignment on Effect_Container_C_ExecuteUbergraph_Effect_Container");
static_assert(sizeof(Effect_Container_C_ExecuteUbergraph_Effect_Container) == 0x00000C, "Wrong size on Effect_Container_C_ExecuteUbergraph_Effect_Container");
static_assert(offsetof(Effect_Container_C_ExecuteUbergraph_Effect_Container, EntryPoint) == 0x000000, "Member 'Effect_Container_C_ExecuteUbergraph_Effect_Container::EntryPoint' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_ExecuteUbergraph_Effect_Container, K2Node_ComponentBoundEvent_IsOpen) == 0x000004, "Member 'Effect_Container_C_ExecuteUbergraph_Effect_Container::K2Node_ComponentBoundEvent_IsOpen' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_ExecuteUbergraph_Effect_Container, Temp_bool_Variable) == 0x000005, "Member 'Effect_Container_C_ExecuteUbergraph_Effect_Container::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_ExecuteUbergraph_Effect_Container, Temp_byte_Variable) == 0x000006, "Member 'Effect_Container_C_ExecuteUbergraph_Effect_Container::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_ExecuteUbergraph_Effect_Container, Temp_byte_Variable_1) == 0x000007, "Member 'Effect_Container_C_ExecuteUbergraph_Effect_Container::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_ExecuteUbergraph_Effect_Container, K2Node_Select_Default) == 0x000008, "Member 'Effect_Container_C_ExecuteUbergraph_Effect_Container::K2Node_Select_Default' has a wrong offset!");

// Function Effect_Container.Effect_Container_C.BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Effect_Container_C_BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature final
{
public:
	bool                                          IsOpen;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_Container_C_BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature) == 0x000001, "Wrong alignment on Effect_Container_C_BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature");
static_assert(sizeof(Effect_Container_C_BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature) == 0x000001, "Wrong size on Effect_Container_C_BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature");
static_assert(offsetof(Effect_Container_C_BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature, IsOpen) == 0x000000, "Member 'Effect_Container_C_BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature::IsOpen' has a wrong offset!");

// Function Effect_Container.Effect_Container_C.SetEffectList
// 0x0060 (0x0060 - 0x0000)
struct Effect_Container_C_SetEffectList final
{
public:
	class FName                                   MapId;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPioneerAbilityList                    PioneerAbilityList;                                // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class USBWarehouseAbilityComponent*           WarehouseAbilityComponent;                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowTooltip;                                     // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsShowValue;                                       // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AAC[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AAD[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWarehouseAbilityListUIInfo          CallFunc_Array_Get_Item;                           // 0x0038(0x0028)()
};
static_assert(alignof(Effect_Container_C_SetEffectList) == 0x000008, "Wrong alignment on Effect_Container_C_SetEffectList");
static_assert(sizeof(Effect_Container_C_SetEffectList) == 0x000060, "Wrong size on Effect_Container_C_SetEffectList");
static_assert(offsetof(Effect_Container_C_SetEffectList, MapId) == 0x000000, "Member 'Effect_Container_C_SetEffectList::MapId' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetEffectList, PioneerAbilityList) == 0x000008, "Member 'Effect_Container_C_SetEffectList::PioneerAbilityList' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetEffectList, WarehouseAbilityComponent) == 0x000018, "Member 'Effect_Container_C_SetEffectList::WarehouseAbilityComponent' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetEffectList, IsShowTooltip) == 0x000020, "Member 'Effect_Container_C_SetEffectList::IsShowTooltip' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetEffectList, IsShowValue) == 0x000021, "Member 'Effect_Container_C_SetEffectList::IsShowValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetEffectList, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'Effect_Container_C_SetEffectList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetEffectList, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'Effect_Container_C_SetEffectList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetEffectList, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'Effect_Container_C_SetEffectList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetEffectList, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'Effect_Container_C_SetEffectList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetEffectList, Temp_int_Array_Index_Variable) == 0x000034, "Member 'Effect_Container_C_SetEffectList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetEffectList, CallFunc_Array_Get_Item) == 0x000038, "Member 'Effect_Container_C_SetEffectList::CallFunc_Array_Get_Item' has a wrong offset!");

// Function Effect_Container.Effect_Container_C.CreateEffectActiveWidget
// 0x0080 (0x0080 - 0x0000)
struct Effect_Container_C_CreateEffectActiveWidget final
{
public:
	struct FSBWarehouseAbilityListUIInfo          SBWarehouseAbilityListUIInfo;                      // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class USBWarehouseAbilityComponent*           WarehouseAbilityComponent;                         // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowTooltip;                                     // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsShowValue;                                       // 0x0031(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AAE[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UEffect_Active_C*                       CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetToolTipText_ReturnValue;               // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValue_ReturnValue;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AAF[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_Container_C_CreateEffectActiveWidget) == 0x000008, "Wrong alignment on Effect_Container_C_CreateEffectActiveWidget");
static_assert(sizeof(Effect_Container_C_CreateEffectActiveWidget) == 0x000080, "Wrong size on Effect_Container_C_CreateEffectActiveWidget");
static_assert(offsetof(Effect_Container_C_CreateEffectActiveWidget, SBWarehouseAbilityListUIInfo) == 0x000000, "Member 'Effect_Container_C_CreateEffectActiveWidget::SBWarehouseAbilityListUIInfo' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_CreateEffectActiveWidget, WarehouseAbilityComponent) == 0x000028, "Member 'Effect_Container_C_CreateEffectActiveWidget::WarehouseAbilityComponent' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_CreateEffectActiveWidget, IsShowTooltip) == 0x000030, "Member 'Effect_Container_C_CreateEffectActiveWidget::IsShowTooltip' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_CreateEffectActiveWidget, IsShowValue) == 0x000031, "Member 'Effect_Container_C_CreateEffectActiveWidget::IsShowValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_CreateEffectActiveWidget, CallFunc_Create_ReturnValue) == 0x000038, "Member 'Effect_Container_C_CreateEffectActiveWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_CreateEffectActiveWidget, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'Effect_Container_C_CreateEffectActiveWidget::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_CreateEffectActiveWidget, CallFunc_GetToolTipText_ReturnValue) == 0x000050, "Member 'Effect_Container_C_CreateEffectActiveWidget::CallFunc_GetToolTipText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_CreateEffectActiveWidget, CallFunc_GetValue_ReturnValue) == 0x000060, "Member 'Effect_Container_C_CreateEffectActiveWidget::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_CreateEffectActiveWidget, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000068, "Member 'Effect_Container_C_CreateEffectActiveWidget::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_CreateEffectActiveWidget, K2Node_MakeStruct_Margin) == 0x000070, "Member 'Effect_Container_C_CreateEffectActiveWidget::K2Node_MakeStruct_Margin' has a wrong offset!");

// Function Effect_Container.Effect_Container_C.SetTitle
// 0x000C (0x000C - 0x0000)
struct Effect_Container_C_SetTitle final
{
public:
	class FName                                   InTextID;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_Container_C_SetTitle) == 0x000004, "Wrong alignment on Effect_Container_C_SetTitle");
static_assert(sizeof(Effect_Container_C_SetTitle) == 0x00000C, "Wrong size on Effect_Container_C_SetTitle");
static_assert(offsetof(Effect_Container_C_SetTitle, InTextID) == 0x000000, "Member 'Effect_Container_C_SetTitle::InTextID' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_SetTitle, CallFunc_NotEqual_NameName_ReturnValue) == 0x000008, "Member 'Effect_Container_C_SetTitle::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function Effect_Container.Effect_Container_C.GetValue
// 0x00F0 (0x00F0 - 0x0000)
struct Effect_Container_C_GetValue final
{
public:
	int32                                         RecepiId;                                          // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AB0[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AB1[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AB2[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AB3[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterResearchTeam_BuffByRecipeId_bExists; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AB4[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBResearchTeamMasterData_Buff         CallFunc_BP_FindMasterResearchTeam_BuffByRecipeId_ReturnValue; // 0x0038(0x0020)(ConstParm)
	bool                                          CallFunc_BP_FindMasterWarehouseAbilityStoringByRecepiId_bExists; // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AB5[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWarehouseAbilityStoringMasterData   CallFunc_BP_FindMasterWarehouseAbilityStoringByRecepiId_ReturnValue; // 0x005C(0x0020)(ConstParm, NoDestructor)
	int32                                         K2Node_Select_Default;                             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterWarehouseAbilityCollectionByRecepiId_bExists; // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AB6[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWarehouseAbilityCollectionMasterData CallFunc_BP_FindMasterWarehouseAbilityCollectionByRecepiId_ReturnValue; // 0x0088(0x003C)(ConstParm, NoDestructor)
	int32                                         K2Node_Select_Default_2;                           // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Container_C_GetValue) == 0x000008, "Wrong alignment on Effect_Container_C_GetValue");
static_assert(sizeof(Effect_Container_C_GetValue) == 0x0000F0, "Wrong size on Effect_Container_C_GetValue");
static_assert(offsetof(Effect_Container_C_GetValue, RecepiId) == 0x000000, "Member 'Effect_Container_C_GetValue::RecepiId' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, ReturnValue) == 0x000004, "Member 'Effect_Container_C_GetValue::ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, Temp_bool_Variable) == 0x000008, "Member 'Effect_Container_C_GetValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, Temp_int_Variable) == 0x00000C, "Member 'Effect_Container_C_GetValue::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, Temp_bool_Variable_1) == 0x000010, "Member 'Effect_Container_C_GetValue::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, Temp_int_Variable_1) == 0x000014, "Member 'Effect_Container_C_GetValue::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, Temp_bool_Variable_2) == 0x000018, "Member 'Effect_Container_C_GetValue::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, Temp_int_Variable_2) == 0x00001C, "Member 'Effect_Container_C_GetValue::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'Effect_Container_C_GetValue::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'Effect_Container_C_GetValue::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_BP_FindMasterResearchTeam_BuffByRecipeId_bExists) == 0x000030, "Member 'Effect_Container_C_GetValue::CallFunc_BP_FindMasterResearchTeam_BuffByRecipeId_bExists' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_BP_FindMasterResearchTeam_BuffByRecipeId_ReturnValue) == 0x000038, "Member 'Effect_Container_C_GetValue::CallFunc_BP_FindMasterResearchTeam_BuffByRecipeId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_BP_FindMasterWarehouseAbilityStoringByRecepiId_bExists) == 0x000058, "Member 'Effect_Container_C_GetValue::CallFunc_BP_FindMasterWarehouseAbilityStoringByRecepiId_bExists' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_BP_FindMasterWarehouseAbilityStoringByRecepiId_ReturnValue) == 0x00005C, "Member 'Effect_Container_C_GetValue::CallFunc_BP_FindMasterWarehouseAbilityStoringByRecepiId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, K2Node_Select_Default) == 0x00007C, "Member 'Effect_Container_C_GetValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, K2Node_Select_Default_1) == 0x000080, "Member 'Effect_Container_C_GetValue::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_BP_FindMasterWarehouseAbilityCollectionByRecepiId_bExists) == 0x000084, "Member 'Effect_Container_C_GetValue::CallFunc_BP_FindMasterWarehouseAbilityCollectionByRecepiId_bExists' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_BP_FindMasterWarehouseAbilityCollectionByRecepiId_ReturnValue) == 0x000088, "Member 'Effect_Container_C_GetValue::CallFunc_BP_FindMasterWarehouseAbilityCollectionByRecepiId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, K2Node_Select_Default_2) == 0x0000C4, "Member 'Effect_Container_C_GetValue::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'Effect_Container_C_GetValue::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_FTrunc_ReturnValue) == 0x0000CC, "Member 'Effect_Container_C_GetValue::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_FTrunc_ReturnValue_1) == 0x0000D0, "Member 'Effect_Container_C_GetValue::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D4, "Member 'Effect_Container_C_GetValue::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000D8, "Member 'Effect_Container_C_GetValue::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000DC, "Member 'Effect_Container_C_GetValue::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000E0, "Member 'Effect_Container_C_GetValue::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_Add_IntInt_ReturnValue_5) == 0x0000E4, "Member 'Effect_Container_C_GetValue::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetValue, CallFunc_Add_IntInt_ReturnValue_6) == 0x0000E8, "Member 'Effect_Container_C_GetValue::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");

// Function Effect_Container.Effect_Container_C.GetTooltipText
// 0x0080 (0x0080 - 0x0000)
struct Effect_Container_C_GetTooltipText final
{
public:
	class USBWarehouseAbilityComponent*           WarehouseAbilityComponent;                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ID;                                                // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AB7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AB8[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterWarehouseAbilityRecipe_bExists; // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AB9[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWarehouseAbilityRecipeMasterData    CallFunc_BP_FindMasterWarehouseAbilityRecipe_ReturnValue; // 0x0034(0x0020)(ConstParm, NoDestructor)
	uint8                                         Pad_8ABA[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetAbilityEffectTextByRecipeId_ReturnValue; // 0x0058(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_Container_C_GetTooltipText) == 0x000008, "Wrong alignment on Effect_Container_C_GetTooltipText");
static_assert(sizeof(Effect_Container_C_GetTooltipText) == 0x000080, "Wrong size on Effect_Container_C_GetTooltipText");
static_assert(offsetof(Effect_Container_C_GetTooltipText, WarehouseAbilityComponent) == 0x000000, "Member 'Effect_Container_C_GetTooltipText::WarehouseAbilityComponent' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetTooltipText, ID) == 0x000008, "Member 'Effect_Container_C_GetTooltipText::ID' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetTooltipText, ReturnValue) == 0x000010, "Member 'Effect_Container_C_GetTooltipText::ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetTooltipText, CallFunc_GetMasterDataManager_IsValid) == 0x000020, "Member 'Effect_Container_C_GetTooltipText::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetTooltipText, CallFunc_GetMasterDataManager_ReturnValue) == 0x000028, "Member 'Effect_Container_C_GetTooltipText::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetTooltipText, CallFunc_BP_FindMasterWarehouseAbilityRecipe_bExists) == 0x000030, "Member 'Effect_Container_C_GetTooltipText::CallFunc_BP_FindMasterWarehouseAbilityRecipe_bExists' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetTooltipText, CallFunc_BP_FindMasterWarehouseAbilityRecipe_ReturnValue) == 0x000034, "Member 'Effect_Container_C_GetTooltipText::CallFunc_BP_FindMasterWarehouseAbilityRecipe_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetTooltipText, CallFunc_GetAbilityEffectTextByRecipeId_ReturnValue) == 0x000058, "Member 'Effect_Container_C_GetTooltipText::CallFunc_GetAbilityEffectTextByRecipeId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_Container_C_GetTooltipText, CallFunc_Conv_TextToString_ReturnValue) == 0x000070, "Member 'Effect_Container_C_GetTooltipText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

