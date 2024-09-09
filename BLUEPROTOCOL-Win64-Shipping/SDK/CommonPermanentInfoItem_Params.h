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
	 * Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.Get_InfoIcon_1_ToolTipWidget_1
	 */
	struct UCommonPermanentInfoItem_C_Get_InfoIcon_1_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetInfoMark
	 */
	struct UCommonPermanentInfoItem_C_SetInfoMark_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetInfoIconActive
	 */
	struct UCommonPermanentInfoItem_C_SetInfoIconActive_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.ResetHyouiAbilityInfo
	 */
	struct UCommonPermanentInfoItem_C_ResetHyouiAbilityInfo_Params
	{	};

	/**
	 * Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetMasterImagineData
	 */
	struct UCommonPermanentInfoItem_C_SetMasterImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              UniqueId;                                                // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetHyouiAbilityInfo
	 */
	struct UCommonPermanentInfoItem_C_SetHyouiAbilityInfo_Params
	{
	public:
		struct FSBMasterImagine                                    InMasterImagineData;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              UniqueId;                                                // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetHyouiAbilityName
	 */
	struct UCommonPermanentInfoItem_C_SetHyouiAbilityName_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.PreConstruct
	 */
	struct UCommonPermanentInfoItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.SetTextColor
	 */
	struct UCommonPermanentInfoItem_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPermanentInfoItem.CommonPermanentInfoItem_C.ExecuteUbergraph_CommonPermanentInfoItem
	 */
	struct UCommonPermanentInfoItem_C_ExecuteUbergraph_CommonPermanentInfoItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
