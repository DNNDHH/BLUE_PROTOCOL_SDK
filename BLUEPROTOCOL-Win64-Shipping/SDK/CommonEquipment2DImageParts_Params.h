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
	 * Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetImageSize
	 */
	struct UCommonEquipment2DImageParts_C_SetImageSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInSetDefaultSize;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetItem2DImage
	 */
	struct UCommonEquipment2DImageParts_C_SetItem2DImage_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetImagine2DImage
	 */
	struct UCommonEquipment2DImageParts_C_SetImagine2DImage_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetWeapon2DImage
	 */
	struct UCommonEquipment2DImageParts_C_SetWeapon2DImage_Params
	{
	public:
		int32_t                                                    InWeaponID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1
	 */
	struct UCommonEquipment2DImageParts_C_OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.PreConstruct
	 */
	struct UCommonEquipment2DImageParts_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.RequestEquipment2DImageLoad
	 */
	struct UCommonEquipment2DImageParts_C_RequestEquipment2DImageLoad_Params
	{
	public:
		int32_t                                                    InEquipmentId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  InEquipmentItemType;                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBImagineCategoryType                                     InImagineType;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.ExecuteUbergraph_CommonEquipment2DImageParts
	 */
	struct UCommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
