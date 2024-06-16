#pragma once

 

// Package: CommonEquipmentImagePartsBase

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SwitchImageType
// 0x0014 (0x0014 - 0x0000)
struct CommonEquipmentImagePartsBase_C_SwitchImageType final
{
public:
	bool                                          InIs2DImage;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8114[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8115[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentImagePartsBase_C_SwitchImageType) == 0x000004, "Wrong alignment on CommonEquipmentImagePartsBase_C_SwitchImageType");
static_assert(sizeof(CommonEquipmentImagePartsBase_C_SwitchImageType) == 0x000014, "Wrong size on CommonEquipmentImagePartsBase_C_SwitchImageType");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SwitchImageType, InIs2DImage) == 0x000000, "Member 'CommonEquipmentImagePartsBase_C_SwitchImageType::InIs2DImage' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SwitchImageType, Temp_bool_Variable) == 0x000001, "Member 'CommonEquipmentImagePartsBase_C_SwitchImageType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SwitchImageType, Temp_int_Variable) == 0x000004, "Member 'CommonEquipmentImagePartsBase_C_SwitchImageType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SwitchImageType, Temp_int_Variable_1) == 0x000008, "Member 'CommonEquipmentImagePartsBase_C_SwitchImageType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SwitchImageType, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'CommonEquipmentImagePartsBase_C_SwitchImageType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SwitchImageType, K2Node_Select_Default) == 0x000010, "Member 'CommonEquipmentImagePartsBase_C_SwitchImageType::K2Node_Select_Default' has a wrong offset!");

// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SwitchModelTypeWeaponOrImagine
// 0x0002 (0x0002 - 0x0000)
struct CommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine final
{
public:
	bool                                          InIsWeapon;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine) == 0x000001, "Wrong alignment on CommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine");
static_assert(sizeof(CommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine) == 0x000002, "Wrong size on CommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine, InIsWeapon) == 0x000000, "Member 'CommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine::InIsWeapon' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'CommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetWeapon2DImage
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentImagePartsBase_C_SetWeapon2DImage final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentImagePartsBase_C_SetWeapon2DImage) == 0x000004, "Wrong alignment on CommonEquipmentImagePartsBase_C_SetWeapon2DImage");
static_assert(sizeof(CommonEquipmentImagePartsBase_C_SetWeapon2DImage) == 0x000008, "Wrong size on CommonEquipmentImagePartsBase_C_SetWeapon2DImage");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetWeapon2DImage, InWeaponID) == 0x000000, "Member 'CommonEquipmentImagePartsBase_C_SetWeapon2DImage::InWeaponID' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetWeapon2DImage, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonEquipmentImagePartsBase_C_SetWeapon2DImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetImagine2DImage
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentImagePartsBase_C_SetImagine2DImage final
{
public:
	int32                                         InImagineId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentImagePartsBase_C_SetImagine2DImage) == 0x000004, "Wrong alignment on CommonEquipmentImagePartsBase_C_SetImagine2DImage");
static_assert(sizeof(CommonEquipmentImagePartsBase_C_SetImagine2DImage) == 0x000008, "Wrong size on CommonEquipmentImagePartsBase_C_SetImagine2DImage");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetImagine2DImage, InImagineId) == 0x000000, "Member 'CommonEquipmentImagePartsBase_C_SetImagine2DImage::InImagineId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetImagine2DImage, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonEquipmentImagePartsBase_C_SetImagine2DImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetModelCaptureImageVisibility
// 0x0006 (0x0006 - 0x0000)
struct CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility) == 0x000001, "Wrong alignment on CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility");
static_assert(sizeof(CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility) == 0x000006, "Wrong size on CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility, InIsVisible) == 0x000000, "Member 'CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility, Temp_bool_Variable) == 0x000001, "Member 'CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility, Temp_byte_Variable) == 0x000002, "Member 'CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility, K2Node_Select_Default) == 0x000005, "Member 'CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility::K2Node_Select_Default' has a wrong offset!");

// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetItem2DImage
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipmentImagePartsBase_C_SetItem2DImage final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipmentImagePartsBase_C_SetItem2DImage) == 0x000004, "Wrong alignment on CommonEquipmentImagePartsBase_C_SetItem2DImage");
static_assert(sizeof(CommonEquipmentImagePartsBase_C_SetItem2DImage) == 0x000008, "Wrong size on CommonEquipmentImagePartsBase_C_SetItem2DImage");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetItem2DImage, ItemId) == 0x000000, "Member 'CommonEquipmentImagePartsBase_C_SetItem2DImage::ItemId' has a wrong offset!");
static_assert(offsetof(CommonEquipmentImagePartsBase_C_SetItem2DImage, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommonEquipmentImagePartsBase_C_SetItem2DImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

