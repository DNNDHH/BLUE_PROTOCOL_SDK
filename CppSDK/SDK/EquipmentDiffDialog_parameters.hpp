#pragma once

 

// Package: EquipmentDiffDialog

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function EquipmentDiffDialog.EquipmentDiffDialog_C.ExecuteUbergraph_EquipmentDiffDialog
// 0x0028 (0x0028 - 0x0000)
struct EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_67BC[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog) == 0x000008, "Wrong alignment on EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog");
static_assert(sizeof(EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog) == 0x000028, "Wrong size on EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog");
static_assert(offsetof(EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog, EntryPoint) == 0x000000, "Member 'EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog::EntryPoint' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000020, "Member 'EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function EquipmentDiffDialog.EquipmentDiffDialog_C.SetRecepi
// 0x0120 (0x0120 - 0x0000)
struct EquipmentDiffDialog_C_SetRecepi final
{
public:
	bool                                          IsImagine;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Left;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67BD[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RecepiId;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   MasterManager;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  K2Node_MakeStruct_CharacterCraftRecepi;            // 0x0010(0x0008)(NoDestructor)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67BE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0020(0x0088)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67BF[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMin; // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMax; // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_ReturnValue; // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C0[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00B8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00D0(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C1[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             K2Node_Select_Default;                             // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             K2Node_Select_Default_1;                           // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C2[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_2;                           // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         K2Node_Select_Default_3;                           // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonEquipmentStatusDescWithImageView_C* K2Node_Select_Default_4;                           // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentDiffDialog_C_SetRecepi) == 0x000008, "Wrong alignment on EquipmentDiffDialog_C_SetRecepi");
static_assert(sizeof(EquipmentDiffDialog_C_SetRecepi) == 0x000120, "Wrong size on EquipmentDiffDialog_C_SetRecepi");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, IsImagine) == 0x000000, "Member 'EquipmentDiffDialog_C_SetRecepi::IsImagine' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, Left) == 0x000001, "Member 'EquipmentDiffDialog_C_SetRecepi::Left' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, RecepiId) == 0x000004, "Member 'EquipmentDiffDialog_C_SetRecepi::RecepiId' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, MasterManager) == 0x000008, "Member 'EquipmentDiffDialog_C_SetRecepi::MasterManager' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, K2Node_MakeStruct_CharacterCraftRecepi) == 0x000010, "Member 'EquipmentDiffDialog_C_SetRecepi::K2Node_MakeStruct_CharacterCraftRecepi' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, CallFunc_FindCraftMaster_bIsValid) == 0x000018, "Member 'EquipmentDiffDialog_C_SetRecepi::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, CallFunc_FindCraftMaster_CraftMaster) == 0x000020, "Member 'EquipmentDiffDialog_C_SetRecepi::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, CallFunc_Not_PreBool_ReturnValue) == 0x0000A8, "Member 'EquipmentDiffDialog_C_SetRecepi::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMin) == 0x0000AC, "Member 'EquipmentDiffDialog_C_SetRecepi::CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMin' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMax) == 0x0000B0, "Member 'EquipmentDiffDialog_C_SetRecepi::CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMax' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_ReturnValue) == 0x0000B4, "Member 'EquipmentDiffDialog_C_SetRecepi::CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, CallFunc_Conv_IntToText_ReturnValue) == 0x0000B8, "Member 'EquipmentDiffDialog_C_SetRecepi::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000D0, "Member 'EquipmentDiffDialog_C_SetRecepi::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, Temp_bool_Variable) == 0x0000E8, "Member 'EquipmentDiffDialog_C_SetRecepi::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, Temp_bool_Variable_1) == 0x0000E9, "Member 'EquipmentDiffDialog_C_SetRecepi::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, Temp_bool_Variable_2) == 0x0000EA, "Member 'EquipmentDiffDialog_C_SetRecepi::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, Temp_bool_Variable_3) == 0x0000EB, "Member 'EquipmentDiffDialog_C_SetRecepi::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, K2Node_Select_Default) == 0x0000F0, "Member 'EquipmentDiffDialog_C_SetRecepi::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, K2Node_Select_Default_1) == 0x0000F8, "Member 'EquipmentDiffDialog_C_SetRecepi::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, Temp_bool_Variable_4) == 0x000100, "Member 'EquipmentDiffDialog_C_SetRecepi::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, K2Node_Select_Default_2) == 0x000108, "Member 'EquipmentDiffDialog_C_SetRecepi::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, K2Node_Select_Default_3) == 0x000110, "Member 'EquipmentDiffDialog_C_SetRecepi::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_SetRecepi, K2Node_Select_Default_4) == 0x000118, "Member 'EquipmentDiffDialog_C_SetRecepi::K2Node_Select_Default_4' has a wrong offset!");

// Function EquipmentDiffDialog.EquipmentDiffDialog_C.Set Own Item
// 0x0158 (0x0158 - 0x0000)
struct EquipmentDiffDialog_C_Set_Own_Item final
{
public:
	bool                                          Left;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           OwnItem;                                           // 0x0008(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonWeaponAbilityInfoSlotList_C*     TmpPerkList;                                       // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonEquipmentStatusDescWithImageView_C* TmpDesc;                                           // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C4[0x5];                                     // 0x0133(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonWeaponAbilityInfoSlotList_C*     K2Node_Select_Default;                             // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         K2Node_Select_Default_1;                           // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetSlotInfo_bHasValidAbility;             // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67C5[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonEquipmentStatusDescWithImageView_C* K2Node_Select_Default_2;                           // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentDiffDialog_C_Set_Own_Item) == 0x000008, "Wrong alignment on EquipmentDiffDialog_C_Set_Own_Item");
static_assert(sizeof(EquipmentDiffDialog_C_Set_Own_Item) == 0x000158, "Wrong size on EquipmentDiffDialog_C_Set_Own_Item");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, Left) == 0x000000, "Member 'EquipmentDiffDialog_C_Set_Own_Item::Left' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, OwnItem) == 0x000008, "Member 'EquipmentDiffDialog_C_Set_Own_Item::OwnItem' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, TmpPerkList) == 0x000120, "Member 'EquipmentDiffDialog_C_Set_Own_Item::TmpPerkList' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, TmpDesc) == 0x000128, "Member 'EquipmentDiffDialog_C_Set_Own_Item::TmpDesc' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, Temp_bool_Variable) == 0x000130, "Member 'EquipmentDiffDialog_C_Set_Own_Item::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, Temp_bool_Variable_1) == 0x000131, "Member 'EquipmentDiffDialog_C_Set_Own_Item::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, Temp_bool_Variable_2) == 0x000132, "Member 'EquipmentDiffDialog_C_Set_Own_Item::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, K2Node_Select_Default) == 0x000138, "Member 'EquipmentDiffDialog_C_Set_Own_Item::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, K2Node_Select_Default_1) == 0x000140, "Member 'EquipmentDiffDialog_C_Set_Own_Item::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, CallFunc_SetSlotInfo_bHasValidAbility) == 0x000148, "Member 'EquipmentDiffDialog_C_Set_Own_Item::CallFunc_SetSlotInfo_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(EquipmentDiffDialog_C_Set_Own_Item, K2Node_Select_Default_2) == 0x000150, "Member 'EquipmentDiffDialog_C_Set_Own_Item::K2Node_Select_Default_2' has a wrong offset!");

}

