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
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.UpdateBottleStatus
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_UpdateBottleStatus_Params
	{
	public:
		int32_t                                                    InLiquidMemoryId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EU9K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.SetLiquidMemoryInfo
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_SetLiquidMemoryInfo_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Level;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.Construct
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_Construct_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.ExecuteUbergraph_UMG_LiquidMemoryActivateListItem
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_ExecuteUbergraph_UMG_LiquidMemoryActivateListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnPopupTokenList__DelegateSignature
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_OnPopupTokenList__DelegateSignature_Params
	{
	public:
		int32_t                                                    LiquidMemoryId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFullCharge;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnOveredAddNumMax__DelegateSignature
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_OnOveredAddNumMax__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnSub__DelegateSignature
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_OnSub__DelegateSignature_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnAdd__DelegateSignature
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_OnAdd__DelegateSignature_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnSelected__DelegateSignature
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_OnBtnSelected__DelegateSignature_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnUnhovered__DelegateSignature
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_OnBtnUnhovered__DelegateSignature_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnHovered__DelegateSignature
	 */
	struct UUMG_LiquidMemoryActivateListItem_C_OnBtnHovered__DelegateSignature_Params
	{
	public:
		class UUMG_LiquidMemoryProductListItem_C*                  InItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
