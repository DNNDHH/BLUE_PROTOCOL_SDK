#pragma once

 

// Package: WeaponSynthePart_TokenBox

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.ExecuteUbergraph_WeaponSynthePart_TokenBox
// 0x0030 (0x0030 - 0x0000)
struct WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CD0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_CustomEvent_Target;                         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isChecked;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CD1[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_CustomEvent_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsChecked, class UWeaponSynthePart_TokenBoxItem_C* This)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox) == 0x000030, "Wrong size on WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox, K2Node_CustomEvent_Target) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox, K2Node_CustomEvent_isChecked) == 0x000010, "Member 'WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox::K2Node_CustomEvent_isChecked' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox, K2Node_CustomEvent_Item) == 0x000018, "Member 'WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'WeaponSynthePart_TokenBox_C_ExecuteUbergraph_WeaponSynthePart_TokenBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.OnSelectToken
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthePart_TokenBox_C_OnSelectToken final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CD2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       Item;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_OnSelectToken) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_OnSelectToken");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_OnSelectToken) == 0x000010, "Wrong size on WeaponSynthePart_TokenBox_C_OnSelectToken");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelectToken, IsChecked) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_OnSelectToken::IsChecked' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelectToken, Item) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_OnSelectToken::Item' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.BindOnSelected
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_TokenBox_C_BindOnSelected final
{
public:
	class UWeaponSynthePart_TokenBoxItem_C*       Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_BindOnSelected) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_BindOnSelected");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_BindOnSelected) == 0x000008, "Wrong size on WeaponSynthePart_TokenBox_C_BindOnSelected");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_BindOnSelected, Target) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_BindOnSelected::Target' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.Clear
