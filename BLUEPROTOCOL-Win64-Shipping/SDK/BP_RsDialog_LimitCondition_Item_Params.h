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
	 * Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.SetItemInfo
	 */
	struct UBP_RsDialog_LimitCondition_Item_C_SetItemInfo_Params
	{
	public:
		bool                                                       IsAchieve;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P24Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.ExecuteUbergraph_BP_RsDialog_LimitCondition_Item
	 */
	struct UBP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.OnButtonClicked__DelegateSignature
	 */
	struct UBP_RsDialog_LimitCondition_Item_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		ERsDialogButtonType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
