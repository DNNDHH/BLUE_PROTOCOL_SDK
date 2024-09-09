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
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBGVisible
	 */
	struct UCommonEquipmentStatusDescBase_C_SetBGVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.ResetStackBIcon
	 */
	struct UCommonEquipmentStatusDescBase_C_ResetStackBIcon_Params
	{
	public:
		bool                                                       InIsEffectiveDisplay;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetStackBIcon
	 */
	struct UCommonEquipmentStatusDescBase_C_SetStackBIcon_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InIsEffectiveDisplay;                                    // 0x0150(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionByCharaEquipType
	 */
	struct UCommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType_Params
	{
	public:
		ESBCharaEquipType                                          InCharaEquipType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6MTU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionByMasterData
	 */
	struct UCommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData_Params
	{
	public:
		struct FSBMasterImagine                                    InImagineMasterData;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionVisibility
	 */
	struct UCommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBlank
	 */
	struct UCommonEquipmentStatusDescBase_C_SetBlank_Params
	{
	public:
		bool                                                       InIsBlank;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetEquipmentName
	 */
	struct UCommonEquipmentStatusDescBase_C_SetEquipmentName_Params
	{
	public:
		class FString                                              InName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SwitchBaseBgType
	 */
	struct UCommonEquipmentStatusDescBase_C_SwitchBaseBgType_Params
	{
	public:
		bool                                                       InIsNormalType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZL7Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBaseSize
	 */
	struct UCommonEquipmentStatusDescBase_C_SetBaseSize_Params
	{
	public:
		float                                                      InWidth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InHeight;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.PreConstruct
	 */
	struct UCommonEquipmentStatusDescBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.Construct
	 */
	struct UCommonEquipmentStatusDescBase_C_Construct_Params
	{	};

	/**
	 * Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.ExecuteUbergraph_CommonEquipmentStatusDescBase
	 */
	struct UCommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
