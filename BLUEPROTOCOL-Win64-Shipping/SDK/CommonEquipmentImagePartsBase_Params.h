#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetItem2DImage
	 */
	struct UCommonEquipmentImagePartsBase_C_SetItem2DImage_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetModelCaptureImageVisibility
	 */
	struct UCommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetImagine2DImage
	 */
	struct UCommonEquipmentImagePartsBase_C_SetImagine2DImage_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetWeapon2DImage
	 */
	struct UCommonEquipmentImagePartsBase_C_SetWeapon2DImage_Params
	{
	public:
		int32_t                                                    InWeaponID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SwitchModelTypeWeaponOrImagine
	 */
	struct UCommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine_Params
	{
	public:
		bool                                                       InIsWeapon;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SwitchImageType
	 */
	struct UCommonEquipmentImagePartsBase_C_SwitchImageType_Params
	{
	public:
		bool                                                       InIs2DImage;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
