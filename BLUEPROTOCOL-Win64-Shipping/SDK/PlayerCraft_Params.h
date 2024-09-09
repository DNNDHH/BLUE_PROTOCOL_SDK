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
	 * Function PlayerCraft.PlayerCraft_C.SetMultiCompleteValues
	 */
	struct UPlayerCraft_C_SetMultiCompleteValues_Params
	{
	public:
		TArray<class FString>                                      MultiCraft;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    MultiCriticalNum;                                        // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CraftedTotalAmount;                                      // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<bool>                                               MultiCriticals;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bIsFailActive;                                           // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0Z3O[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SaleAmount;                                              // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleProfits;                                             // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.SetCompleteValues
	 */
	struct UPlayerCraft_C_SetCompleteValues_Params
	{
	public:
		class FString                                              CraftedItemUID;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsCriticalCraft;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5RMO[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CraftedTotalAmount;                                      // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleAmount;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleProfits;                                             // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.GetCraftComponent
	 */
	struct UPlayerCraft_C_GetCraftComponent_Params
	{
	public:
		class USBPlayerCraftComponent*                             CraftComponent;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.SetIsLockInput
	 */
	struct UPlayerCraft_C_SetIsLockInput_Params
	{
	public:
		bool                                                       bLockInput;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.UpdateTimeoutVisible
	 */
	struct UPlayerCraft_C_UpdateTimeoutVisible_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Destruct
	 */
	struct UPlayerCraft_C_Destruct_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnCloseCraftResult
	 */
	struct UPlayerCraft_C_EventOnCloseCraftResult_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlayerCraft_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnCompleteMultiCraft
	 */
	struct UPlayerCraft_C_EventOnCompleteMultiCraft_Params
	{
	public:
		int32_t                                                    ErrorCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCritical;                                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LJ19[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      ItemUniqueids;                                           // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    CriticalNum;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isFail;                                                  // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OB2T[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TotalAmount;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5UH8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<bool>                                               Criticals;                                               // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    SaleAmount;                                              // 0x0038(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleProfits;                                             // 0x003C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnChangeMoneyColor
	 */
	struct UPlayerCraft_C_EventOnChangeMoneyColor_Params
	{
	public:
		bool                                                       WhiteColor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnErrorAdventureBoard
	 */
	struct UPlayerCraft_C_EventOnErrorAdventureBoard_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Construct
	 */
	struct UPlayerCraft_C_Construct_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.PreConstruct
	 */
	struct UPlayerCraft_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnJingleAnimFinished
	 */
	struct UPlayerCraft_C_EventOnJingleAnimFinished_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnCompleteCfaft
	 */
	struct UPlayerCraft_C_EventOnCompleteCfaft_Params
	{
	public:
		int32_t                                                    ErrorCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSuccess;                                               // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCritical;                                              // 0x0005(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NUH9[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ItemUniqueId;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    TotalAmount;                                             // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleAmount;                                              // 0x001C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleProfits;                                             // 0x0020(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnErrorCraft
	 */
	struct UPlayerCraft_C_EventOnErrorCraft_Params
	{
	public:
		int32_t                                                    ErrorCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnPressUICancel
	 */
	struct UPlayerCraft_C_EventOnPressUICancel_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event ExecuteCraft
	 */
	struct UPlayerCraft_C_EventExecuteCraft_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnCancelExecuteCraft
	 */
	struct UPlayerCraft_C_EventOnCancelExecuteCraft_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnSelectRecepi
	 */
	struct UPlayerCraft_C_EventOnSelectRecepi_Params
	{
	public:
		struct FCharacterCraftRecepi                               SelectRecepi;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UCraftRecepiItem_C*                                  SelectedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnCompleteCraftRequestCommon
	 */
	struct UPlayerCraft_C_EventOnCompleteCraftRequestCommon_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnBeginCraft
	 */
	struct UPlayerCraft_C_EventOnBeginCraft_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnEndCraft
	 */
	struct UPlayerCraft_C_EventOnEndCraft_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnCloseFromCraftList
	 */
	struct UPlayerCraft_C_EventOnCloseFromCraftList_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.EventOnCompleteRedayCheckDialog
	 */
	struct UPlayerCraft_C_EventOnCompleteRedayCheckDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.EventOnCloseClassCheck
	 */
	struct UPlayerCraft_C_EventOnCloseClassCheck_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.EvemtOnCloseNotEnoughMoney
	 */
	struct UPlayerCraft_C_EvemtOnCloseNotEnoughMoney_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.EventOnTokenDemanded
	 */
	struct UPlayerCraft_C_EventOnTokenDemanded_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.EventOnCloseOverflowDialog
	 */
	struct UPlayerCraft_C_EventOnCloseOverflowDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.EventOnOverflowAccepted
	 */
	struct UPlayerCraft_C_EventOnOverflowAccepted_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.Event OnCloseConditionCreated
	 */
	struct UPlayerCraft_C_EventOnCloseConditionCreated_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.ExecuteUbergraph_PlayerCraft
	 */
	struct UPlayerCraft_C_ExecuteUbergraph_PlayerCraft_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MMNZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.OnCancelExecuteCraft__DelegateSignature
	 */
	struct UPlayerCraft_C_OnCancelExecuteCraft__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.OnError__DelegateSignature
	 */
	struct UPlayerCraft_C_OnError__DelegateSignature_Params
	{
	public:
		int32_t                                                    ErrorCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.OnCloseAll__DelegateSignature
	 */
	struct UPlayerCraft_C_OnCloseAll__DelegateSignature_Params
	{
	public:
		bool                                                       IsCrafted;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerCraft.PlayerCraft_C.OnClose__DelegateSignature
	 */
	struct UPlayerCraft_C_OnClose__DelegateSignature_Params
	{
	public:
		bool                                                       IsCrafted;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