// 0x0040 (0x0040 - 0x0000)
struct WeaponSynthePart_TokenBox_C_Clear final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CD3[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CD4[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_Clear) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_Clear");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_Clear) == 0x000040, "Wrong size on WeaponSynthePart_TokenBox_C_Clear");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Clear, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_Clear::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Clear, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WeaponSynthePart_TokenBox_C_Clear::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Clear, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_Clear::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Clear, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_TokenBox_C_Clear::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Clear, CallFunc_Array_Get_Item) == 0x000020, "Member 'WeaponSynthePart_TokenBox_C_Clear::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Clear, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_TokenBox_C_Clear::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Clear, K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item) == 0x000030, "Member 'WeaponSynthePart_TokenBox_C_Clear::K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Clear, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WeaponSynthePart_TokenBox_C_Clear::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Clear, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'WeaponSynthePart_TokenBox_C_Clear::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.AddItem
// 0x0038 (0x0038 - 0x0000)
struct WeaponSynthePart_TokenBox_C_AddItem final
{
public:
	bool                                          bSelectable;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CD5[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFusionTicketMasterData              SBFusionTicketMasterData;                          // 0x0004(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int32                                         Num;                                               // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       Widget;                                            // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_AddItem) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_AddItem");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_AddItem) == 0x000038, "Wrong size on WeaponSynthePart_TokenBox_C_AddItem");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_AddItem, bSelectable) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_AddItem::bSelectable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_AddItem, SBFusionTicketMasterData) == 0x000004, "Member 'WeaponSynthePart_TokenBox_C_AddItem::SBFusionTicketMasterData' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_AddItem, Num) == 0x000014, "Member 'WeaponSynthePart_TokenBox_C_AddItem::Num' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_AddItem, ReturnValue) == 0x000018, "Member 'WeaponSynthePart_TokenBox_C_AddItem::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_AddItem, Widget) == 0x000020, "Member 'WeaponSynthePart_TokenBox_C_AddItem::Widget' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_AddItem, CallFunc_Create_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_TokenBox_C_AddItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_AddItem, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'WeaponSynthePart_TokenBox_C_AddItem::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.GenerateToken
// 0x0040 (0x0040 - 0x0000)
struct WeaponSynthePart_TokenBox_C_GenerateToken final
{
public:
	ESBFusionTicketType                           Type;                                              // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CD6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeaponLv;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelectable;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CD7[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Num;                                               // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       TokenBoxItem;                                      // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerWeaponEnhancementComponent*    CallFunc_GetWeaponEnhancementComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFusionTicketMasterData              CallFunc_GetTickets_ReturnValue;                   // 0x0028(0x0010)(NoDestructor)
	class UWeaponSynthePart_TokenBoxItem_C*       CallFunc_AddItem_ReturnValue;                      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_GenerateToken) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_GenerateToken");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_GenerateToken) == 0x000040, "Wrong size on WeaponSynthePart_TokenBox_C_GenerateToken");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GenerateToken, Type) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_GenerateToken::Type' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GenerateToken, WeaponLv) == 0x000004, "Member 'WeaponSynthePart_TokenBox_C_GenerateToken::WeaponLv' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GenerateToken, bSelectable) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_GenerateToken::bSelectable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GenerateToken, Num) == 0x00000C, "Member 'WeaponSynthePart_TokenBox_C_GenerateToken::Num' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GenerateToken, TokenBoxItem) == 0x000010, "Member 'WeaponSynthePart_TokenBox_C_GenerateToken::TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GenerateToken, CallFunc_GetSBPlayerController_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_TokenBox_C_GenerateToken::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GenerateToken, CallFunc_GetWeaponEnhancementComponent_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_TokenBox_C_GenerateToken::CallFunc_GetWeaponEnhancementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GenerateToken, CallFunc_GetTickets_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_TokenBox_C_GenerateToken::CallFunc_GetTickets_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GenerateToken, CallFunc_AddItem_ReturnValue) == 0x000038, "Member 'WeaponSynthePart_TokenBox_C_GenerateToken::CallFunc_AddItem_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.SetEnable
// 0x0020 (0x0020 - 0x0000)
struct WeaponSynthePart_TokenBox_C_SetEnable final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInIsEnabled;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CD8[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_SetEnable) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_SetEnable");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_SetEnable) == 0x000020, "Wrong size on WeaponSynthePart_TokenBox_C_SetEnable");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetEnable, Param_Index) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_SetEnable::Param_Index' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetEnable, bInIsEnabled) == 0x000004, "Member 'WeaponSynthePart_TokenBox_C_SetEnable::bInIsEnabled' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetEnable, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_SetEnable::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetEnable, K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item) == 0x000010, "Member 'WeaponSynthePart_TokenBox_C_SetEnable::K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetEnable, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WeaponSynthePart_TokenBox_C_SetEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.SetVisibleAlert
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_TokenBox_C_SetVisibleAlert final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_SetVisibleAlert) == 0x000001, "Wrong alignment on WeaponSynthePart_TokenBox_C_SetVisibleAlert");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_SetVisibleAlert) == 0x000005, "Wrong size on WeaponSynthePart_TokenBox_C_SetVisibleAlert");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetVisibleAlert, Param_IsVisible) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_SetVisibleAlert::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetVisibleAlert, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_TokenBox_C_SetVisibleAlert::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetVisibleAlert, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_TokenBox_C_SetVisibleAlert::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetVisibleAlert, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_TokenBox_C_SetVisibleAlert::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetVisibleAlert, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_TokenBox_C_SetVisibleAlert::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.SetAlertText
// 0x0018 (0x0018 - 0x0000)
struct WeaponSynthePart_TokenBox_C_SetAlertText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_SetAlertText) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_SetAlertText");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_SetAlertText) == 0x000018, "Wrong size on WeaponSynthePart_TokenBox_C_SetAlertText");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetAlertText, InText) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_SetAlertText::InText' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.SetAlertTextID
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthePart_TokenBox_C_SetAlertTextID final
{
public:
	class USBTextTableAsset*                      InTextTable;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_SetAlertTextID) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_SetAlertTextID");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_SetAlertTextID) == 0x000010, "Wrong size on WeaponSynthePart_TokenBox_C_SetAlertTextID");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetAlertTextID, InTextTable) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_SetAlertTextID::InTextTable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_SetAlertTextID, InTextID) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_SetAlertTextID::InTextID' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.Select
