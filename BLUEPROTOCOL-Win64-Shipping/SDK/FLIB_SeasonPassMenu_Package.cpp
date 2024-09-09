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
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.UpdateForceClearBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  QuestItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWidget*                                     ArrowObj                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     ClearBtn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_SeasonPassMenu_C::UpdateForceClearBtn(const struct FSBSeasonPassQuestItemData& QuestItem, class UWidget* ArrowObj, class UWidget* ClearBtn, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.UpdateForceClearBtn");
		
		UFLIB_SeasonPassMenu_C_UpdateForceClearBtn_Params params {};
		params.QuestItem = QuestItem;
		params.ArrowObj = ArrowObj;
		params.ClearBtn = ClearBtn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsSeasonPassQuestRewardItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  InQuestItemList                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsRewardItem                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_SeasonPassMenu_C::IsSeasonPassQuestRewardItem(const struct FSBSeasonPassQuestItemData& InQuestItemList, class UObject* __WorldContext, bool* OutIsRewardItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsSeasonPassQuestRewardItem");
		
		UFLIB_SeasonPassMenu_C_IsSeasonPassQuestRewardItem_Params params {};
		params.InQuestItemList = InQuestItemList;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsRewardItem != nullptr)
			*OutIsRewardItem = params.OutIsRewardItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.UpdateSubMenuExclamation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_SeasonPassMenu_C::UpdateSubMenuExclamation(class UObject* Sender, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.UpdateSubMenuExclamation");
		
		UFLIB_SeasonPassMenu_C_UpdateSubMenuExclamation_Params params {};
		params.Sender = Sender;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.SetSeasonPassQuestListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  SBSeasonPassQuestItemData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBSeasonPassQuestCycleType                        Cycle                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  QuestName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Cleared                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UQuestRewardIcon_C*>                  ItemIconArray                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UWidgetSwitcher*                             Switcher_RewardBtn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Button_Clear                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Button_Clear_Arrow                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  RankPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Notsubscribed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsGetRewardItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_SeasonPassMenu_C::SetSeasonPassQuestListItem(const struct FSBSeasonPassQuestItemData& SBSeasonPassQuestItemData, ESBSeasonPassQuestCycleType Cycle, class UTextBlock* QuestName, class UTextBlock* Progress, class UWidget* Cleared, TArray<class UQuestRewardIcon_C*>* ItemIconArray, class UWidgetSwitcher* Switcher_RewardBtn, class UWidget* Button_Clear, class UWidget* Button_Clear_Arrow, class UTextBlock* RankPoint, class UWidget* Notsubscribed, bool IsGetRewardItem, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.SetSeasonPassQuestListItem");
		
		UFLIB_SeasonPassMenu_C_SetSeasonPassQuestListItem_Params params {};
		params.SBSeasonPassQuestItemData = SBSeasonPassQuestItemData;
		params.Cycle = Cycle;
		params.QuestName = QuestName;
		params.Progress = Progress;
		params.Cleared = Cleared;
		params.Switcher_RewardBtn = Switcher_RewardBtn;
		params.Button_Clear = Button_Clear;
		params.Button_Clear_Arrow = Button_Clear_Arrow;
		params.RankPoint = RankPoint;
		params.Notsubscribed = Notsubscribed;
		params.IsGetRewardItem = IsGetRewardItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIconArray != nullptr)
			*ItemIconArray = params.ItemIconArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.RegistReadedSeasonPassFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENewMarkContentType                                NewFlag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENewMarkContentType                                EndFlag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENewMarkContentType                                ReceiveEndFlag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_SeasonPassMenu_C::RegistReadedSeasonPassFlag(ENewMarkContentType NewFlag, ENewMarkContentType EndFlag, ENewMarkContentType ReceiveEndFlag, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.RegistReadedSeasonPassFlag");
		
		UFLIB_SeasonPassMenu_C_RegistReadedSeasonPassFlag_Params params {};
		params.NewFlag = NewFlag;
		params.EndFlag = EndFlag;
		params.ReceiveEndFlag = ReceiveEndFlag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassTiming
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Flag                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFLIB_SeasonPassMenu_C::GetSeasonPassTiming(class UObject* __WorldContext, bool* bValid, int32_t* Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassTiming");
		
		UFLIB_SeasonPassMenu_C_GetSeasonPassTiming_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValid != nullptr)
			*bValid = params.bValid;
		if (Flag != nullptr)
			*Flag = params.Flag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsUnreadedSeasonPassFlagSub
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENewMarkContentType                                InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_SeasonPassMenu_C::IsUnreadedSeasonPassFlagSub(ENewMarkContentType InCategory, class UObject* __WorldContext, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsUnreadedSeasonPassFlagSub");
		
		UFLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlagSub_Params params {};
		params.InCategory = InCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsUnreadedSeasonPassFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENewMarkContentType                                InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_SeasonPassMenu_C::IsUnreadedSeasonPassFlag(ENewMarkContentType InCategory, class UObject* __WorldContext, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsUnreadedSeasonPassFlag");
		
		UFLIB_SeasonPassMenu_C_IsUnreadedSeasonPassFlag_Params params {};
		params.InCategory = InCategory;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsEnableSeasonPassRankPurchaseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_SeasonPassMenu_C::IsEnableSeasonPassRankPurchaseMenu(class UObject* __WorldContext, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsEnableSeasonPassRankPurchaseMenu");
		
		UFLIB_SeasonPassMenu_C_IsEnableSeasonPassRankPurchaseMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsEnableSeasonPassPurchaseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_SeasonPassMenu_C::IsEnableSeasonPassPurchaseMenu(class UObject* __WorldContext, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsEnableSeasonPassPurchaseMenu");
		
		UFLIB_SeasonPassMenu_C_IsEnableSeasonPassPurchaseMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyEndCurrentSeason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_SeasonPassMenu_C::IsNearlyEndCurrentSeason(class UObject* __WorldContext, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyEndCurrentSeason");
		
		UFLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeason_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyEndCurrentSeasonProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_SeasonPassMenu_C::IsNearlyEndCurrentSeasonProgress(class UObject* __WorldContext, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyEndCurrentSeasonProgress");
		
		UFLIB_SeasonPassMenu_C_IsNearlyEndCurrentSeasonProgress_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyStartCurrentSeason
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFLIB_SeasonPassMenu_C::IsNearlyStartCurrentSeason(class UObject* __WorldContext, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.IsNearlyStartCurrentSeason");
		
		UFLIB_SeasonPassMenu_C_IsNearlyStartCurrentSeason_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USBPlayerSeasonPassComponent* UFLIB_SeasonPassMenu_C::GetSeasonPassComponent(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassComponent");
		
		UFLIB_SeasonPassMenu_C_GetSeasonPassComponent_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassComponentPure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USBPlayerSeasonPassComponent* UFLIB_SeasonPassMenu_C::GetSeasonPassComponentPure(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C.GetSeasonPassComponentPure");
		
		UFLIB_SeasonPassMenu_C_GetSeasonPassComponentPure_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFLIB_SeasonPassMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFLIB_SeasonPassMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FLIB_SeasonPassMenu.FLIB_SeasonPassMenu_C");
		return ptr;
	}

}


