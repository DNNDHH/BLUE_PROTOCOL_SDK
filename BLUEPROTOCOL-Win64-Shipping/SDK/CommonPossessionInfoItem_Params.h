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
	 * Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetInfoMark
	 */
	struct UCommonPossessionInfoItem_C_SetInfoMark_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetInfoIconActive
	 */
	struct UCommonPossessionInfoItem_C_SetInfoIconActive_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.ResetPossessionInfo
	 */
	struct UCommonPossessionInfoItem_C_ResetPossessionInfo_Params
	{	};

	/**
	 * Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetMasterImagineData
	 */
	struct UCommonPossessionInfoItem_C_SetMasterImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              UniqueId;                                                // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionInfo
	 */
	struct UCommonPossessionInfoItem_C_SetPossessionInfo_Params
	{
	public:
		struct FSBMasterImagine                                    InMasterImagineData;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              UniqueId;                                                // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionName
	 */
	struct UCommonPossessionInfoItem_C_SetPossessionName_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionTypeName
	 */
	struct UCommonPossessionInfoItem_C_SetPossessionTypeName_Params
	{
	public:
		class FText                                                InTypeName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.PreConstruct
	 */
	struct UCommonPossessionInfoItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetTextColor
	 */
	struct UCommonPossessionInfoItem_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.ExecuteUbergraph_CommonPossessionInfoItem
	 */
	struct UCommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