// 0x0058 (0x0058 - 0x0000)
struct WeaponSynthePart_TokenBox_C_Select final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsChecked;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CD9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CDA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CDB[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CDC[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item_1; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CDD[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_Select) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_Select");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_Select) == 0x000058, "Wrong size on WeaponSynthePart_TokenBox_C_Select");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, Param_Index) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_Select::Param_Index' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, IsChecked) == 0x000004, "Member 'WeaponSynthePart_TokenBox_C_Select::IsChecked' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, Temp_int_Variable) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_Select::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, CallFunc_GetChildrenCount_ReturnValue) == 0x00000C, "Member 'WeaponSynthePart_TokenBox_C_Select::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_TokenBox_C_Select::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, CallFunc_Less_IntInt_ReturnValue) == 0x000014, "Member 'WeaponSynthePart_TokenBox_C_Select::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_TokenBox_C_Select::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item) == 0x000020, "Member 'WeaponSynthePart_TokenBox_C_Select::K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WeaponSynthePart_TokenBox_C_Select::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, CallFunc_GetChildAt_ReturnValue_1) == 0x000030, "Member 'WeaponSynthePart_TokenBox_C_Select::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000038, "Member 'WeaponSynthePart_TokenBox_C_Select::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item_1) == 0x000040, "Member 'WeaponSynthePart_TokenBox_C_Select::K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'WeaponSynthePart_TokenBox_C_Select::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, CallFunc_Subtract_IntInt_ReturnValue) == 0x00004C, "Member 'WeaponSynthePart_TokenBox_C_Select::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_Select, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'WeaponSynthePart_TokenBox_C_Select::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.OnSelect
// 0x0040 (0x0040 - 0x0000)
struct WeaponSynthePart_TokenBox_C_OnSelect final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CDE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       SelectItem;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CDF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CE0[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_OnSelect) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_OnSelect");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_OnSelect) == 0x000040, "Wrong size on WeaponSynthePart_TokenBox_C_OnSelect");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelect, IsChecked) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_OnSelect::IsChecked' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelect, SelectItem) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_OnSelect::SelectItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelect, Temp_int_Variable) == 0x000010, "Member 'WeaponSynthePart_TokenBox_C_OnSelect::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelect, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WeaponSynthePart_TokenBox_C_OnSelect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelect, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_TokenBox_C_OnSelect::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelect, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_TokenBox_C_OnSelect::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelect, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_TokenBox_C_OnSelect::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelect, K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item) == 0x000030, "Member 'WeaponSynthePart_TokenBox_C_OnSelect::K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelect, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WeaponSynthePart_TokenBox_C_OnSelect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_OnSelect, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000039, "Member 'WeaponSynthePart_TokenBox_C_OnSelect::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.GetTypeItem
// 0x0058 (0x0058 - 0x0000)
struct WeaponSynthePart_TokenBox_C_GetTypeItem final
{
public:
	ESBFusionTicketType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CE1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       TokenBoxItem;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CE2[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CE3[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CE4[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBFusionTicketType                           CallFunc_GetType_Ticket_Type;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_GetTypeItem) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_GetTypeItem");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_GetTypeItem) == 0x000058, "Wrong size on WeaponSynthePart_TokenBox_C_GetTypeItem");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, Type) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::Type' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, TokenBoxItem) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, CallFunc_Array_Get_Item) == 0x000038, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item) == 0x000048, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, CallFunc_GetType_Ticket_Type) == 0x000051, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::CallFunc_GetType_Ticket_Type' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetTypeItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000052, "Member 'WeaponSynthePart_TokenBox_C_GetTypeItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.IsValidCostAll
// 0x0050 (0x0050 - 0x0000)
struct WeaponSynthePart_TokenBox_C_IsValidCostAll final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CE5[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CE6[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CE7[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidCost_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CE8[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_IsValidCostAll) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_IsValidCostAll");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_IsValidCostAll) == 0x000050, "Wrong size on WeaponSynthePart_TokenBox_C_IsValidCostAll");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, Result) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, CallFunc_Array_Get_Item) == 0x000028, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item) == 0x000038, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, CallFunc_IsValidCost_ReturnValue) == 0x000041, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::CallFunc_IsValidCost_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, CallFunc_Array_Length_ReturnValue_1) == 0x000044, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsValidCostAll, CallFunc_Less_IntInt_ReturnValue_1) == 0x000048, "Member 'WeaponSynthePart_TokenBox_C_IsValidCostAll::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.GetCreateNum
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_TokenBox_C_GetCreateNum final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_GetCreateNum) == 0x000004, "Wrong alignment on WeaponSynthePart_TokenBox_C_GetCreateNum");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_GetCreateNum) == 0x000008, "Wrong size on WeaponSynthePart_TokenBox_C_GetCreateNum");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetCreateNum, ReturnValue) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_GetCreateNum::ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetCreateNum, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'WeaponSynthePart_TokenBox_C_GetCreateNum::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.IsSelected
// 0x0030 (0x0030 - 0x0000)
struct WeaponSynthePart_TokenBox_C_IsSelected final
{
public:
	bool                                          Param_IsSelected;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CE9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CEA[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSelect_Selected;                        // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_IsSelected) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_IsSelected");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_IsSelected) == 0x000030, "Wrong size on WeaponSynthePart_TokenBox_C_IsSelected");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsSelected, Param_IsSelected) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_IsSelected::Param_IsSelected' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsSelected, Temp_int_Variable) == 0x000004, "Member 'WeaponSynthePart_TokenBox_C_IsSelected::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsSelected, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_IsSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsSelected, CallFunc_GetChildrenCount_ReturnValue) == 0x00000C, "Member 'WeaponSynthePart_TokenBox_C_IsSelected::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsSelected, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_TokenBox_C_IsSelected::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsSelected, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_TokenBox_C_IsSelected::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsSelected, K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item) == 0x000020, "Member 'WeaponSynthePart_TokenBox_C_IsSelected::K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsSelected, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WeaponSynthePart_TokenBox_C_IsSelected::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsSelected, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000029, "Member 'WeaponSynthePart_TokenBox_C_IsSelected::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_IsSelected, CallFunc_IsSelect_Selected) == 0x00002A, "Member 'WeaponSynthePart_TokenBox_C_IsSelected::CallFunc_IsSelect_Selected' has a wrong offset!");

// Function WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C.GetSelectedItem
// 0x0038 (0x0038 - 0x0000)
struct WeaponSynthePart_TokenBox_C_GetSelectedItem final
{
public:
	class UWeaponSynthePart_TokenBoxItem_C*       TokenBoxItem;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CEB[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CEC[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponSynthePart_TokenBoxItem_C*       K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSelect_Selected;                        // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_TokenBox_C_GetSelectedItem) == 0x000008, "Wrong alignment on WeaponSynthePart_TokenBox_C_GetSelectedItem");
static_assert(sizeof(WeaponSynthePart_TokenBox_C_GetSelectedItem) == 0x000038, "Wrong size on WeaponSynthePart_TokenBox_C_GetSelectedItem");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetSelectedItem, TokenBoxItem) == 0x000000, "Member 'WeaponSynthePart_TokenBox_C_GetSelectedItem::TokenBoxItem' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetSelectedItem, Temp_int_Variable) == 0x000008, "Member 'WeaponSynthePart_TokenBox_C_GetSelectedItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetSelectedItem, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WeaponSynthePart_TokenBox_C_GetSelectedItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetSelectedItem, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'WeaponSynthePart_TokenBox_C_GetSelectedItem::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetSelectedItem, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_TokenBox_C_GetSelectedItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetSelectedItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'WeaponSynthePart_TokenBox_C_GetSelectedItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetSelectedItem, K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item) == 0x000028, "Member 'WeaponSynthePart_TokenBox_C_GetSelectedItem::K2Node_DynamicCast_AsWeapon_Synthe_Part_Token_Box_Item' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetSelectedItem, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WeaponSynthePart_TokenBox_C_GetSelectedItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetSelectedItem, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000031, "Member 'WeaponSynthePart_TokenBox_C_GetSelectedItem::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TokenBox_C_GetSelectedItem, CallFunc_IsSelect_Selected) == 0x000032, "Member 'WeaponSynthePart_TokenBox_C_GetSelectedItem::CallFunc_IsSelect_Selected' has a wrong offset!");

}

