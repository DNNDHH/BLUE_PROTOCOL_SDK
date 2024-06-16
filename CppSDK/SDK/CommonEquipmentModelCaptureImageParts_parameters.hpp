#pragma once

 

// Package: CommonEquipmentModelCaptureImageParts

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.SwitchModelImageForWeaponOrImagine
// 0x0048 (0x0048 - 0x0000)
struct CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine final
{
public:
	bool                                          InIsForWeapon;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80CC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80CD[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80CE[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80CF[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine) == 0x000008, "Wrong alignment on CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine");
static_assert(sizeof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine) == 0x000048, "Wrong size on CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, InIsForWeapon) == 0x000000, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::InIsForWeapon' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, Temp_float_Variable) == 0x000004, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, Temp_bool_Variable) == 0x000008, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, Temp_int_Variable) == 0x00000C, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, Temp_int_Variable_1) == 0x000010, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, Temp_float_Variable_1) == 0x000014, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, K2Node_Select_Default) == 0x000018, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, Temp_bool_Variable_1) == 0x00001C, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000020, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, K2Node_Select_Default_1) == 0x000028, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, CallFunc_GetPosition_ReturnValue) == 0x00002C, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, CallFunc_BreakVector2D_X) == 0x000038, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, CallFunc_BreakVector2D_Y) == 0x00003C, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine, CallFunc_MakeVector2D_ReturnValue) == 0x000040, "Member 'CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}

