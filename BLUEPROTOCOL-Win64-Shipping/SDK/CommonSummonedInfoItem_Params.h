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
	 * Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetInfoMark
	 */
	struct UCommonSummonedInfoItem_C_SetInfoMark_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetInfoIconActive
	 */
	struct UCommonSummonedInfoItem_C_SetInfoIconActive_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.ResetSummonedInfo
	 */
	struct UCommonSummonedInfoItem_C_ResetSummonedInfo_Params
	{	};

	/**
	 * Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetMasterImagineData
	 */
	struct UCommonSummonedInfoItem_C_SetMasterImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              UniqueId;                                                // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedInfo
	 */
	struct UCommonSummonedInfoItem_C_SetSummonedInfo_Params
	{
	public:
		struct FSBMasterImagine                                    InImagineMasterData;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              UniqueId;                                                // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedName
	 */
	struct UCommonSummonedInfoItem_C_SetSummonedName_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedTypeName
	 */
	struct UCommonSummonedInfoItem_C_SetSummonedTypeName_Params
	{
	public:
		class FText                                                InTypeName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.PreConstruct
	 */
	struct UCommonSummonedInfoItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetTextColor
	 */
	struct UCommonSummonedInfoItem_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.ExecuteUbergraph_CommonSummonedInfoItem
	 */
	struct UCommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
