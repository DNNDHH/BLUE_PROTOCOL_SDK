/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.SetMultiCompleteValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              MultiCraft                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            MultiCriticalNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CraftedTotalAmount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       MultiCriticals                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsFailActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SaleAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleProfits                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::SetMultiCompleteValues(TArray<class FString>* MultiCraft, int32_t MultiCriticalNum, int32_t CraftedTotalAmount, TArray<bool>* MultiCriticals, bool bIsFailActive, int32_t SaleAmount, int32_t SaleProfits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.SetMultiCompleteValues");
		
		UPlayerCraft_C_SetMultiCompleteValues_Params params {};
		params.MultiCriticalNum = MultiCriticalNum;
		params.CraftedTotalAmount = CraftedTotalAmount;
		params.bIsFailActive = bIsFailActive;
		params.SaleAmount = SaleAmount;
		params.SaleProfits = SaleProfits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiCraft != nullptr)
			*MultiCraft = params.MultiCraft;
		if (MultiCriticals != nullptr)
			*MultiCriticals = params.MultiCriticals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.SetCompleteValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CraftedItemUID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsCriticalCraft                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CraftedTotalAmount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleProfits                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::SetCompleteValues(const class FString& CraftedItemUID, bool IsCriticalCraft, int32_t CraftedTotalAmount, int32_t SaleAmount, int32_t SaleProfits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.SetCompleteValues");
		
		UPlayerCraft_C_SetCompleteValues_Params params {};
		params.CraftedItemUID = CraftedItemUID;
		params.IsCriticalCraft = IsCriticalCraft;
		params.CraftedTotalAmount = CraftedTotalAmount;
		params.SaleAmount = SaleAmount;
		params.SaleProfits = SaleProfits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.GetCraftComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerCraftComponent*                     CraftComponent                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::GetCraftComponent(class USBPlayerCraftComponent** CraftComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.GetCraftComponent");
		
		UPlayerCraft_C_GetCraftComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CraftComponent != nullptr)
			*CraftComponent = params.CraftComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.SetIsLockInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLockInput                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerCraft_C::SetIsLockInput(bool bLockInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.SetIsLockInput");
		
		UPlayerCraft_C_SetIsLockInput_Params params {};
		params.bLockInput = bLockInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.UpdateTimeoutVisible
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::UpdateTimeoutVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.UpdateTimeoutVisible");
		
		UPlayerCraft_C_UpdateTimeoutVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Destruct");
		
		UPlayerCraft_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnCloseCraftResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnCloseCraftResult(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnCloseCraftResult");
		
		UPlayerCraft_C_EventOnCloseCraftResult_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UPlayerCraft_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnCompleteMultiCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCritical                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              ItemUniqueids                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            CriticalNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isFail                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TotalAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       Criticals                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            SaleAmount                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleProfits                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnCompleteMultiCraft(int32_t ErrorCode, bool IsCritical, TArray<class FString> ItemUniqueids, int32_t CriticalNum, bool isFail, int32_t TotalAmount, TArray<bool> Criticals, int32_t SaleAmount, int32_t SaleProfits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnCompleteMultiCraft");
		
		UPlayerCraft_C_EventOnCompleteMultiCraft_Params params {};
		params.ErrorCode = ErrorCode;
		params.IsCritical = IsCritical;
		params.ItemUniqueids = ItemUniqueids;
		params.CriticalNum = CriticalNum;
		params.isFail = isFail;
		params.TotalAmount = TotalAmount;
		params.Criticals = Criticals;
		params.SaleAmount = SaleAmount;
		params.SaleProfits = SaleProfits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnChangeMoneyColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WhiteColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerCraft_C::EventOnChangeMoneyColor(bool WhiteColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnChangeMoneyColor");
		
		UPlayerCraft_C_EventOnChangeMoneyColor_Params params {};
		params.WhiteColor = WhiteColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnErrorAdventureBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnErrorAdventureBoard(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnErrorAdventureBoard");
		
		UPlayerCraft_C_EventOnErrorAdventureBoard_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Construct");
		
		UPlayerCraft_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerCraft_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.PreConstruct");
		
		UPlayerCraft_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnJingleAnimFinished
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::EventOnJingleAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnJingleAnimFinished");
		
		UPlayerCraft_C_EventOnJingleAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnCompleteCfaft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSuccess                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCritical                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ItemUniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalAmount                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleAmount                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleProfits                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnCompleteCfaft(int32_t ErrorCode, bool IsSuccess, bool IsCritical, const class FString& ItemUniqueId, int32_t TotalAmount, int32_t SaleAmount, int32_t SaleProfits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnCompleteCfaft");
		
		UPlayerCraft_C_EventOnCompleteCfaft_Params params {};
		params.ErrorCode = ErrorCode;
		params.IsSuccess = IsSuccess;
		params.IsCritical = IsCritical;
		params.ItemUniqueId = ItemUniqueId;
		params.TotalAmount = TotalAmount;
		params.SaleAmount = SaleAmount;
		params.SaleProfits = SaleProfits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnErrorCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnErrorCraft(int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnErrorCraft");
		
		UPlayerCraft_C_EventOnErrorCraft_Params params {};
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnPressUICancel
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::EventOnPressUICancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnPressUICancel");
		
		UPlayerCraft_C_EventOnPressUICancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event ExecuteCraft
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::EventExecuteCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event ExecuteCraft");
		
		UPlayerCraft_C_EventExecuteCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnCancelExecuteCraft
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::EventOnCancelExecuteCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnCancelExecuteCraft");
		
		UPlayerCraft_C_EventOnCancelExecuteCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnSelectRecepi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterCraftRecepi                       SelectRecepi                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UCraftRecepiItem_C*                          SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnSelectRecepi(const struct FCharacterCraftRecepi& SelectRecepi, class UCraftRecepiItem_C* SelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnSelectRecepi");
		
		UPlayerCraft_C_EventOnSelectRecepi_Params params {};
		params.SelectRecepi = SelectRecepi;
		params.SelectedItem = SelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnCompleteCraftRequestCommon
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::EventOnCompleteCraftRequestCommon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnCompleteCraftRequestCommon");
		
		UPlayerCraft_C_EventOnCompleteCraftRequestCommon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnBeginCraft
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::EventOnBeginCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnBeginCraft");
		
		UPlayerCraft_C_EventOnBeginCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnEndCraft
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::EventOnEndCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnEndCraft");
		
		UPlayerCraft_C_EventOnEndCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnCloseFromCraftList
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::EventOnCloseFromCraftList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnCloseFromCraftList");
		
		UPlayerCraft_C_EventOnCloseFromCraftList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.EventOnCompleteRedayCheckDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnCompleteRedayCheckDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.EventOnCompleteRedayCheckDialog");
		
		UPlayerCraft_C_EventOnCompleteRedayCheckDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.EventOnCloseClassCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnCloseClassCheck(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.EventOnCloseClassCheck");
		
		UPlayerCraft_C_EventOnCloseClassCheck_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.EvemtOnCloseNotEnoughMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EvemtOnCloseNotEnoughMoney(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.EvemtOnCloseNotEnoughMoney");
		
		UPlayerCraft_C_EvemtOnCloseNotEnoughMoney_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.EventOnTokenDemanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnTokenDemanded(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.EventOnTokenDemanded");
		
		UPlayerCraft_C_EventOnTokenDemanded_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.EventOnCloseOverflowDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnCloseOverflowDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.EventOnCloseOverflowDialog");
		
		UPlayerCraft_C_EventOnCloseOverflowDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.EventOnOverflowAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnOverflowAccepted(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.EventOnOverflowAccepted");
		
		UPlayerCraft_C_EventOnOverflowAccepted_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.Event OnCloseConditionCreated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::EventOnCloseConditionCreated(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.Event OnCloseConditionCreated");
		
		UPlayerCraft_C_EventOnCloseConditionCreated_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.ExecuteUbergraph_PlayerCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::ExecuteUbergraph_PlayerCraft(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.ExecuteUbergraph_PlayerCraft");
		
		UPlayerCraft_C_ExecuteUbergraph_PlayerCraft_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.OnCancelExecuteCraft__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerCraft_C::OnCancelExecuteCraft__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.OnCancelExecuteCraft__DelegateSignature");
		
		UPlayerCraft_C_OnCancelExecuteCraft__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.OnError__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCraft_C::OnError__DelegateSignature(int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.OnError__DelegateSignature");
		
		UPlayerCraft_C_OnError__DelegateSignature_Params params {};
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.OnCloseAll__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCrafted                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerCraft_C::OnCloseAll__DelegateSignature(bool IsCrafted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.OnCloseAll__DelegateSignature");
		
		UPlayerCraft_C_OnCloseAll__DelegateSignature_Params params {};
		params.IsCrafted = IsCrafted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerCraft.PlayerCraft_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCrafted                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerCraft_C::OnClose__DelegateSignature(bool IsCrafted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCraft.PlayerCraft_C.OnClose__DelegateSignature");
		
		UPlayerCraft_C_OnClose__DelegateSignature_Params params {};
		params.IsCrafted = IsCrafted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerCraft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerCraft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerCraft.PlayerCraft_C");
		return ptr;
	}

}


