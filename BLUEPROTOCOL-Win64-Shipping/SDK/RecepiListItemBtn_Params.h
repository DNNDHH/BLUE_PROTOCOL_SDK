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
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateNewMark
	 */
	struct URecepiListItemBtn_C_UpdateNewMark_Params
	{
	public:
		int32_t                                                    RecepiId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T7W1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateTimeLimit
	 */
	struct URecepiListItemBtn_C_UpdateTimeLimit_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.SetSelectedVisible
	 */
	struct URecepiListItemBtn_C_SetSelectedVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Unbind Wishlist Update
	 */
	struct URecepiListItemBtn_C_UnbindWishlistUpdate_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Bind Wishlist Update
	 */
	struct URecepiListItemBtn_C_BindWishlistUpdate_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateRewardBoost
	 */
	struct URecepiListItemBtn_C_UpdateRewardBoost_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.GetRecepi
	 */
	struct URecepiListItemBtn_C_GetRecepi_Params
	{
	public:
		struct FMasterImagineRecepi                                Master;                                                  // 0x0000(0x0038)  (Parm, OutParm)
		bool                                                       bIsCrafted;                                              // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Construct
	 */
	struct URecepiListItemBtn_C_Construct_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.BndEvt__Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct URecepiListItemBtn_C_BndEvt__Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Set RecepiData
	 */
	struct URecepiListItemBtn_C_SetRecepiData_Params
	{
	public:
		struct FMasterImagineRecepi                                ImagineRecpiData;                                        // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.ApplyImagineData
	 */
	struct URecepiListItemBtn_C_ApplyImagineData_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Set Crafted
	 */
	struct URecepiListItemBtn_C_SetCrafted_Params
	{
	public:
		bool                                                       IsCrafted;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Check Adv Rank Reached
	 */
	struct URecepiListItemBtn_C_CheckAdvRankReached_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.OnRecepiUpdated
	 */
	struct URecepiListItemBtn_C_OnRecepiUpdated_Params
	{
	public:
		int32_t                                                    RecepiId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Construct_RecepiAttach
	 */
	struct URecepiListItemBtn_C_Construct_RecepiAttach_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Destruct_RecepiAttach
	 */
	struct URecepiListItemBtn_C_Destruct_RecepiAttach_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Destruct
	 */
	struct URecepiListItemBtn_C_Destruct_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Bind Boost
	 */
	struct URecepiListItemBtn_C_BindBoost_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Unbind Boost
	 */
	struct URecepiListItemBtn_C_UnbindBoost_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.OnUpdateReward
	 */
	struct URecepiListItemBtn_C_OnUpdateReward_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.Update Wishlist
	 */
	struct URecepiListItemBtn_C_UpdateWishlist_Params
	{	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.ExecuteUbergraph_RecepiListItemBtn
	 */
	struct URecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RecepiListItemBtn.RecepiListItemBtn_C.OnSelect__DelegateSignature
	 */
	struct URecepiListItemBtn_C_OnSelect__DelegateSignature_Params
	{
	public:
		struct FMasterImagineRecepi                                MasterData;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class URecepiListItemBtn_C*                                SelectedItem;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
