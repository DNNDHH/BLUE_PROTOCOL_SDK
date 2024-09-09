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
	 * Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetFusionItemData
	 */
	struct UCommonEquipmentBasicItemStatusParts_C_SetFusionItemData_Params
	{	};

	/**
	 * Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetRecepiId
	 */
	struct UCommonEquipmentBasicItemStatusParts_C_SetRecepiId_Params
	{
	public:
		int32_t                                                    RecepiId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DO6D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetEventTermId
	 */
	struct UCommonEquipmentBasicItemStatusParts_C_SetEventTermId_Params
	{
	public:
		class FString                                              EventTermId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetCraftNumVisible
	 */
	struct UCommonEquipmentBasicItemStatusParts_C_SetCraftNumVisible_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9YPY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CraftNumMin;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CraftNumMax;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2EXA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.SetShowRateButton
	 */
	struct UCommonEquipmentBasicItemStatusParts_C_SetShowRateButton_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.Set ItemData
	 */
	struct UCommonEquipmentBasicItemStatusParts_C_SetItemData_Params
	{
	public:
		struct FItemMasterData                                     MasterItem;                                              // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.BndEvt__ItemDescription_Btn_RateDisplay_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UCommonEquipmentBasicItemStatusParts_C_BndEvt__ItemDescription_Btn_RateDisplay_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.ExecuteUbergraph_CommonEquipmentBasicItemStatusParts
	 */
	struct UCommonEquipmentBasicItemStatusParts_C_ExecuteUbergraph_CommonEquipmentBasicItemStatusParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentBasicItemStatusParts.CommonEquipmentBasicItemStatusParts_C.Request_ShowRate__DelegateSignature
	 */
	struct UCommonEquipmentBasicItemStatusParts_C_Request_ShowRate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
