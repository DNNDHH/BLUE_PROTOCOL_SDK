#pragma once

 

// Package: MyCharaMenu_EquipRingHandSelectDialog

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.OnSelected__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_EquipRingHandSelectDialog_C_OnSelected__DelegateSignature final
{
public:
	bool                                          InIsLeftHand;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EquipRingHandSelectDialog_C_OnSelected__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_EquipRingHandSelectDialog_C_OnSelected__DelegateSignature");
static_assert(sizeof(MyCharaMenu_EquipRingHandSelectDialog_C_OnSelected__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_EquipRingHandSelectDialog_C_OnSelected__DelegateSignature");
static_assert(offsetof(MyCharaMenu_EquipRingHandSelectDialog_C_OnSelected__DelegateSignature, InIsLeftHand) == 0x000000, "Member 'MyCharaMenu_EquipRingHandSelectDialog_C_OnSelected__DelegateSignature::InIsLeftHand' has a wrong offset!");

// Function MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C.ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog
// 0x00B0 (0x00B0 - 0x0000)
struct MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A3D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A3E[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0060(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0088(0x0028)()
};
static_assert(alignof(MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog) == 0x000008, "Wrong alignment on MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog");
static_assert(sizeof(MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog) == 0x0000B0, "Wrong size on MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog");
static_assert(offsetof(MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog, EntryPoint) == 0x000000, "Member 'MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog, CallFunc_PlaySE_ReturnValue) == 0x000030, "Member 'MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog, K2Node_MakeStruct_SlateColor_2) == 0x000060, "Member 'MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog, K2Node_MakeStruct_SlateColor_3) == 0x000088, "Member 'MyCharaMenu_EquipRingHandSelectDialog_C_ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");

}

