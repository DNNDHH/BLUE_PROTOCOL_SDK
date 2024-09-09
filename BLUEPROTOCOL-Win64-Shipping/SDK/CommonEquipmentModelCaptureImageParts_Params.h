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
	 * Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.SwitchModelImageForWeaponOrImagine
	 */
	struct UCommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine_Params
	{
	public:
		bool                                                       InIsForWeapon;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IRI9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.PreConstruct
	 */
	struct UCommonEquipmentModelCaptureImageParts_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.ExecuteUbergraph_CommonEquipmentModelCaptureImageParts
	 */
	struct UCommonEquipmentModelCaptureImageParts_C_ExecuteUbergraph_CommonEquipmentModelCaptureImageParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
