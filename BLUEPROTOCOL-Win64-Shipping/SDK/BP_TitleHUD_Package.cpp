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
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.CreateHUD
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::CreateHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.CreateHUD");
		
		ABP_TitleHUD_C_CreateHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.CreateNotifyMessage
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::CreateNotifyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.CreateNotifyMessage");
		
		ABP_TitleHUD_C_CreateNotifyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.DeleteNotifyMessage
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::DeleteNotifyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.DeleteNotifyMessage");
		
		ABP_TitleHUD_C_DeleteNotifyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.DeleteHUD
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::DeleteHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.DeleteHUD");
		
		ABP_TitleHUD_C_DeleteHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.GetTermsOfUseIds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    IDs                                                        (Parm, OutParm)
	 */
	void ABP_TitleHUD_C::GetTermsOfUseIds(TArray<int32_t>* IDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.GetTermsOfUseIds");
		
		ABP_TitleHUD_C_GetTermsOfUseIds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IDs != nullptr)
			*IDs = params.IDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.Get Terms Of Service
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IndexPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Create                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBTermsOfUseInfo                           Output                                                     (Parm, OutParm)
	 */
	void ABP_TitleHUD_C::GetTermsOfService(int32_t IndexPin, bool* Create, struct FSBTermsOfUseInfo* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.Get Terms Of Service");
		
		ABP_TitleHUD_C_GetTermsOfService_Params params {};
		params.IndexPin = IndexPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Create != nullptr)
			*Create = params.Create;
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.OnLoaded_B892930043DB34F90488159C5989E221
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::OnLoaded_B892930043DB34F90488159C5989E221(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.OnLoaded_B892930043DB34F90488159C5989E221");
		
		ABP_TitleHUD_C_OnLoaded_B892930043DB34F90488159C5989E221_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddAchievementGainedMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::AddAchievementGainedMessage(int32_t InAchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddAchievementGainedMessage");
		
		ABP_TitleHUD_C_AddAchievementGainedMessage_Params params {};
		params.InAchievementId = InAchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddAdventurerRankupCompleteMessage
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::AddAdventurerRankupCompleteMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddAdventurerRankupCompleteMessage");
		
		ABP_TitleHUD_C_AddAdventurerRankupCompleteMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddAdventurerRankUpdateCompleteMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    Slot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::AddAdventurerRankUpdateCompleteMessage(ESBPlayerPassiveImagineSlotType Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddAdventurerRankUpdateCompleteMessage");
		
		ABP_TitleHUD_C_AddAdventurerRankUpdateCompleteMessage_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddAutoDeliveryQuestCompleteMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestCycleType                        InCycle                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      QuestName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::AddAutoDeliveryQuestCompleteMessage(ESBSeasonPassQuestCycleType InCycle, const class FString& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddAutoDeliveryQuestCompleteMessage");
		
		ABP_TitleHUD_C_AddAutoDeliveryQuestCompleteMessage_Params params {};
		params.InCycle = InCycle;
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddAwakeInterruptQuestMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::AddAwakeInterruptQuestMessage(const class FName& InQuestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddAwakeInterruptQuestMessage");
		
		ABP_TitleHUD_C_AddAwakeInterruptQuestMessage_Params params {};
		params.InQuestId = InQuestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddItemExpiryNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::AddItemExpiryNotifyMessage(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddItemExpiryNotifyMessage");
		
		ABP_TitleHUD_C_AddItemExpiryNotifyMessage_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddLine1LNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMessage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_TitleHUD_C::AddLine1LNotifyMessage(const class FText& InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddLine1LNotifyMessage");
		
		ABP_TitleHUD_C_AddLine1LNotifyMessage_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddLine1NotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMessage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_TitleHUD_C::AddLine1NotifyMessage(const class FText& InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddLine1NotifyMessage");
		
		ABP_TitleHUD_C_AddLine1NotifyMessage_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddLine2NotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMainMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        InSubMessage                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_TitleHUD_C::AddLine2NotifyMessage(const class FText& InMainMessage, const class FText& InSubMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddLine2NotifyMessage");
		
		ABP_TitleHUD_C_AddLine2NotifyMessage_Params params {};
		params.InMainMessage = InMainMessage;
		params.InSubMessage = InSubMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddLoginBonusNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMessage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_TitleHUD_C::AddLoginBonusNotifyMessage(const class FText& InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddLoginBonusNotifyMessage");
		
		ABP_TitleHUD_C_AddLoginBonusNotifyMessage_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddMailAcceptLimitNotifyMessage
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::AddMailAcceptLimitNotifyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddMailAcceptLimitNotifyMessage");
		
		ABP_TitleHUD_C_AddMailAcceptLimitNotifyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddRankingRewardNotifyMessage
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::AddRankingRewardNotifyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddRankingRewardNotifyMessage");
		
		ABP_TitleHUD_C_AddRankingRewardNotifyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddRecipeMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRecipeType                                      RecipeType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RecepiId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::AddRecipeMessage(ESBRecipeType RecipeType, int32_t RecepiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddRecipeMessage");
		
		ABP_TitleHUD_C_AddRecipeMessage_Params params {};
		params.RecipeType = RecipeType;
		params.RecepiId = RecepiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddTutorialHelpMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTutorialHelpId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::AddTutorialHelpMessage(const class FName& InTutorialHelpId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddTutorialHelpMessage");
		
		ABP_TitleHUD_C_AddTutorialHelpMessage_Params params {};
		params.InTutorialHelpId = InTutorialHelpId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.AddNetworkCafeLoginTimeNotificationMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NetworkCafeTotalTimePlayedToday                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLoginTimeOnly                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TitleHUD_C::AddNetworkCafeLoginTimeNotificationMessage(int32_t NetworkCafeTotalTimePlayedToday, bool bIsLoginTimeOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.AddNetworkCafeLoginTimeNotificationMessage");
		
		ABP_TitleHUD_C_AddNetworkCafeLoginTimeNotificationMessage_Params params {};
		params.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;
		params.bIsLoginTimeOnly = bIsLoginTimeOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.BeginWaitAssetLoad
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::BeginWaitAssetLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.BeginWaitAssetLoad");
		
		ABP_TitleHUD_C_BeginWaitAssetLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.WaitAssetLoad
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::WaitAssetLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.WaitAssetLoad");
		
		ABP_TitleHUD_C_WaitAssetLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.OnSoundAssetLoaded
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::OnSoundAssetLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.OnSoundAssetLoaded");
		
		ABP_TitleHUD_C_OnSoundAssetLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.ReceiveBeginPlay");
		
		ABP_TitleHUD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.StartTitle
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::StartTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.StartTitle");
		
		ABP_TitleHUD_C_StartTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.StartLogo
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::StartLogo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.StartLogo");
		
		ABP_TitleHUD_C_StartLogo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.OnFinish_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::OnFinish_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.OnFinish_Event_1");
		
		ABP_TitleHUD_C_OnFinish_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.LoginMenu
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::LoginMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.LoginMenu");
		
		ABP_TitleHUD_C_LoginMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.OnLoginCompleted_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::OnLoginCompleted_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.OnLoginCompleted_Event_1");
		
		ABP_TitleHUD_C_OnLoginCompleted_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.ReceiveEndPlay");
		
		ABP_TitleHUD_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.ExecNetworkCafe_Event
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::ExecNetworkCafe_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.ExecNetworkCafe_Event");
		
		ABP_TitleHUD_C_ExecNetworkCafe_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.StartTermsOfService
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::StartTermsOfService()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.StartTermsOfService");
		
		ABP_TitleHUD_C_StartTermsOfService_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Approval                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TitleHUD_C::CustomEvent_1(bool Approval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.CustomEvent_1");
		
		ABP_TitleHUD_C_CustomEvent_1_Params params {};
		params.Approval = Approval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.TryCreateTermsOfService
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::TryCreateTermsOfService()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.TryCreateTermsOfService");
		
		ABP_TitleHUD_C_TryCreateTermsOfService_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.OnTermsOfUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBTermsOfUseInfo>                   TermsOfUseList                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_TitleHUD_C::OnTermsOfUse(TArray<struct FSBTermsOfUseInfo> TermsOfUseList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.OnTermsOfUse");
		
		ABP_TitleHUD_C_OnTermsOfUse_Params params {};
		params.TermsOfUseList = TermsOfUseList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.OnTermsOfRead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::OnTermsOfRead(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.OnTermsOfRead");
		
		ABP_TitleHUD_C_OnTermsOfRead_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.LogoFinish
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::LogoFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.LogoFinish");
		
		ABP_TitleHUD_C_LogoFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.LoadCharaLayer
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::LoadCharaLayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.LoadCharaLayer");
		
		ABP_TitleHUD_C_LoadCharaLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_TitleHUD_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.ReceiveDestroyed");
		
		ABP_TitleHUD_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TitleHUD.BP_TitleHUD_C.ExecuteUbergraph_BP_TitleHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TitleHUD_C::ExecuteUbergraph_BP_TitleHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TitleHUD.BP_TitleHUD_C.ExecuteUbergraph_BP_TitleHUD");
		
		ABP_TitleHUD_C_ExecuteUbergraph_BP_TitleHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TitleHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TitleHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TitleHUD.BP_TitleHUD_C");
		return ptr;
	}

}


