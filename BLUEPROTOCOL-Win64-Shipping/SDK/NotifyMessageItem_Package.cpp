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
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetItemExpiry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetItemExpiry(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetItemExpiry");
		
		UNotifyMessageItem_C_SetItemExpiry_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetRankingReward
	 * 		Flags  -> ()
	 */
	void UNotifyMessageItem_C::SetRankingReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetRankingReward");
		
		UNotifyMessageItem_C_SetRankingReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetScreenshotFileName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetScreenshotFileName(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetScreenshotFileName");
		
		UNotifyMessageItem_C_SetScreenshotFileName_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetAutoDeliveryQuestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestCycleType                        InCycleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InQuestName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetAutoDeliveryQuestComplete(ESBSeasonPassQuestCycleType InCycleType, const class FString& InQuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetAutoDeliveryQuestComplete");
		
		UNotifyMessageItem_C_SetAutoDeliveryQuestComplete_Params params {};
		params.InCycleType = InCycleType;
		params.InQuestName = InQuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetQuestUpdateSImple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetQuestUpdateSImple(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetQuestUpdateSImple");
		
		UNotifyMessageItem_C_SetQuestUpdateSImple_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetQuestSynopsisAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetQuestSynopsisAdded(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetQuestSynopsisAdded");
		
		UNotifyMessageItem_C_SetQuestSynopsisAdded_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetInterruptQuestAwake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetInterruptQuestAwake(const class FName& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetInterruptQuestAwake");
		
		UNotifyMessageItem_C_SetInterruptQuestAwake_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetQuestUpdateProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAcceptedQuestInfo                          AcceptedQuestInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bValidProgressUiInfo                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBQuestProgressItemUIInfo                  SBQuestProgressItemUIInfo                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNotifyMessageItem_C::SetQuestUpdateProgress(const struct FAcceptedQuestInfo& AcceptedQuestInfo, bool bValidProgressUiInfo, const struct FSBQuestProgressItemUIInfo& SBQuestProgressItemUIInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetQuestUpdateProgress");
		
		UNotifyMessageItem_C_SetQuestUpdateProgress_Params params {};
		params.AcceptedQuestInfo = AcceptedQuestInfo;
		params.bValidProgressUiInfo = bValidProgressUiInfo;
		params.SBQuestProgressItemUIInfo = SBQuestProgressItemUIInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetQuestCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetQuestCompleted(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetQuestCompleted");
		
		UNotifyMessageItem_C_SetQuestCompleted_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetQuestAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetQuestAccepted(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetQuestAccepted");
		
		UNotifyMessageItem_C_SetQuestAccepted_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetWishList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBWishListType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetWishList(const class FText& Name, ESBWishListType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetWishList");
		
		UNotifyMessageItem_C_SetWishList_Params params {};
		params.Name = Name;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetWarehouseAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        AbilityName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBWarehouseAbilityCharacterStatus                 Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetWarehouseAbility(const class FText& AbilityName, ESBWarehouseAbilityCharacterStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetWarehouseAbility");
		
		UNotifyMessageItem_C_SetWarehouseAbility_Params params {};
		params.AbilityName = AbilityName;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetTutorialHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TutorialId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetTutorialHelp(const class FName& TutorialId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetTutorialHelp");
		
		UNotifyMessageItem_C_SetTutorialHelp_Params params {};
		params.TutorialId = TutorialId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetNetworkCafeRewardNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBNetworkCafeReward                        SBNetworkCafeReward                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bSucceed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNotifyMessageItem_C::SetNetworkCafeRewardNotification(const struct FSBNetworkCafeReward& SBNetworkCafeReward, bool* bSucceed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetNetworkCafeRewardNotification");
		
		UNotifyMessageItem_C_SetNetworkCafeRewardNotification_Params params {};
		params.SBNetworkCafeReward = SBNetworkCafeReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSucceed != nullptr)
			*bSucceed = params.bSucceed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetNetworkCafeLoginTimeNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NetworkCafeTotalTimePlayedToday                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetNetworkCafeLoginTimeNotification(int32_t NetworkCafeTotalTimePlayedToday)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetNetworkCafeLoginTimeNotification");
		
		UNotifyMessageItem_C_SetNetworkCafeLoginTimeNotification_Params params {};
		params.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetPartyMemberDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MemberName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessageItem_C::SetPartyMemberDead(const class FText& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetPartyMemberDead");
		
		UNotifyMessageItem_C_SetPartyMemberDead_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRecipeType                                      Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetRecipe(ESBRecipeType Selection, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetRecipe");
		
		UNotifyMessageItem_C_SetRecipe_Params params {};
		params.Selection = Selection;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetAdventurerRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetAdventurerRank(ESBPlayerPassiveImagineSlotType Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetAdventurerRank");
		
		UNotifyMessageItem_C_SetAdventurerRank_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetAchievement(int32_t InAchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetAchievement");
		
		UNotifyMessageItem_C_SetAchievement_Params params {};
		params.InAchievementId = InAchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetScreenshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessageItem_C::SetScreenshot(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetScreenshot");
		
		UNotifyMessageItem_C_SetScreenshot_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetLine2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InTextMain                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InTextSub                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessageItem_C::SetLine2(const class FText& InTextMain, const class FText& InTextSub)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetLine2");
		
		UNotifyMessageItem_C_SetLine2_Params params {};
		params.InTextMain = InTextMain;
		params.InTextSub = InTextSub;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetLine1L
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessageItem_C::SetLine1L(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetLine1L");
		
		UNotifyMessageItem_C_SetLine1L_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetLine1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessageItem_C::SetLine1(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetLine1");
		
		UNotifyMessageItem_C_SetLine1_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.SetSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENotifyMessageItemType                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::SetSwitcher(ENotifyMessageItemType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.SetSwitcher");
		
		UNotifyMessageItem_C_SetSwitcher_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNotifyMessageItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.PreConstruct");
		
		UNotifyMessageItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessageItem.NotifyMessageItem_C.ExecuteUbergraph_NotifyMessageItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessageItem_C::ExecuteUbergraph_NotifyMessageItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessageItem.NotifyMessageItem_C.ExecuteUbergraph_NotifyMessageItem");
		
		UNotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotifyMessageItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotifyMessageItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotifyMessageItem.NotifyMessageItem_C");
		return ptr;
	}

}


